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
	//if (fin.is_open) {
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
		//}
	}
}

int main() {
	ifstream fin;
	bool check=CustomerID();
	if (check) {
		fin.open("Billinginfo.txt");
		string character;
		while (getline(fin,character)) {
		//	fin >> character;
			cout << "file found";
			cout << character;
		}
	}
	else {
		cout << "Billing File not found";
	}
}

//int main() {
	/*ifstream fin;
	string line, username, password;

	bool check2 = false;
	cout << "Enter Username " << endl;
	cin >> username;
	cout << "Enter Password " << endl;
	cin >> password;
	fin.open("employeesdata.txt");
	if (fin.is_open())
	{
		while (getline(fin, line))
		{
			for (int i = 0; username[i] != '\0'; i++)
			{
				if (username[i] == line[i] && line[i] != ',')
				{
					check2 = true;
				}
				else
					check2 = false;
			}
			if (check2)
			{

				check2 = false;
				int size = username.length();
				for (int i = size + 1, j = 0; password[j] != '\0'; i++, j++)
				{
					if (password[j] == line[i] && line[i] != '\0')
					{
						check2 = true;
					}
					else
						check2 = false;
				}
			}
			if (check2)
			{
				CustomerID();

			}
			else
			{
				cout << "USERNAME OR PASS INCORRECT ";
				break;

			}
		}
	}
	else {
		cout << "file not found";
	}
}*/