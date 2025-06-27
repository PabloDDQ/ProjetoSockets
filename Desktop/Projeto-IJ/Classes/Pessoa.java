package Classes;

public class Pessoa {
    public String nome;
    public double altura;
    public double peso;

    public double imc(){
        return peso / (altura * altura);
    }
}