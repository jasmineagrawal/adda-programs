#include<stdio.h>
int main()
{

int n,arr[19],count=0;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter the elements into array: ");
for (int i=0;i<n;i++)
scanf("%d",&arr[i]);

	for(int i=0;i<n;i++)
{
		int min=i;
		for(int j=i+1;j<n;j++){
			count++;
			if (arr[j]<arr[min]){
				min=j;}}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;}
	
	printf("the no. of compartisons are %d",count);

}


