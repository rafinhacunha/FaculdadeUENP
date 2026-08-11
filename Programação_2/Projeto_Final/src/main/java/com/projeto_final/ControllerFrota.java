package com.projeto_final;

import java.io.IOException;
import javafx.fxml.FXML;

public class ControllerFrota {
    
    @FXML
    private void registrarUsuario() throws IOException{
        App.setRoot("tela_usuario");
    }
    
    @FXML
    private void entrar() throws IOException{
        App.setRoot("tela_entrar");
    }
}
