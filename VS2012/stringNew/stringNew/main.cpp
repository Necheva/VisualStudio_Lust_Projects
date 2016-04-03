#include <iostream>
#include <vector>
#include<iterator>
using namespace std;
int main()
{
	vector<int> the_vector;
	vector<int>::iterator the_iterator;
    for (int i=0; i < 10; i++)
	{
        the_vector.push_back(i);
    }
    int total = 0;
    the_iterator = the_vector.begin();
    while (the_iterator != the_vector.end()) {
      total += *the_iterator++; 
    }
    cout << "suma= " << total << endl;
    return 0;
}