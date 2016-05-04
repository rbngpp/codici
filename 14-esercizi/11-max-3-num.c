/* Calcolo del massimo tra tre numeri */

#include <stdio.h>

int main()
{
	int n1, n2, n3, max;
	int count = 1;

	/* Spiegazione del programma */
	printf("Calcolo del massimo tra tre numeri.\n\n");

	/* Inserimento valori in input */
	printf("Inserisci il %d° valore:\n", count);
	scanf("%d", &n1);
	count++;
	printf("Inserisci il %d° valore:\n", count);
	scanf("%d", &n2);
	count++;
	printf("Inserisci il %d° valore:\n", count);
	scanf("%d", &n3);

	/* Calcolo del massimo */
	if ( n1 > n2)
		max = n1;
	else
		max = n2;
	if ( max > n3)
		printf("Il valore massimo è %d\n", max);
	else 
		printf("Il valore massimo è %d\n", n3);

}