#include<iostream>
using namespace std;
int main()
{

int a;
cout<<"enter year"<<endl;
cin>>a;
//cout<<"you have entered:"<<a<<endl;
int c=a%4;
int d=a%400;
if(c==0 || d==0)
{
	cout<<"is leap year"<<endl;
}
else{
	cout<<"is Non leap year"<<endl;
}
return 0;
};


