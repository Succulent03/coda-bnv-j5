#include <stdlib.h>
#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3){
	return (nb1 + nb2 + nb3) / 3.0;
}

int main() {
    double nb1 = 5;
    double nb2 = 10;
    double nb3 = 15;

    double resultat = compute_average(nb1, nb2, nb3);

    printf("La moyenne de %.2f, %.2f et %.2f est : %.2f\n", nb1, nb2, nb3, resultat);
    return(0);
}
