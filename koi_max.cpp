#include<stdio.h>
int table[81];
int main()
{
	int *start = table;
	int max=0;
	int *maxp;
	int i,j;
	for(i=0 ; i < 9 ; i++)
	{
		for(j=0 ; j < 9 ; j++)
		{
			scanf("%d", &table[9*i+j]);
		}
	}
	for(i = 0 ; i < 81 ; i++ )
	{
		if(table[i] > max)
		{
			max = table[i];
			maxp = table+i;
		}
		else continue;
	}
	printf("%d\n%d %d", max, (maxp-start)/9+1, (maxp-start)%9+1);
}
