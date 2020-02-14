#include <iostream>
using namespace std;

int main() {
	int Start;
	int Step;
	int Stop;

	cout << "Enter a Starting Value: " << endl;
	cin >>  Start;
	cout << "Enter a Step  Value: " << endl;
	cin >> Step;
	cout << "Enter a Stopping  Value: " << endl;
        cin >> Stop;
	
	if (Start > Stop) {
		for (int count = Start; count >= Stop; count -= Step) {
			cout << count <<", ";
		}
		cout << "" << endl;
	} 


	else  if (Start < Stop) {
                for (int count = Start ; count <=  Stop; count += Step) {
                        cout << count <<", ";
                }
		cout << "" << endl;
        }
	else if (Start == Stop) {
		cout << "Bye!!" << endl;
	}

	 return 0;
	
}
