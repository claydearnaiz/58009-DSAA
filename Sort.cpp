#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {5, 4, 3, 2, 1};
	cout << "BEFORE REVERSING: ";
    for (int i = 0; i < numbers.size(); i++) 
	{
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "AFTER REVERSING: ";
    reverse(numbers.begin(), numbers.end());
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}

