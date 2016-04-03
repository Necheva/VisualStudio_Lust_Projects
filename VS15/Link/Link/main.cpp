#include"TLink.h"

int main()
{
	TList* pA = new TList();

	pA->AddInBeginning(5);
	pA->AddInBeginning(8);
	pA->AddInEnd(51);
	pA->AddInBeginning(9);
	pA->AddInEnd(41);

	pA->output();

	cout << "delete" << endl;
	cout<< pA->DeleteBeginning()<<endl;
	cout << pA->DeleteBeginning()<<endl;
	pA->output();
	delete pA;
}
