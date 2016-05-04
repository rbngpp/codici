// ALGORITMO SU PUSH E POP DI UNO STACK
// PILA GESTITA SECONDO IL METODO DEL "PRIMO VUOTO"
#include <stdio.h>
#include <stdlib.h>
// DEFINIAMO SIZE = 50
#define SIZE 5

void push(int i);
int pop(void);

int *tos, *p1, stack[SIZE];

int main()
{
	int value;
	tos = stack;
	p1 = &stack[1];

do {
	printf("Immettere un valore:\n");
	scanf("%d", &value);
	if (value!=0) push(value);
	else printf("Il valore in cima allo stack è %d\n", pop());
} while (value!=-1);

}

void push (int i)
{
	if (p1==(tos+SIZE))
	{
		printf("Superato il limite massimo dello stack.\n");
		exit(1);
	}
	p1++;
	*p1=i;
}

int pop(void)
{
	p1--;
	if (p1==tos)
		{
			printf("Superato il limite inferiore dello stack.\n");
			exit(1);
		}
		return *(p1+1);
}