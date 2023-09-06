#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {   
	vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	    cout << "BEFORE AFFEND: ";
    for (int i = 0; i < numbers.size(); i++) 
	{
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "AFTER AFFEND: ";
    numbers.push_back(11);
    for (int i = 0; i < numbers.size(); i++)
	{
        cout << numbers[i] << " ";
    }
    return 0;
}

