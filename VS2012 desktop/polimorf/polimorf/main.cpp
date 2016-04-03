#include"rect.h"
#include"cirkle.h"
#include<iostream>
using namespace std;

int main()
{
	rect H(1,2,3,4);
	cirkle R(3,2,2);
	cout<<"s= "<<H.s()<<endl;
	cout<<"s cirkle= "<<R.s()<<endl;
	figur *D=new cirkle(3,2,3);
	cout<<"s cirkle= "<<D->s()<<endl;
	D=new rect(3,2,5,7);
	cout<<"s rect= "<<D->s()<<endl;
}