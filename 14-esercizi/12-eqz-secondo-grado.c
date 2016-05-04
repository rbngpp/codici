/* Si realizzi un programma in linguaggio C per risolvere equazioni di secondo grado. In particolare, data una generica equazione di secondo grado nella forma
ax2 +bx+c=0
dove a, b, c sono coefficienti reali noti e x rappresenta l’incognita, il programma determini le due radici x1 ed x2 dell’equazione data, ove esse esistano.
Si identifichino tutti i casi particolari (a = 0, ∆ ≤ 0, ...) e si stampino gli opportuni messaggi informativi. */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
	float a, b, c; //valori dei termini noti
	float delta; //valore del discriminante
	float x1, x2; //valori dei termini che risolvono l'equazione

	/* Nome del programma */
	printf("Risoluzione di equazioni di secondo grado.\n");
	printf("Equazioni nella forma ax^2 + bx + c = 0\n");

	/* Dati in input */
	printf("Inserisci il coefficiente di x^2:\n");
	scanf("%f",&a);
	printf("Inserisci il coefficiente di x:\n");
	scanf("%f",&b);
	printf("Inserisci il coefficiente del termine noto:\n");
	scanf("%f",&c);

	/* se a = 0 allora si tratta di un'equazione di primo grado */
	if (a == 0)
	{
		if (b == 0)
			printf("L'equazione è indeterminata.\n");
		else if (c == 0)
			printf("L'equazione è impossibile.\n");
		else
			{
			x1 = -b/a;
			printf("La soluzione dell'equazione è: %f\n", x1);
			}
	}
	/* se a ≠ 0 allora si tratta di un'equazione di secondo grado */
	else
	{
		delta = b*b - 4*a*c; //calcoliamo il discriminante
		if (delta < 0)
			printf("Non ci sono soluzioni in campo reale.\n");
		else if (delta == 0)
		{
			x1 = -b / (2*a);
			printf("Vi è un'unica soluzione: %f\n", x1);
		}
		else (delta > 0);
		{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("Le soluzioni dell’equazione sono: %f e %f\n", x1, x2);
		}
	}
}



