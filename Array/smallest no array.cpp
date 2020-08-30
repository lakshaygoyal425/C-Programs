#include<stdio.h>

int main()
{
	int i, n, arr[10], small, position;
	printf("Enter no of elements in array : ");
	scanf("%d",&n);
	printf("Enter elements : \n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	small = arr[0];
	position = 0;
	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small = arr[i];
			position = i;
		}
	}
	
	printf("The Smallest element is : %d\n",small);
	printf("Position of smallest number is : %d",position);
}
