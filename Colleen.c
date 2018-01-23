#include <stdio.h>
/*
	Will print itself
*/

void	print()
{
	char *c ="#include <stdio.h>%c/*%c	Will print itself%c*/%c%cvoid	print()%c{%c	char *c =%c%s%c;%c	printf(c, 10, 10, 10, 10, 10, 10, 10, 34, c, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c}%c%cint	main()%c{%c	/*%c		output%c	*/%c	print();%c}%c";
	printf(c, 10, 10, 10, 10, 10, 10, 10, 34, c, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
}

int	main()
{
	/*
		output
	*/
	print();
}
