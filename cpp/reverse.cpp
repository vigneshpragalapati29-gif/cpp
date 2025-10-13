#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,af,k;
	cin>>num;
	af=num;
	while(num!=0)
	{
		k=num%10;
		sum=sum*10+k;
		num/=10;
	}
	cout<<sum;
}
