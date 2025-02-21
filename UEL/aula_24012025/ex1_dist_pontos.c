#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ponto{
    int x;
    int y;
};

struct novo_ponto{
    int x;
    int y;
};
// dAB² = (xB – xA)² + (yB – yA)² // Dist entre dois pontos

int main()
{
    struct ponto p1, p2={1,2};
    struct novo_ponto p3 = {3,4};
    p1 = p2; // Correto! Structs do mesmo nome
    printf("p1.x: %d \t p1.y: %d \n", p1.x, p1.y);
    p1 = p3; // Erro structs de nomes diferentes
    printf("p1.x: %d \t p1.y: %d \n", p1.x, p1.y);
}
