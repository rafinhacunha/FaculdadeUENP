package com.projeto_final;

import java.io.IOException;
import javafx.fxml.FXML;

public class ControllerFinalidades {
    
    @FXML
    private void registrarMotorista() throws IOException {
        App.setRoot("tela_motorista");
    }
    
    @FXML
    private void registrarVeiculo() throws IOException {
        App.setRoot("tela_veiculo");
    }
    
    @FXML
    private void registrarRetirada() throws IOException {
        App.setRoot("tela_retirada");
    }
    
    @FXML
    private void registrarDevolucao() throws IOException {
        App.setRoot("tela_devolucao");
    }
    
    @FXML
    private void consultarUtilizacoes() throws IOException {
        App.setRoot("tela_consultas");
    }
    
    @FXML
    private void sair() throws IOException {
        App.setRoot("tela_frota");
    }
}