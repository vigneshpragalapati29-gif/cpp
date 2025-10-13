#include<iostream>
using namespace std;
int main()
{
	int  num,fact=0;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		fact++;
	}
	cout<<"factors are"<<fact;}
