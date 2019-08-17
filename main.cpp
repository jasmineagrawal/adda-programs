#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int t,n,k,a[20],flag=0;
	ifstream inFile;
	inFile.open("input.txt");
	if(inFile)
	{
		cout<<"unable to open file";
	}
	inFile >> t;
	cout<<"no. of test cases:"<<t<<endl;
	for(int i=0;i<t;i++)
	{
		flag=0;
		inFile>>n;
		cout<<"the no. of elements: "<<n<<endl;
		inFile>>k;
		cout<<"the key"<<k<<endl;
		cout<<"the lements: "<<endl;
		for(i=0;i<=n;i++)
		{
			inFile >>a[i];
			cout<<a[i]<<" , ";
			if(a[i]==k)
				flag=1;
		}
		if(flag==1)
			cout<<endl<<1<<"key found";
			else
				cout<<endl<<-1<<"key not found"<<endl;
	}
inFile.close();
return 0;
}
