#include <stdlib.h>
#include <stdio.h>

int add(int nb1, int nb2) {
    return nb1 + nb2;
}

int main() {
    int a = 5;
    int b = 3;
    int resultat = add(a, b);

    printf("La somme de %d et %d est : %d\n", a, b, resultat);
    return 0;
}
