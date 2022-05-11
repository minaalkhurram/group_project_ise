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
		for (int i = 0; digit[i] != ','; i++)
		{
			if (digit[i] == customerid[j] && digit[i] != ',') {
				count++;
				j++;
				if (count == 4) {

					return true;
				}
			}
			else {
				cout << "Customer ID is Incorrect" << endl;
				return false;
			}
		}
	}
}

int main() {
	ifstream fin;
	bool check=CustomerID();
	if (check) {
		fin.open("Billinginfo.txt");
		string character;
		while (getline(fin,character)) {
			cout << character;
		}
	}
	else {
		cout << "Billing File not found";
	}
}
