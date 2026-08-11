package com.projeto_final;

import dao.Dao;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.scene.control.ComboBox;
import javafx.scene.control.DatePicker;
import javafx.scene.control.Label;
import model.Motorista;
import model.RegistroUso;
import model.Veiculo;
import java.io.IOException;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.util.List;

public class ControllerRetirada {
    
    @FXML private ComboBox<String> comboVeiculo;
    @FXML private ComboBox<String> comboMotorista;
    @FXML private DatePicker dateData;
    @FXML private Label lblAviso;
    
    @FXML
    public void initialize() {
        dateData.setValue(LocalDate.now());
        
        carregarVeiculos();
        
        carregarMotoristas();
    }
    
    private void carregarVeiculos() {
        Dao<Veiculo> dao = new Dao<>(Veiculo.class);
        ObservableList<String> veiculos = FXCollections.observableArrayList();
        
        List<Veiculo> listaVeiculos = dao.listarTodos();
        
        for (Veiculo v : listaVeiculos) {
            veiculos.add(v.getPlaca() + " - " + v.getModelo());
        }
        
        comboVeiculo.setItems(veiculos);
    }
    
    private void carregarMotoristas() {
        Dao<Motorista> dao = new Dao<>(Motorista.class);
        ObservableList<String> motoristas = FXCollections.observableArrayList();
        
        List<Motorista> listaMotoristas = dao.listarTodos();
        
        for (Motorista m : listaMotoristas) {
            motoristas.add(m.getCodigo() + " - " + m.getNome());
        }
        
        comboMotorista.setItems(motoristas);
    }
    
    @FXML
    public void gravar() {
        if (comboVeiculo.getValue() == null) {
            lblAviso.setText("Selecione um veículo!");
            lblAviso.setStyle("-fx-text-fill: #DC143C;");
            return;
        }
        
        if (comboMotorista.getValue() == null) {
            lblAviso.setText("Selecione um motorista!");
            lblAviso.setStyle("-fx-text-fill: #DC143C;");
            return;
        }
        
        if (dateData.getValue() == null) {
            lblAviso.setText("Selecione uma data!");
            lblAviso.setStyle("-fx-text-fill: #DC143C;");
            return;
        }
        
        String veiculoSelecionado = comboVeiculo.getValue();
        String placa = veiculoSelecionado.split(" - ")[0];
        
        String motoristaSelecionado = comboMotorista.getValue();
        String codigoMotorista = motoristaSelecionado.split(" - ")[0];
        
        LocalDate dataSelecionada = dateData.getValue();
        LocalDateTime dataHoraRetirada = dataSelecionada.atTime(LocalTime.now());
        
        try {
            RegistroUso registro = new RegistroUso();
            registro.setPlacaVeiculo(placa);
            registro.setCodigoMotorista(codigoMotorista);
            registro.setDataHoraRetirada(dataHoraRetirada);
            
            Dao<RegistroUso> dao = new Dao<>(RegistroUso.class);
            dao.inserir(registro);
            
            lblAviso.setText("Retirada registrada com sucesso!");
            lblAviso.setStyle("-fx-text-fill: #90EE90");
     
            limparCampos();
            
        } catch (Exception e) {
            lblAviso.setText("Erro: " + e.getMessage());
            lblAviso.setStyle("-fx-text-fill: #DC143C;");
        }
    }
    
    @FXML
    public void cancelar() throws IOException {
        App.setRoot("tela_finalidades");
    }
    
    @FXML
    public void limparCampos() {
        comboVeiculo.setValue(null);
        comboMotorista.setValue(null);
        dateData.setValue(LocalDate.now());
    }
}