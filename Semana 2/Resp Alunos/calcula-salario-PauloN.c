//Programa calcula salário recebe o valor do salário e o código referente a sua função
// A tabela a seguir apresenta os cargos e seus respectivos aumentos:

//   Códigos        |         Cargo           |      Aumento
//     1                   Desenvolvedor Java           30%
//     2                   Analista de Redes            25%
//     3                   Arquiteto DevOps             50%
//     4                   Técnico de Suporte           13%

// Cargo: \n Salário atual \n Aumento \n Novo Salário:
#include <stdio.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario, aumentoProporcional, novoSalario, aumentoPorcentagem;
    char nome[40];
    char cargo[40];
    int codigo;

    printf("Digite o seu nome: ");
    // scanf("%40s", nome);
    fgets(nome, 40, stdin);

    printf("Olá %s! Escolha o código referente ao seu cargo: \n 1 - Desenvolvedor Java\n 2 - Analista de Redes \n 3 - Arquiteto DevOps \n 4 - Técnico de Suporte \n Insira o código: ", nome);
    scanf("%i", &codigo);
    
    //Nessa parte o switch case vai coletar a informação do cargo e definir o valor da porcentagem do aumento. Esses valores serão usados a seguir.
    switch (codigo){
        case 1:
        aumentoPorcentagem = 0.30;
        strcpy(cargo, "Desenvolvedor Java");
        break;
        
        case 2:
        aumentoPorcentagem = 0.25;
        strcpy(cargo, "Analista de Redes");
        break;

        case 3:
        aumentoPorcentagem = 0.5;
        strcpy(cargo, "Arquiteto DevOps");
        break;

        case 4:
        aumentoPorcentagem = 0.13;
        strcpy(cargo, "Técnico de Suporte");
        break; 

        default:
        printf("Operação inválida");
    }

    if(codigo<=4){
        
        printf("%s, digite o seu salário: ", nome);
        scanf("%f", &salario);
        
        //Aqui é feito o calculo do aumento
        aumentoProporcional = salario*aumentoPorcentagem;
        novoSalario = salario+aumentoProporcional;

        // Precisa dar saída no nome, cargo, aumento e salário com aumento.
        printf("%s, o seu aumento salarial é de %.2f, e o seu novo salário é de: %.2f", nome, aumentoProporcional, novoSalario);
    }
    


    return 0;
}