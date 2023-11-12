package Gestao_RH;

public class Main {
        public static void main(String[] args) {
            Funcionario funcionario1 = new Funcionario(123,"Felipe Moura", "CEO", 12323 );
            System.out.println("A mátricula atual do funcionário é " + funcionario1.matricula + ".\n");
            System.out.println("O nome do funcionário é " + funcionario1.nome + ".\n");
            System.out.println("O cargo atual do funcionário é " + funcionario1.cargoAtual + ".\n");
            System.out.println("O salário atual do funcionário é " + funcionario1.salarioAtual + ".\n");

            funcionario1.cadastrar();
            funcionario1.consultar();
            funcionario1.atualizarSalario(12222222);
            funcionario1.listarDependentes();
    }
}
