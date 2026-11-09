#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main(void) {
    print_str("Hello World !");

    int somme = add(10, 15);
    printf("Somme : %d\n", somme);

    double moyenne = compute_average(12.0, 14.5, 17.0);
    printf("Moyenne : %.2f\n", moyenne);

    return (0);
}
