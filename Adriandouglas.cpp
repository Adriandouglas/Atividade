#include <stdio.h>

int main()
{
    int n,		
     d,				
     EhPrimo;			

    d = 2;
    EhPrimo = 1;		

    printf("coloque um numero inteiro ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);

    if (n <= 1)
	EhPrimo = 0;

    while (EhPrimo == 1 && d <= n / 2) {
	if (n % d  == 0)
	    EhPrimo = 0;
	d = d + 1;
    }

    if (EhPrimo == 1)
	printf("%d e' primo \n", n);
    else
	printf(" %d nao e' primo \n", n);

    return 0;
}