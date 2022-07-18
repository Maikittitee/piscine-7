#include<unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int result;
	int remainder;

	*div  = a / b;
	*mod  = a % b;
	printf("div = %d", *div);
	printf("mod = %d", *mod);
}
/*
int main()
{
	int *di, *mo;
	ft_div_mod(1,1,&di,&mo);
}
*/
