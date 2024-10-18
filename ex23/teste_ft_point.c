#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point) 
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point point;

	set_point(&point);

	printf("Point coordinates: (%d, %d)\n", point.x, point.y); // Deve imprimir (42, 21)
	return (0);
}
