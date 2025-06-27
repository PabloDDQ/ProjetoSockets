package Funcionarios;

public class Tercerizado extends Trabalhador{
    public Tercerizado(String nome, double valorHora, int horasTrabalhadas) {
        super(nome, valorHora, horasTrabalhadas);
    }


    @Override
    public double calcularSalario(){
        return getHorasTrabalhadas() * getValorHora() + 200; //O funcionario tercerizado tem sempre um bonus de R$200
    }
}
