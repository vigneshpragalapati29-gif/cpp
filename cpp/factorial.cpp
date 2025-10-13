#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k=1;
	for(int i=n;i>0;i--)
	{
		k=k*i;
	}
	cout<<k;
}
