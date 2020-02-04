#include <iostream>

using namespace std;

int main() {
	int num = 0;
	int result;

	cin >>num;

	result = ((num*4+6)/3)-num;

	cout << "The output from using " << num << " is: " << result << endl;
	return 0;
}

