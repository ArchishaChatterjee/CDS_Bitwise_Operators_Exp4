//EXP 4B : To set and reset binary
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
	int a, bit_set;
	cout << "Enter value of number : ";
	cin >> a;
	int set, reset;
	int bit_reset;
    
	cout << "Enter bit to be set : ";
	cin >> set;
	bit_set = a^(1<<(set-1));
	cout << bit_set;
    

	return 0;
}
