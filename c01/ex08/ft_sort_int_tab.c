#include<unistd.h>
#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int j;
	int temp;

	while(i < size)
	{
		j = i+1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int num[20] = {5,2,1,3,4,6};
	ft_sort_int_tab(num,6);
	printf("%d %d %d",num[0],num[1],num[2]);
}
