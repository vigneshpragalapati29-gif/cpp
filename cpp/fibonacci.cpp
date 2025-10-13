#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,next,n;
	cin>>n;
	if(n==1){
	
	cout<<a<<" ";}
	if(n>=2){
	
	cout<<a<<" "<<b<<" ";
	}
	
	
	for(int i=2;i<n;i++)
	{
	
		next=a+b;
		cout<<next<<" ";
		a=b;
		b=next;
	}
}

