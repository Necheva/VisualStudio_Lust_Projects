
#include <stdio.h>
#include <conio.h> 

#include <iostream>

using namespace std;


int main (){
	setlocale(LC_ALL, "Russian");
	int v;
do
{
	cout << "Что вы хотите сделать? Введите номер нужного вам варианта" << endl;
	cout << "\t1. Операции над множествами\n" << 
		"\t2. Решето Эратосфена\n" <<
		"\t3. Выход из программы\n\n";
	v = 4;
	while (v<1 || v>3)
		v = int(_getch()-48);
	switch (v){
	case 1: {
		cout << "Сколько множеств вы хотите ввести?\n";
		int number;
		scanf_s("%d[0..9]", &number);
		
		int n;
		for (int i = 0; i < number; ++i){
			cout << "Введите мощность " << i+1 << " множества: _ ";
			scanf_s("%d[0..9]", &n);
			
		}

		
	int v2;
	do
	{
		cout << "Выберите операции над множествами: " << endl;
		cout << "\t0. Добавить элемент в множество\n" << 
			"\t1. Удалить элемент из множества\n" <<
			"\t2. Проверить наличие элемента в множестве\n" <<
			"\t3. Сравнение множеств\n" << 
			"\t4. Присваивание множеств\n" <<
			"\t5. Включение элемента в множество\n" <<
			"\t6. Объединение множеств\n" << 
			"\t7. Пересечение множеств\n" << 
			"\t8. Дополнение к множеству\n" <<
			"\t9. Вернуться к главному меню\n\n";
		v2 = 10;
		while (v2<0 || v2>9)
			v2 = int(_getch()-48);

		switch (v2){
			case 0: {
				cout << "С каким множеством производить операцию?" << endl << "Предлагаемые множества" << endl;
				
				int key = number + 1;
				while (key<1 || key>number)
					key = int(_getch()-48);
				cout << "Введите элементы, которые необходимо добавить в множество" << endl;
				
				break;
					}
			case 1: {
				cout << "С каким множеством производить операцию?" << endl << "Предлагаемые множества" << endl;
				
				int key = number + 1;
				while (key<1 || key>number)
					key = int(_getch()-48);
				cout << "Введите элементы, которые необходимо удалить из множества" << endl;
				
			
			
					}
			case 2: {
				cout << "С каким множеством производить операцию?" << endl << "Предлагаемые множества" << endl;
				
				int key = number + 1;
				while (key<1 || key>number)
					key = int(_getch()-48);
				cout << "Введите элемент, наличие которого необходимо проверить в множестве" << endl;
				int num;
				scanf_s("%d[0..9]", &num);
				
					}
			case 3: {
				cout << "Какие 2 множества сравнивать?" << endl << "Предлагаемые множества" << endl;
				
				int	key1 = number + 1, key2 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
			
				while (key2<1 || key2>number)
					key2 = int(_getch()-48);
			
	
				break;
					}
			case 4: {
				cout << "Какое множество следует присвоить какому?" << endl << "Предлагаемые множества" << endl;
				
				int key1 = number + 1, key2 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				while (key2<1 || key2>number)
					key2 = int(_getch()-48);
				cout << "Результат: " << endl;
			
				break;
					}
			case 5: {
				cout << "В какое множество следует включить введенный элемент?" << endl << "Предлагаемые множества" << endl;
				
				int key1 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				cout << "Введите элемент" << endl;
				int elem;
				scanf_s ("%d[0..9]", &elem);
			
					}
			case 6: {
				cout << "Какие два множества следует объединить?" << endl << "Предлагаемые множества" << endl;
			
				int key1 = number + 1, key2 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				
				while (key2<1 || key2>number)
					key2 = int(_getch()-48);
				
				
				break;
					}
			case 7: {
				cout << "Какие 2 множества надо пересечь?" << endl << "Предлагаемые множества" << endl;
				
				int key1 = number + 1, key2 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				
		
					}
			case 8: {
				cout << "К какому множеству нужно найти дополнение?" << endl << "Предлагаемые множества" << endl;
				
				int key1 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				
				break;
					}
				}
				}while (v2!=9);
			break;
			}
		case 2: {
			int n, m, k;
			cout << "Введите верхнюю границу целых значений - ";
			
			for ( m=2; m<=n; m++ )
			for ( m=2; m*m<=n; m++ )
				
					for ( k=2*m; k<=n; k+=m )
						
			cout << "Печать простых чисел" << endl;
			
			break;
				 }
	}
	}while(v!=3);
	return 0;
}