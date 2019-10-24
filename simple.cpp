#include <iostream>

using namespace std;

int main() {
/* A programme that calculates simple interest from user input
*/

float principal = 0.0;
float rate = 0.0;
float time = 0.0;


	cout << "Enter the principal amount" << endl;
	cin >> principal;
	cout << "Thank you, now enter the Interest rate at the prompt" << endl;
	cin >> rate;
	cout << "Enter the time in years to repay" << endl;
	cin >> time;
	
	float answer = principal * rate * time;
	cout << "Thanks, your answer is: " << answer << endl;
	
	/*Plan is to make this into a GUI application in a couple of months*/






return 0;
}
