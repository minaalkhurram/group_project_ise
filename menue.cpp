#include<iostream>
using namespace std;

void Employeepressed() {
	int check = 0;
	cout << "Update Customer Information" << '\t' << "Update Billing Information" << '\t' << "Update Tariff Tax" << '\t' << "View Customer Information" << endl;
	cout << " Press 1 for customer info" << endl;
	cout << " Press 2 for updating billing info" << endl;
	cout << " Press 3 for tariff tax info" << endl;
	cout << " Press 4 to view customer info" << endl;
	cin >> check;
	if (check == 1) {
		cout << "Update Customer Information";	// Function call
	}
	else if (check == 2) {
		cout << "Update Billing Information";	// Function call
	}
	else if (check == 3) {
		cout << "Update Tariff Tax";	// Function call
	}
	else if (check == 4) {
		cout << "View Customer Information";	// Function call
	}
}

void Customerpressed() {
	cout << "Your Bill Information " << endl;

}


int main() {
	Employeepressed();
	system("pause");
	return 0;
}
