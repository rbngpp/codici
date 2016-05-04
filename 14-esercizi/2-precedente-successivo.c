/* Programma in grado di leggere un valore intero e di visualizzare il valore intero precedente e il successivo. */

#include <stdio.h>

int main()
{
	int a, b, c;

	/* Spiegazione del programma */
	printf("Precedente e Successivo\n\n");

	/* Inserimento dato in input */
	printf("Inserisci un numero:\n");
	scanf("%d", &a);

	/* generiamo il precedente e il successivo */
	b = a + 1;
	c = a - 1;

	/* mandiamo in output i risultati */
	printf("Il precedente di %d è %d\n", a, c);
	printf("Il successivo di %d è %d\n", a, b);
}