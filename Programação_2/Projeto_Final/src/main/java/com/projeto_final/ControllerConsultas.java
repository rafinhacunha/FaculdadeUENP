package com.projeto_final;

import dao.Dao;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ListView;
import model.RegistroUso;
import java.io.IOException;
import java.time.format.DateTimeFormatter;
import java.util.Comparator;
import java.util.List;

public class ControllerConsultas {
    
    @FXML private ListView<String> listaRetiradas;
    @FXML private Label lblAviso;
    @FXML private Label lblContador;
    
    private ObservableList<String> retiradasList;
    private DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm");
    
    @FXML
    public void initialize() {
        carregarRetiradas();
    }
    
    private void carregarRetiradas() {
        Dao<RegistroUso> dao = new Dao<>(RegistroUso.class);
        retiradasList = FXCollections.observableArrayList();
        
        // Buscar todos os registros
        List<RegistroUso> todosRegistros = dao.listarTodos();
        
        // Ordenar por data de retirada (mais recente primeiro)
        todosRegistros.sort(Comparator.comparing(RegistroUso::getDataHoraRetirada).reversed());
        
        for (RegistroUso registro : todosRegistros) {
            String status = registro.getDataHoraDevolucao() != null ? 
                "✓ Devolvido" : "● Em uso";
            
            String texto = String.format(
                "%s | %s | %s | %s",
                registro.getPlacaVeiculo(),
                registro.getCodigoMotorista(),
                registro.getDataHoraRetirada().format(formatter),
                status
            );
            retiradasList.add(texto);
        }
        
        listaRetiradas.setItems(retiradasList);
        
        // Atualizar contador
        int total = todosRegistros.size();
        int emUso = (int) todosRegistros.stream()
            .filter(r -> r.getDataHoraDevolucao() == null)
            .count();
        int devolvidos = total - emUso;
        
        lblContador.setText(String.format("Total: %d | Em uso: %d | Devolvidos: %d", 
            total, emUso, devolvidos));
        
        if (total == 0) {
            lblAviso.setText("Nenhuma retirada registrada.");
            lblAviso.setStyle("-fx-text-fill: #DC143C;");
        } else {
            lblAviso.setText("");
        }
    }
    
    @FXML
    public void atualizar() {
        carregarRetiradas();
        lblAviso.setText("Lista atualizada!");
        lblAviso.setStyle("-fx-text-fill: #90EE90;");
    }
    
    @FXML
    public void voltar() throws IOException {
        App.setRoot("tela_finalidades");
    }
    
    @FXML
    public void limpar() {
        listaRetiradas.getItems().clear();
        lblContador.setText("");
        lblAviso.setText("Lista limpa.");
        lblAviso.setStyle("-fx-text-fill: #DC143C;");
    }
}