/* Si scriva un programma in linguaggio C che legga due numeri da tastiera, detti A e B, e determini le seguenti informazioni, stampandole a video:
1. determini se B è un numero positivo o negativo
2. determini se A è un numero pari o dispari
3. calcoli il valore di A + B
4. determini quale scelta dei segni nell’espressione (±A) + (±B) porta al risultato mas- simo, e quale è questo valore massimo. */

#include <stdio.h>

int main()
{
	int a, b, somma;

	/* Spiegazione programma */
	printf("Programma che calcola positività, parità/disparità, somma e somma tolti i segni.\n");
	/* valori in input */
	printf("Inserisci il primo valore:\n");
	scanf("%d",&a);
	printf("Inserisci il secondo valore:\n");
	scanf("%d",&b);
	printf("\n");

	/* Positività */
	if ( a >= 0 )
		printf("Il primo numero inserito è positivo.\n");
	else
		printf("Il primo numero inserito è negativo.\n");

	printf("\n");

	if ( b >= 0)
		printf("Il secondo numero inserito è positivo.\n");
	else
		printf("Il secondo numero inserito è negativo.\n");

	printf("\n");

	/* Parità / disparità */

	if ( a%2 == 0)
		printf("Il primo numero inserito è pari.\n");
	else 
		printf("Il primo numero inserito è dispari.\n");

	printf("\n");

	if ( a%2 == 0)
		printf("Il secondo numero inserito è pari.\n");
	else
		printf("Il secondo numero inserito è dispari.\n");

	printf("\n");

	/* Somma */
	somma = a + b;
	printf("La somma tra %d e %d è %d.\n\n", a, b, somma);

	/* Somma tra valori assoluti */
	if ( a<0 )
		a = -a;
	if ( b<0 )
		b = -b;
	somma = a + b;
	printf("La somma tra i valori assoluti dei due valori è %d\n", somma);
}
