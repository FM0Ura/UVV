package Gestao_RH;

public class Funcionario {
    // ATRIBUTOS DA CLASSE
    int matricula;
    String nome;
    String cargoAtual;
    float salarioAtual;


    // MÉTODOS DA CLASSE
    public void cadastrar(){
        System.out.println("Esse método cadastra um novo funcionário no RH da empresa!\n");
    }
    public void consultar(){
        System.out.println("Esse método consulta todos os funcionários da empresa!\n");
    }
    public void atualizarSalario(float novoSalario){
        System.out.println("Esse método atualiza o salário de um funcionário!\n");
    }
    public void listarDependentes(){
        System.out.println("Esse método lista os dependentes de todos os funcionário!\n");
    }

    // CONSTRUTOR

    public Funcionario(int matricula, String nome, String cargoAtual, float salarioAtual) {
        this.matricula = matricula;
        this.nome = nome;
        this.cargoAtual = cargoAtual;
        this.salarioAtual = salarioAtual;
    }
}
