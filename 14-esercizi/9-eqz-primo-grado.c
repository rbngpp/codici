/* Data l’equazione			ax + b = 0
con a e b inseriti da tastiera, scrivere un programma in linguaggio C per determinare il
ax + b = 0 valore di x, se esiste, che risolve l’equazione. */
#include <stdio.h>

int main()
{
	float a, b, x;

	printf("Risoluzioni equazioni di primo grado del tipo ax + b = 0.\n\n");

	printf("Inserisci il valore di A:\n");
	scanf("%f", &a);
	printf("Inserisci il valore di B:\n");
	scanf("%f", &b);

	/* x viene calcolato come -b/a, dobbiamo quindi verificare i due interi */

	if (a == 0)
		printf("L'equazione è indeterminata.\n");
	else if (b == 0)
		printf("L'equazione è impossibile.\n");
	else
	{
		x = -b/a;
		printf("La soluzione dell'equazione è: %f\n", x);
	}
}