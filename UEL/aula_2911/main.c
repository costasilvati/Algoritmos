#include <stdio.h>
#include <stdlib.h>
/*
Desenvolva um algoritmo em linguagem C que cadastre funcionarios de uma empresa,
porem voce deve coletar diferentes dados com base na categoria do funcionario.
Veja as regras a seguir:
−→ Funcionario e menor de 18 anos, registre: idade, salario, e numero de
dependentes (se houver), ele deve ser colocado automaticamente na categoria E;
−→ Funcion ́ario sem dependentes, registre: numero da carteira, idade e
salario, ele deve ser colocado automaticamente na categoria A;
−→ Funcionario com dependentes, registre: numero da carteira, idade, salario,
e nu ́mero de dependentes, ele deve ser colocado automaticamente na categoria B;
Ao final da execucao exiba quantos funcionarios de cada categoria foram cadastrados.
*/

int main()
{
    float salario=0, dependente=0, z=0, media=0;
    int dependente=0, op=0, idade=0;
    printf("Digite as 3 notas\n");
    scanf("%f %f %f", &x, &y, &z);
    printf("Qual media deseja calcular?\n");
    printf(" 1 - Geometrica\n 2 - Ponderada \n 3 - Harmonica\n 4 - Aritimetica\n");
    scanf("%d", &op);
    switch(op){
    case 1:
        media = x*y*z;
        break;
    case 2:
        media= (x + (2*y) + (3*z))/6;
        break;
    case 3:
        media = 1/((1/x) + (1/y) + (1/z));
        break;
    case 4:
        media = (x+y+z)/3;
        break;
    default:
        printf("Opcao invalida\n");
    }
    printf("A media das notas eh %.2f\n", media);
    return 0;
}
