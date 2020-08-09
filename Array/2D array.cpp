#include<stdio.h>

int main()
{
	int i, j, a[2][2];
	printf("Enter elements of 2x2 array : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("2D Array : ");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
			printf("\t %d",a[i][j]);
		}
	}
}
