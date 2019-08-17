#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int t,n,k,a[20],flag=0;
	ifstream inFile;
	inFile.open("input.txt");
	if(!inFile)
	{
		cout<<"unable";
		
	}
	inFile>>t;
	cout<<"no.of test cases:"<<t<<endl;
	for(int i=0;i<t;i++)
	{
		flag=0;
		inFile>>n;
		cout<<"no. of test cases"<<n<<endl;
	
	inFile>>k;
	cout<<"the key"<<k<<endl;
	cout<<"the element"<<endl;
	for( int i=0;i<=n;i++)
	{
		inFile >>a[i];
		cout<<a[i]<<" ,";
		if(a[i]==k)
			flag=1;
	}
	if(flag==1)
		cout<<endl<<1<<"found";
	else
		cout<<endl<<-1<<"not found"<<endl;
}
inFile.close();
return 0;
}
