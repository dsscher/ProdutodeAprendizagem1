#include <stdio.h>
#include <locale.h>

typedef struct{
    int codigo, diaNasc, mesNasc, anoNasc;
    char nome[50], nomeMae[50], nomePai[50];
    //
    int diaUltima, mesUltima, anoUltima;
    float peso, altura, valorPago;
}dadosPaciente;

dadosPaciente paciente[100];
int i = 0;

void a(){
    printf("Digite o código do paciente: ");
        scanf("%d", &paciente[i].codigo);
        printf("Digite a data de nascimento do paciente conforme o exemplo (29 12 2005): ");
        scanf("%d %d %d", &paciente[i].diaNasc, &paciente[i].mesNasc, &paciente[i].anoNasc);
        fflush(stdin);
        printf("Digite o nome do paciente: ");
        fgets(paciente[i].nome, 50, stdin);
        fflush(stdin);
        printf("Digite o nome da mãe do paciente: ");
        fgets(paciente[i].nomeMae, 50, stdin);
        fflush(stdin);
        printf("Digite o nome do pai do paciente: ");
        fgets(paciente[i].nomePai, 50, stdin);
        fflush(stdin);
}

void b(){
    int codigoR, indice, j;
        printf("Digite o código do paciente que deseja registrar consulta: ");
        scanf("%d", &codigoR);
        for(j = 0; paciente; j++){
            if(paciente[j].codigo == codigoR){
                indice = j;
            }
        }
        printf("Digite a data da última consulta do paciente conforme o exemplo (29 12 2005): ");
        scanf("%d %d %d", &paciente[j].diaUltima, &paciente[j].mesUltima, &paciente[j].anoUltima);
        printf("Digite o peso do paciente na última consulta (em kg): ");
        scanf("%f", &paciente[j].peso);
        printf("Digite a altura do paciente na última consulta (em cm): ");
        scanf("%f", &paciente[j].altura);
        printf("Digite o valor pago pelo paciente na última consulta: ");
        scanf("%f", &paciente[j].valorPago);
}

int main(){
    setlocale(LC_ALL, "pt_BR");
    char opcao;
    printf("Consultório pediátrico - Controle de Pacientes\n");
    printf("\nMenu de opções:\nA) Cadastrar Paciente\nB) Registrar Consulta\nC) Visualizar Prescrição\nD) Listar Pacientes\nE) Valor total recebido no mês\nF) Finalizar\n");
    scanf(" %c", &opcao);

    if(opcao == 'a' || opcao == 'A'){
        a();
        i++;
    }
    else if(opcao == 'b' || opcao == 'B'){
        b();
    }
    else if(opcao == 'c' || opcao == 'C'){

    }
    else if(opcao == 'd' || opcao == 'D'){

    }
    else if(opcao == 'e' || opcao == 'E'){
        
    }
    else if(opcao == 'f' || opcao == 'F'){
        return 0;
    }
    else{
        printf("Opção inválida.");
    }
    return 0;
}