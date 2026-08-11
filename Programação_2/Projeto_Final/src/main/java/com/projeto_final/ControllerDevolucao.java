package com.projeto_final;

import dao.Dao;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import model.RegistroUso;
import java.io.IOException;
import java.time.LocalDateTime;
import java.util.List;

public class ControllerDevolucao {
    
    @FXML private ComboBox<String> comboRetiradas;
    @FXML private Label lblAviso;
    
    @FXML
    public void initialize() {
        // Carregar retiradas ativas
        carregarRetiradasAtivas();
    }
    
    private void carregarRetiradasAtivas() {
        Dao<RegistroUso> dao = new Dao<>(RegistroUso.class);
        ObservableList<String> retiradas = FXCollections.observableArrayList();
        
        // Buscar todos os registros
        List<RegistroUso> todosRegistros = dao.listarTodos();
        
        for (RegistroUso registro : todosRegistros) {
            // Verificar se ainda não foi devolvido
            if (registro.getDataHoraDevolucao() == null) {
                retiradas.add(registro.getPlacaVeiculo() + 
                    " - Motorista: " + registro.getCodigoMotorista());
            }
        }
        
        comboRetiradas.setItems(retiradas);
        
        // Se não houver retiradas ativas
        if (retiradas.isEmpty()) {
            lblAviso.setText("Não há retiradas pendentes para devolução.");
            lblAviso.setStyle("-fx-text-fill: #DC143C;");
        }
    }
    
    @FXML
    public void gravar() {
        // Verificar se selecionou uma retirada
        if (comboRetiradas.getValue() == null) {
            lblAviso.setText("Selecione uma retirada!");
            lblAviso.setStyle("-fx-text-fill: #DC143C;");
            return;
        }
        
        // Extrair placa da seleção
        String selecao = comboRetiradas.getValue();
        String placa = selecao.split(" - ")[0];
        
        try {
            // Buscar e atualizar o registro
            Dao<RegistroUso> dao = new Dao<>(RegistroUso.class);
            List<RegistroUso> todosRegistros = dao.listarTodos();
            
            for (RegistroUso registro : todosRegistros) {
                if (registro.getPlacaVeiculo().equals(placa) && 
                    registro.getDataHoraDevolucao() == null) {
                    
                    // Marcar como devolvido (data atual)
                    registro.setDataHoraDevolucao(LocalDateTime.now());
                    
                    // Atualizar no banco
                    dao.alterar("placaVeiculo", placa, registro);
                    
                    // Mensagem de sucesso
                    lblAviso.setText("Devolução registrada com sucesso!");
                    lblAviso.setStyle("-fx-text-fill: #90EE90");
                    
                    // Atualizar lista
                    carregarRetiradasAtivas();
                    comboRetiradas.setValue(null);
                    
                    return;
                }
            }
            
            lblAviso.setText("Registro não encontrado!");
            lblAviso.setStyle("-fx-text-fill: #DC143C;");
            
        } catch (Exception e) {
            lblAviso.setText("Erro: " + e.getMessage());
            lblAviso.setStyle("-fx-text-fill: #DC143C;");
        }
    }
    
    @FXML
    public void cancelar() throws IOException {
        App.setRoot("tela_finalidades");
    }
}