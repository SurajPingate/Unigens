#include<iostream>
#include<stdlib.h>

using namespace std;

struct demo
{
	int data;
	struct demo *next; 
};

int main()
{
	demo *d = new demo();
	d->data=10;
	d->next=NULL;
	
	demo *d1 = new demo();
	d1->data=20;
	d1->next=NULL;
	
	d->next=d1;
	
	demo *d2 = new demo();	
	d2->data=30;
	d2->next=NULL;
	
	d1->next=d2;
	
/*	cout<<d->data<<endl;
	cout<<d->next<<endl;
	cout<<d->next->data<<endl;
	cout<<d->next->next<<endl;
	cout<<d->next->next->data<<endl;
	cout<<d->next->next->next<<endl;
	*/
	
	while(d!=NULL)
	{
		cout<<d->data<<endl;
		cout<<d->next<<endl;
		d=d->next;
	}
	
	
	return 0;
}