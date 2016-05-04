/* Semplice calcolatrice */

#include <stdio.h>

int main()
{	
	/* inizializziamo le variabili utili al programma */
	int a, b;
	float somma, sottrazione, prodotto, divisione; 

	/* Spieghiamo il programma */
	printf("Calcolatrice\n");

	/*Inseriamo i valori in input*/
	printf("Inserisci il primo valore:\n");
	scanf("%d", &a);
	printf("Inserisci il secondo valore:\n");
	scanf("%d", &b);

	/* Inseriamo una condizione per cui se il secondo valore inserito è uguale a zero
	risulta necessario inserirne un altro. */
	if (b == 0)
	{
		printf("Il valore inserito non è corretto, inserire un altro valore:\n");
		scanf("%d", &b);
	}

	/* Eseguiamo le operazioni della calcolatrice */
	somma = a + b; //somma
	sottrazione = a - b; //sottrazione
	prodotto = a * b; //prodotto
	divisione = a / b; //divisione

	/* Mandiamo tutto in output */
	printf("\n");
	printf("La somma tra %d e %d è: %f\n", a, b, somma );
	printf("La sottrazione tra %d e %d è: %f\n", a, b, sottrazione);
	printf("Il prodotto tra %d e %d è: %f\n", a, b, prodotto);
	printf("La divisione tra %d e %d è: %f\n", a, b, divisione);
}