/* Programma che stampa il maggiore tra due numeri */

#include <stdio.h>

int main ()
{
	int a, b;

	/* Spieghiamo il programma */
	printf("Programma che stampa il maggiore tra due numeri.\n\n");

	/* Inseriamo i valori in input */
	printf("Inserisci il primo valore:\n");
	scanf("%d", &a);
	printf("\n");
	printf("Inserisci il secondo valore:\n");
	scanf("%d", &b);
	printf("\n");

	/* Inseriamo un controllo sul numero più grande, quindi stampiamo */
	if ( a>b )
	{
		printf("Il numero più grande è: %d\n", a);
	}
	else 
		{
			printf("Il numero più grande è: %d\n", b);
		}
}