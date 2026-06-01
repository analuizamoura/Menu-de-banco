#include <stdio.h>
#include <stdlib.h>


void salvarDados(char *numero, double saldo) 
{
    char nomeArquivo[30];
    
    sprintf(nomeArquivo, "%s.txt", numero);

    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo != NULL) 
    {
        fprintf(arquivo, "%.2lf\n", saldo); 
        fclose(arquivo);
        printf("\nDados salvos com sucesso no arquivo %s!\n", nomeArquivo);
    } 
    else 
    {
        printf("\nErro ao abrir o arquivo para salvar.\n");
    }
}

void recuperarDados(char *numero, double *saldo) 
{
    char nomeArquivo[30];
    
    sprintf(nomeArquivo, "%s.txt", numero);

    FILE *arquivo = fopen(nomeArquivo, "r");

    if (arquivo != NULL) 
    {
        
        fscanf(arquivo, "%lf", saldo);
        fclose(arquivo);
        printf("\nDados recuperados com sucesso! Conta encontrada.\n");
    } 
    else 
    {
      
        printf("\nNenhum historico encontrado. Iniciando conta nova com saldo 0.00.\n");
        printf ("Aperte ENTER para continuar\n");
        getchar();
        *saldo = 0.0; 
    }
}

void dep (double* saldo) //metodo para realizar o deposito
{
    double valor = 0.0;
    int controlador = 0;
    do
    {
      printf ("\nQuanto quer depositar? \n");
      scanf ("%lf" , &valor);
      *saldo = valor + *saldo;
      printf("\n%s\n" , "Deseja depositar mais? (1- sim  2- nao) ");
      scanf ("%d" , &controlador);
    } while (controlador == 1);


}

void saque (double* saldo) //metodo para realizar o saque
{
    double valor = 0.0;
    int controlador = 0;
    do
    {
      printf ("\nQuanto quer sacar? \n");
      scanf("%lf" , &valor);getchar();
        
      if (valor <= *saldo)
      {
        *saldo = *saldo - valor;
        printf("\n%s\n" , "Deseja sacar mais? (1- sim  2- nao) ");
        scanf ("%d" , &controlador);
      }
      else
      {
        printf("\nValor maior que o saldo atual!\n");
        printf ("Aperte ENTER para continuar");
        getchar();

        printf("\n%s\n" , "Deseja sacar outro valor? (1- sim  2- nao) ");
        scanf ("%d" , &controlador);

      }
    }
    while (controlador == 1);
}



int main ()
{
    char numero [20] = "";
    double soma = 0.0;

    int opcao = 0;

    printf ("Qual o numero da conta? \n");
    scanf ("%s" , numero);getchar();

    recuperarDados(numero, &soma);

    do //menu
    {

        printf("--------------------------------------------");
        printf ("\n%s%s" , "Numero da conta: " , numero);
        printf ("\n%s%.2lf\n" , "Valor atual da conta : " , soma);
        printf ("\n0 - Terminar");
        printf ("\n1 - Deposito");
        printf ("\n2 - Saque");
        printf("\n--------------------------------------------");
        printf ("\nQual opcao? ");
        scanf  ("%d" , &opcao);
        getchar();


      switch (opcao)
      {
        case 0 : break;
        case 1 : dep(&soma); break;
        case 2 : saque(&soma); break;
        default:
            printf ( "\nERRO: Opcao invalida.\n" );
            break;
      }
    }
    while( opcao != 0 );

    salvarDados(numero, soma);

    printf ("Aperte ENTER para encerrar");
    getchar();


    return 0;

}
