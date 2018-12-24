#include <iostream>
using namespace std;

int main(void) {
	char str[] = "Hello Git";
	cout << str << endl;
	
	for (int i = 1; i < 5; i++) {
		cout << i << str << " " << endl;
	}
	return 0;
}