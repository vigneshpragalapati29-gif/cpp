#include<iostream>
using namespace std;
int main()
{
	int a,b,c,big;
	cin>>a>>b>>c;
	big=(a>b&&a>c)?(a):(b>c)?(b):(c);
	cout<<"Big is:"<<big;
}
