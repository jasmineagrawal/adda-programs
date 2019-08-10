#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n, arr[50],i,max;
	cout<<"enter the value of n";
	cin>>n;
	cout<<"enter"<<n<<"numbers";
	for( i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"maximum value"<< max;
	return 0;
}
