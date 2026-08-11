
package com.mycompany.trabalho;

import com.mycompany.trabalho.model.Cliente;
import com.mycompany.trabalho.model.Endereco;
import com.mycompany.trabalho.util.Buscador;
import java.io.IOException;
import javafx.beans.property.SimpleStringProperty;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.TextField;
import javafx.scene.control.cell.PropertyValueFactory;

public class ClienteController {

    @FXML private TextField txtNome;
    @FXML private TextField txtTelefone;
    @FXML private TextField txtCep;
    @FXML private TextField txtRua;
    @FXML private TextField txtNumero;
    @FXML private TextField txtCidade;
    @FXML private TextField txtEstado;

    @FXML private TableView<Cliente> tabelaClientes;
    @FXML private TableColumn<Cliente, Integer> colunaCodigo;
    @FXML private TableColumn<Cliente, String> colunaNome;
    @FXML private TableColumn<Cliente, String> colunaTelefone;
    @FXML private TableColumn<Cliente, String> colunaRua;
    @FXML private TableColumn<Cliente, String> colunaCidade;
    @FXML private TableColumn<Cliente, String> colunaEstado;

    private Buscador buscador;
    private ObservableList<Cliente> listaClientes;

    @FXML
    public void initialize() {
        buscador = new Buscador();
        listaClientes = FXCollections.observableArrayList();

        colunaCodigo.setCellValueFactory(new PropertyValueFactory<>("codigo"));
        colunaNome.setCellValueFactory(new PropertyValueFactory<>("nome"));
        colunaTelefone.setCellValueFactory(new PropertyValueFactory<>("telefone"));

        colunaRua.setCellValueFactory(c -> new SimpleStringProperty(
                c.getValue().getEndereco() != null ? c.getValue().getEndereco().getRua() : ""
        ));
        colunaCidade.setCellValueFactory(c -> new SimpleStringProperty(
                c.getValue().getEndereco() != null ? c.getValue().getEndereco().getCidade() : ""
        ));
        colunaEstado.setCellValueFactory(c -> new SimpleStringProperty(
                c.getValue().getEndereco() != null ? c.getValue().getEndereco().getEstado() : ""
        ));

        tabelaClientes.setItems(listaClientes);
    }

    @FXML
    public void buscarCep() {
        try {
            Endereco endereco = buscador.buscar(txtCep.getText().trim());
            txtRua.setText(endereco.getRua());
            txtCidade.setText(endereco.getCidade());
            txtEstado.setText(endereco.getEstado());
        } catch (IllegalArgumentException iae) {
            new Alert(Alert.AlertType.ERROR, "Formato do CEP inválido. Use 99999-999").showAndWait();
        } catch (IOException e) {
            new Alert(Alert.AlertType.ERROR, "Erro ao buscar CEP: " + e.getMessage()).showAndWait();
        } catch (Exception e) {
            new Alert(Alert.AlertType.ERROR, "Erro inesperado: " + e.getMessage()).showAndWait();
        }
    }

    @FXML
    public void cadastrarCliente() {
        if (txtNome.getText().trim().isEmpty()) {
            new Alert(Alert.AlertType.WARNING, "Preencha o nome").showAndWait();
            return;
        }
        Endereco endereco = new Endereco(
                txtCep.getText().trim(),
                txtRua.getText().trim(),
                txtNumero.getText().trim(),
                txtCidade.getText().trim(),
                txtEstado.getText().trim()
        );

        Cliente cliente = new Cliente(txtNome.getText().trim(), endereco, txtTelefone.getText().trim());
        listaClientes.add(cliente);
        limparCampos();
    }

    private void limparCampos() {
        txtNome.clear();
        txtTelefone.clear();
        txtCep.clear();
        txtRua.clear();
        txtNumero.clear();
        txtCidade.clear();
        txtEstado.clear();
    }
}
