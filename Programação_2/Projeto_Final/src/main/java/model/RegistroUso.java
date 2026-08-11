package model;

import java.time.LocalDateTime;

public class RegistroUso {
    private String placaVeiculo;
    private String codigoMotorista;
    private LocalDateTime dataHoraRetirada;
    private LocalDateTime dataHoraDevolucao;
    
    public RegistroUso() {
    }
    
    public RegistroUso(String placaVeiculo, String codigoMotorista) {
        this.placaVeiculo = placaVeiculo;
        this.codigoMotorista = codigoMotorista;
        this.dataHoraRetirada = LocalDateTime.now();
    }
    
    public String getPlacaVeiculo() {
        return placaVeiculo;
    }
    
    public void setPlacaVeiculo(String placaVeiculo) {
        this.placaVeiculo = placaVeiculo;
    }
    
    public String getCodigoMotorista() {
        return codigoMotorista;
    }
    
    public void setCodigoMotorista(String codigoMotorista) {
        this.codigoMotorista = codigoMotorista;
    }
    
    public LocalDateTime getDataHoraRetirada() {
        return dataHoraRetirada;
    }
    
    public void setDataHoraRetirada(LocalDateTime dataHoraRetirada) {
        this.dataHoraRetirada = dataHoraRetirada;
    }
    
    public LocalDateTime getDataHoraDevolucao() {
        return dataHoraDevolucao;
    }
    
    public void setDataHoraDevolucao(LocalDateTime dataHoraDevolucao) {
        this.dataHoraDevolucao = dataHoraDevolucao;
    }
    
    public boolean isDevolvido() {
        return dataHoraDevolucao != null;
    }
}