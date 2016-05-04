/* Si scriva un programma in linguaggio C che converta un numero binario in un numero decimale.
Il numero binario è rappresentato su N bit, e il valore di N è inserito da ta- stiera.
L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit meno significativo
(ossia dal bit di peso 20). Il programma visualizzerà il numero decimale corrispondente. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BASE 2

int main() 
{
	int N;
	int bit;
	int peso;
	int numero;

/* Inizializziamo le variabili */
peso = 0;
numero = 0;

/* Leggiamo il numero di cifre binarie */
printf("Immetti il numero di bit della cifra binaria:\n");
scanf("%d", &N);

/* Leggiamo il numero binario */
printf("Inserisci il numero binario partendo dal bit meno significativo:\n");
while (peso < N)
{
	printf("Immetti la cifra binaria 2^%d:\n", peso);
	scanf("%d", &bit);
	/* calcolo il valore in decimale */
	numero = numero + bit * pow(BASE, peso);
	/* aggiorno il peso della cifra binaria */
	peso = peso + 1;
}	
/* stampo il risultato */
printf("\n");
printf("La cifra decimale calcolata è: %d.\n", numero);
}