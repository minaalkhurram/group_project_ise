#include<iostream>
#include<fstream>
#include<string>
using namespace std;
bool CustomerID() {
	ifstream fin;
	string customerid, digit;
	int count = 0, j = 0;
	bool check;
	cout << "Enter Customer ID" << endl;
	cin >> customerid;
	fin.open("customersinfo.txt");
	while (getline(fin, digit)) {
		for (int i = 0; digit[i] != fin.eof(); )
		{
			if (digit[i] == customerid[j] && digit[i] != ',') {
				count++;
				j++;
				i++;
				if (count == 4) {
					return true;
				}
			}
			else{
				i++;
				
			}
		}
		return false;
	}
}
int main() {
	ifstream fin;
	bool check = CustomerID();
	if (check) {
		fin.open("Billinginfo.txt");
		string character;
		while (getline(fin, character)) {
			cout << character;
		}
	}
	else {
		cout << "Customer ID is Incorrect" << endl;
	}
	system("pause");
	return 0;
}
