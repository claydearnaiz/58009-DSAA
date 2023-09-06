#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> numbers = {5, 4, 3, 2, 1};
	cout << "NUMBERS INSIDE THE ARRAY: ";
    for (int i = 0; i < numbers.size(); i++) 
	{
        cout << numbers[i] << " ";
    }
    cout << endl;
	cout << "LENGTH OF THE ARRAY: " << numbers.size();
	
	return 0;
}
