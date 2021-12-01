#include <stdio.h>
#include <stdlib.h>
void imprime();

int main(void)
{
    // printf("codigo imprimindo a si proprio");
    imprime();
    return EXIT_SUCCESS;
}
void imprime()
{
    char programa[2000];
    FILE * fluxo = fopen("programa Autoimpressão.cpp", "r"); //Abre o arquivo cujo nome é especificado no parâmetro 
    if ( fluxo == 0)
    {
        printf("ERRO! O PROGRAMA NAO PODE SER EXECUTADO.\n");
    }
    while (fgets(programa, 2000,  fluxo) != NULL) //Lê do fluxo para a cadeia de caracteres string até a quantidade de caracteres.
        printf("%s", programa);
    fclose( fluxo);
}