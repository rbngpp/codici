// ALGORITMO SU PUSH E POP DI UNO STACK
// PILA GESTITA SECONDO IL METODO DELL' "ULTIMO PIENO"
#include <stdio.h>
#include <stdlib.h>
// DEFINIAMO SIZE = 50
#define SIZE 50

void push(int i);
int pop(void);

int *tos, *p1, stack[SIZE];

int main()
{
	int value;
	tos = &stack[0]; // tos punta alla cima dello stack
	p1 = stack; // inizializza p1

	do {
		printf("Immettere un valore:\n");
		scanf("%d", &value);
		if(value!=0) push(value); //se inserisco come valore 0 farò il pop dello stack, cioè l'estrazione dell'ultimo elemento
		else printf("Il valore in cima allo stack è %d\n", pop());
	} while (value!=-1); //se inserisco -1 esco dal programma
}

void push (int i)
{
	p1++;
	if(p1==(tos+SIZE))
	{
		printf("Superato il limite superiore dello stack.\n");
		exit(1);
	}
	*p1 = i;
}

int pop(void)
{
	if(p1==tos)
	{
		printf("Superato il limite inferiore dello stack.\n");
		exit(1);
	}
	p1--;
	return *(p1+1);
}
