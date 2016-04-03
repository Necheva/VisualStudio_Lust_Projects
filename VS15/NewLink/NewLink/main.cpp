#include"TLink.h"

int main()
{
	DoubleList* pA = new DoubleList();

	pA->AddInBeginning(5);
	pA->AddInBeginning(8);
	pA->AddInEnd(51);
	pA->AddInBeginning(9);
	pA->AddInEnd(41);

	pA->output();

	TLink* C = pA->Search(9);
	if (C == 0)
		cout << "no element";
	else
	{
		pA->Delete(C);
		pA->output();
	}
	cout << "delete" << endl;
	cout << pA->DeleteBeginning() << endl;
	cout << pA->DeleteBeginning() << endl;
	cout << pA->DeleteLast() << endl;
	cout << pA->DeleteLast() << endl;
	pA->output();
	delete pA;
}
