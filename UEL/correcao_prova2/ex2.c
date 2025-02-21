#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Quest‹o 1
typedef struct animal{
    int id;
    char nome[50];
    char raca[50];
    float peso;
    int nascimento;
} Animal;

// Quest‹o 2
int main()
{
    Animal listaAnimal[10];
    int option, qtd = 0;
    do{
        printf("--- MENU --- \n");
        printf("1 - Cadastrar Animal \n2 - Listar Animais \n0 - Sair\n");
        scanf("%d", &option);
        switch(option){
            case 1:
                if(qtd < 10){
                    listaAnimal[qtd].id = qtd+1;
                    char nome[50], raca[50];
                    int repetido = 0;
                    do{
                        repetido = 0;
                        printf("Digite o nome do Animal %d \n", qtd+1);
                        scanf(" %[^\n]", nome);
                        printf("Digite a raca do Animal %d \n", qtd+1);
                        scanf(" %[^\n]", raca);
                        for(int i=0; i<qtd; i++){
                            int eqNome = strcmp(listaAnimal[i].nome, nome);
                            int eqRaca = strcmp(listaAnimal[i].raca, raca);
                            //printf("eqNome: %d \n eqRaca: %d\n", eqNome, eqRaca);
                            if(eqNome == 0 && eqRaca ==0){
                                printf("Nome e raca j‡ cadastrados\n");
                                repetido = 1;
                            }
                        }
                        //printf("Repetido %d \n", repetido);
                    }while(repetido !=0);
                    strcpy(listaAnimal[qtd].nome, nome);
                    strcpy(listaAnimal[qtd].raca, raca);
                    printf("Digite o peso do Animal %d \n", qtd+1);
                    scanf("%f", &listaAnimal[qtd].peso);
                    printf("Digite o ano de nascimento do Animal %d\n", qtd+1);
                    scanf("%d", &listaAnimal[qtd].nascimento);
                    qtd++;
                }else{
                    printf("J‡ existem 10 animais cadastrados!\n");
                }
                break;
            case 2:
                printf("-----Listagem de Animais------- \n \n");
                for(int i=0; i< qtd; i++){
                    printf("Id: %d\n", listaAnimal[i].id);
                    printf("Nome: %s\n", listaAnimal[i].nome);
                    printf("Raca: %s\n", listaAnimal[i].raca);
                    printf("Peso: %.2f\n", listaAnimal[i].peso);
                    printf("Ano Nascimento: %d\n", listaAnimal[i].nascimento);
                }
                break;
            default:
                printf("Opcao invalida digite 1, 2 ou 0\n");

        }
    }while(option != 0);
    printf("Encerra o programa\n");
    return 0;
}
