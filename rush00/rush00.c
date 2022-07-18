#include<unistd.h>
#include<stdio.h>

void rush(int c, int r)
{
	int a;
	int b;
	a = 0;
	b = 0;
	while(a < r)
	{
		while (b < c)
		{	if (a == 0 || a == r-1)
			{
				if ((b == 0) || (b == c-1))
					printf("o");
				else
					printf("-");
			}
			else
			{
				if ((b == 0) || (b == c-1))
					printf("|");
				else
					printf(" ");
			}
			b += 1;	
		}
		printf("\n");

		a += 1;
		b = 0;	
	}
}

int main()
{
	rush(1,1);
}
