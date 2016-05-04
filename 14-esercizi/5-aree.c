/* Programma che ci permette di calcolare l'area di un quadrato, di un cerchio e di un triangolo equilatero */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	/*Inizializziamo le variabili utili al programma*/
	float d; //numero inserito
	float aq, ac, at; //aree del quadrato, del cerchio e del triangolo
	float r; //raggio del cerchio
	float rad; //radice di tre fratto quattro

	/* Diamo valore alla variabile "rad" */
	rad = sqrt(3) / 4;

	/* Spieghiamo il programma */
	printf("Calcolo dell'area di un quadrato di lato D,\ndi un cerchio di diametro D\n e di un triangolo equilatero di lato D.\n\n");

	/* Inseriamo il valore in input */
	printf("Inserisci il valore D: \n");
	scanf("%f", &d);

	/* Calcoliamo l'area del quadrato di lato D.
	Stiamo utilizzando la funzione "pow" che richiede tra parentesi
	la base e l'esponente, ma avremmo potuto usare tranquillamente
	aq = d * d; */
	aq = pow(d,2);
	printf("\n");
	printf("Il quadrato di lato %f ha area: %f\n", d, aq);

	/* Calcoliamo l'area del cerchio */
	r = d / 2; //calcolo il raggio del cerchio
	ac = M_PI * (r * r); //M_PI in math.h è il valore del cerchio
	printf("Il cerchio di diametro %f e raggio %f ha area: %f\n", d, r, ac);

	/* Calcoliamo l'area del triangolo equilatero */
	at = rad * (d*d);
	printf("L'area del triangolo rettangolo di lato %f è %f.\n", d, at);


}