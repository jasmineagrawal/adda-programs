#include <stdio.h>
#include <iostream>

using namespace std;
int floorsqrt(int x)
{
	if(x==0 || x==1)
	
		return x;
	
	int i=1,result=1;
	while(result<=x)
	{
		i++;
		result=i*i;
	}
	return i-1;
}
int main(int argc, char **argv)
{
	int x;
	cout<<"enter the number to find sqrt";
	cin>>x;
	cout<<floorsqrt(x)<<endl;
	return 0;
}
	

