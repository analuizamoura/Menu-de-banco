#include <stdio.h>
#include <stdlib.h>

    double valor = 0.0;
    int numero = 0;
    int opcao = 0;
    double soma = 0.0;


    void dep (void)
    {
        printf ("\nQuanto quer depositar? \n");
        scanf ("%lf" , &valor);
        soma = valor + soma;
    }



int main ()
{


    printf ("Qual o numero da conta? \n");
    scanf ("%d" , &numero);

    printf ("Quanto tem a conta? \n");
    scanf ("%lf" , &soma);



    do
    {
        printf ("\n%s%d\n" , "Numero da conta: " , numero);
        printf ("\n%s%.2lf\n" , "Valor atual da conta : " , soma);
        printf("\n1 - Deposito\n");
        printf ("Qual opcao? ");
        scanf("%d" , &opcao);
        getchar();


      switch (opcao)
      {
        case 1 : dep(); break;
        default:
            printf ( "\nERRO: Opcao invalida.\n" );
            break;
      }
    }
    while( opcao != 0 );


    return 0;


}
