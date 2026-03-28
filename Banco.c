#include <stdio.h>
#include <stdlib.h>

    double valor = 0.0;
    int numero = 0;
    double soma = 0.0;


    void dep (void) //metodo para realizar o deposito
    {
        int controlador = 0;
        do
        {
          printf ("\nQuanto quer depositar? \n");
          scanf ("%lf" , &valor);
          soma = valor + soma;
          printf("\n%s\n" , "Deseja depositar mais? (1- sim  2- nao) ");
          scanf ("%d" , &controlador);
        } while (controlador == 1);


    }

    void saque (void) //metodo para realizar o saque
    {
        int controlador = 0;
        do
        {
          printf ("\nQuanto quer sacar? \n");
          scanf("%lf" , &valor);
          soma = soma - valor;
          printf("\n%s\n" , "Deseja sacar mais? (1- sim  2- nao) ");
          scanf ("%d" , &controlador);
        }
        while (controlador == 1);
    }



int main ()
{
    int opcao = 0;

    printf ("Qual o numero da conta? \n");
    scanf ("%d" , &numero);

    printf ("Quanto tem a conta? \n");
    scanf ("%lf" , &soma);



    do //menu
    {

        printf ("\n%s%d\n" , "Numero da conta: " , numero);
        printf ("\n%s%.2lf\n" , "Valor atual da conta : " , soma);
        printf ("\n0 - Terminar");
        printf("\n1 - Deposito");
        printf ("\n2 - Saque");
        printf ("\nQual opcao? ");
        scanf("%d" , &opcao);
        getchar();


      switch (opcao)
      {
        case 0 : break;
        case 1 : dep(); break;
        case 2 : saque(); break;
        default:
            printf ( "\nERRO: Opcao invalida.\n" );
            break;
      }
    }
    while( opcao != 0 );

    printf ("Aperte ENTER para encerrar");
    getchar();


    return 0;

}
