/* somma tra due numeri */
#include <stdio.h>

int main ()
{
	int a, b, c;  //addendi e somma

	/* Stampa cosa eseguirà il programma */
	printf("\nSomma due numeri\n\n");

	/* Inserimento dei due numeri */
	printf("Inserisci il primo numero:\n");
	scanf("%d",&a);
	printf("Inserisci il secondo numero:\n");
	scanf("%d", &b);

	/* Calcolo la somma tra i due numeri */
	c = a + b;

	/* Risultato in output */
	printf("La somma tra %d e %d è uguale a %d.\n", a, b, c);
}