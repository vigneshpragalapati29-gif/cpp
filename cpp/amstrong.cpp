#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,x=0,sum=0,y;
	cin>>n;
	int k=n;
	while(n!=0)
	{
		x++;
		n=n/10;
	}
	while(n>0)
	{
		y=n%10;
		sum=sum+pow(y,x);
	n=n/10;
		
	}
	
	if(k==sum)
	{
		cout<<"It is amstrong";
	}
	else
	{
		cout<<"not amstrong";
	}
}
