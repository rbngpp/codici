/* Somma e media aritmetica di due numeri */

#include <stdio.h>

int main ()
{
	int num1, num2, somma, media; //inizializziamo gli interi da utilizzare

	/* Spiegazione del programma */
	printf("Somma e media di due numeri interi.\n\n");

	/* Chiediamo di inserire i due numeri di cui eseguire somma e media */
	printf("Inserisci il primo numero:\n");
	scanf("%d", &num1);
	printf("Inserisci il secondo numero:\n");
	scanf("%d", &num2);

	/* Calcoliamo la somma dei due numeri */
	somma = num1 + num2;
	printf("\n");
	printf("La somma tra %d e %d è %d.\n", num1, num2, somma);

	/* Calcoliamo la media dei due numeri */
	media = somma / 2;
	printf("La media tra %d e %d è %d.\n", num1, num2, media);
}