#include <iostream>

using namespace std;

int main(){
	
	int scores[6] = {26, 49, 98, 87, 62, 75};
	int sum = 0;
	int i;
	
	cout << "ADDING THE NUMBERS" << endl;
		
	for(i=0; i<6; i++)
	{
		if(scores[i] % 2 != 0)
		{
			sum += scores[i];
			cout << scores[i] << endl;
		} 
     
	}
	
	cout << "The sum of the numbers above: " << sum;
}
	
	
