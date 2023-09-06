#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "BEFORE INSERTING: ";
    for (int i = 0; i < numbers.size(); i++) 
	{
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "AFTER INSERTING: ";
    numbers.insert(numbers.begin() + 1, 11);
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}

