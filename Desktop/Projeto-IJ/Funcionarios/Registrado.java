package Funcionarios;

public class Registrado extends Trabalhador{

    public Registrado(String nome, double valorHora, int horasTrabalhadas) {
        super(nome, valorHora, horasTrabalhadas);
    }

    @Override
    public double calcularSalario(){
        return getHorasTrabalhadas() * getValorHora();
    }
}
