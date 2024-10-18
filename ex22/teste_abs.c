#include <stdio.h>
#include "ft_abs.h"

int	main(void) 
{
	int a = -5;
	int b = 3;

	printf("O valor absoluto de %d é: %d\n", a, ABS(a)); // Deve imprimir 5
	printf("O valor absoluto de %d é: %d\n", b, ABS(b)); // Deve imprimir 3
	return (0);
}
