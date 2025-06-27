package Classes;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Pessoa pessoa = new Pessoa();

        System.out.print("Olá, seja bem-vindo à nossa calculadora de IMC!");
        System.out.println();

        System.out.print("Digite seu nome: ");
        pessoa.nome = scanner.nextLine();

        System.out.print("Digite sua altura em cm: ");
        pessoa.altura = scanner.nextInt();
        pessoa.altura = pessoa.altura / 100.0;

        System.out.print("Digite seu peso em kg: ");
        pessoa.peso = scanner.nextInt();

        double imc = pessoa.imc();

        // Exibindo a classificação com base no IMC
        System.out.printf("Olá, %s! Seu IMC é: %.2f\n", pessoa.nome, imc);

        if (imc < 18.5) {
            System.out.println("Classificação: Abaixo do peso");
        } else if (imc >= 18.5 && imc < 25) {
            System.out.println("Classificação: Peso normal");
        } else if (imc >= 25 && imc < 30) {
            System.out.println("Classificação: Sobrepeso");
        } else if (imc >= 30 && imc < 35) {
            System.out.println("Classificação: Obesidade grau 1");
        } else if (imc >= 35 && imc < 40) {
            System.out.println("Classificação: Obesidade grau 2 (severa)");
        } else {
            System.out.println("Classificação: Obesidade grau 3 (mórbida)");
        }



        scanner.close();
    }
}
