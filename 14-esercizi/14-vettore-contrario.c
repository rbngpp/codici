/* Dato un vettore di lunghezza 10, si chiedano i numeri in input all’utente
e si ristampino a video prima nell’ordine di inserimento e poi al contrario. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vett[10];
	int i;

	// Spiegazione del programma
	printf("Stampa di un vettore di dimensione 10 nell'ordine di inserimento e al contrario.\n");
	printf("\n");

	// Input: elementi del vettore
	printf("Inserisci gli elementi del vettore:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d\n", &vett[i]);
	}

	// Output: elementi in ordine di inserimento:
	printf("Gli elementi inseriti sono i seguenti:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", vett[i]);
	}

	// Output: elementi in ordine opposto:
	printf("In ordine opposto:\n");
	for (i = 9; i >= 0; i--)
	{
		printf("%d\n", vett[i]);
	}
	return 0;
}