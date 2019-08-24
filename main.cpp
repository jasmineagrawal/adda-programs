#include <stdio.h>

int main()
{
	int arr[20],n,temp;
	printf("enter the number of elements in an array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	int k;
	printf("enter the k largest elements to be printed");
	scanf("%d",&k);
	
	for(int i=0;i<n-1;i++)
	{
		
		for(int j=1;j<n-1-i;j++)
		{
			if(arr[j+1]<arr[j])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		
	}
for(int i=n-1;i>n-1-k;i--)
{
	printf("the largest no. is: %d",arr[i]);
	}
	return 0;
}
}