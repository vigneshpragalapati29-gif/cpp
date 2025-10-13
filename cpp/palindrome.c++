#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cin>>n;
	int x=n;
	while(n>0)
	{
		i=n%10;
	sum=sum*10+i;
	n=n/10;	
	}
	if(x==sum)
	{
		cout<<"It is palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
}
