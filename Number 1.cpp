#include <iostream>
#include <vector>
using namespace std;

int main()
 {
    vector<int> arr = {15, 21, 23, 14, 55, 26, 37, 18, 9, 30};
    int sum = 0;
    cout << "Array: ";
    for (int i = 0; i < arr.size(); i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Indices and their Index Value:" << endl;
    
    for (int i = 0; i < arr.size(); i++) {
    	cout << i << " = " << arr[i] << endl;
    }
    for (int x : arr) 
	{
        sum += x;
    }
    cout << "The Sum of the Elements: " << sum << endl;
    return 0;
}

