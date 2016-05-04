/* Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero
e stampi un messaggio che indichi se tale numero sia positivo oppure negativo. */

#include <stdio.h>

int main()
{
	int a; //valore in input

	/* Spiegazione del programma */
	printf("Numero positivo o negativo.\n");

	/* Inserimento numero */
	printf("Inserisci il numero:\n");
	scanf("%d", &a);

	/*controllo per positività*/
	if (a >= 0)
	{
		printf("Il numero è positivo.\n");
	}
	else
		{
			printf("Il numero è negativo.\n");
		}
}