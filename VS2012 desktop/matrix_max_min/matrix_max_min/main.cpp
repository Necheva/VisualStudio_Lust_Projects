#include"Matrix.h"
#include<iostream>
int main()
{
	using namespace std;
    Matrix M(3,4);
	//Matrix M1(4,3);

	M.Input();
	M.Print();
	number Q=M.min_max();
	cout<<"number of strin"<<Q.x<<"number stolb"<<Q.y<<endl;


	return 0;
}