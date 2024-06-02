/* Dati in input due numeri salvati in a b, 
scambia  i valori */

#include <stdio.h>
int a, b, temp;
int main (void) {
	printf("Inserisci un numero");
	scanf("%d", &a);
	printf("Inserisci un altro numero");
	scanf("%d", &b);
	temp=a;
	a=b;
	b=temp;
	printf("I tuoi numeri sono %d e %d", a, b);
	return 0;
	}
