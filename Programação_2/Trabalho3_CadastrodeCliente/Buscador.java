package com.mycompany.trabalho;

import com.google.gson.Gson;
import com.mycompany.trabalho.model.Endereco;
import java.io.IOException;
import org.apache.http.HttpEntity;
import org.apache.http.client.methods.CloseableHttpResponse;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.CloseableHttpClient;
import org.apache.http.impl.client.HttpClientBuilder;
import org.apache.http.util.EntityUtils;

public class Buscador {

    public Endereco buscar(String cep) throws IOException {
        if (!cep.matches("\\d{5}-\\d{3}")) {
            throw new IllegalArgumentException("O formato não é válido. Use 99999-999");
        }

        HttpGet request = new HttpGet("https://viacep.com.br/ws/" + cep + "/json/");
        CloseableHttpClient httpClient = HttpClientBuilder.create().disableRedirectHandling().build();
        CloseableHttpResponse response = null;

        try {
            response = httpClient.execute(request);
        } catch (java.net.UnknownHostException uhe) {
            throw new IOException("Erro ao conectar com o serviço ViaCep");
        }

        HttpEntity entity = response.getEntity();
        String retorno = EntityUtils.toString(entity);

        if (retorno.contains("\"erro\": true") || retorno.contains("\"erro\":")) {
            response.close();
            httpClient.close();
            throw new IOException("O CEP não foi encontrado");
        }

        Gson gson = new Gson();
        EnderecoInterno interno = gson.fromJson(retorno, EnderecoInterno.class);

        response.close();
        httpClient.close();

        // mapear: cep, logradouro (rua), numero vazio, localidade (cidade), uf (estado)
        return new Endereco(interno.cep, interno.logradouro, "", interno.localidade, interno.uf);
    }

    // classe interna para receber o JSON do ViaCEP
    private class EnderecoInterno {
        String cep;
        String logradouro;
        String complemento;
        String bairro;
        String localidade;
        String uf;
        String ibge;
        String gia;
        String ddd;
        String siafi;
    }
}