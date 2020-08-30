#include<stdio.h>

int main()
{
	int i, n ,arr[10], sum=0;
	float mean = 0.0;
	printf("Enter the no of elements in array ");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum += arr[i];
	}
	
	mean = (float)sum/n;
	printf("Sum of elements in array is : %d\n",sum);	
	printf("Mean of elements in array is : %.2f",mean);
}

