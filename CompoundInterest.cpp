/*
2) Suppose Rs.5,000/- is deposited each year in an account which yields 10% interest compounded annually. 
Write a program which prints the amount in the account at the end of each year for 10 years.
*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double amount=5000,rate=10,i;
	for(i=1;i<=10;i++)
	{
		//cout<<amount<<"\t"<<rate<<"\t"<<i<<endl;
		double CI= amount * (pow((1 + rate / 100), i));
		cout<<"Total amount for "<<i<<"th year "<<amount<<endl;
		amount=CI+5000;
	}
	return 0;
}
