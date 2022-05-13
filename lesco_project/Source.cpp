#include<iostream>
#include<fstream>
#include<string.h>
#include<string>

using namespace std;


void updatebill()
{
	ofstream out;
out.open("billinginfo.txt", ios::app);
	
string enter;
int num;
cout << "\n\nENTER CUSTOMER ID : ";
cin >> num;
out << num<<",";

cout << "\nEnter bill month : ";
cin >> enter;
out << enter << ",";
cout << "\nEnter regular reading : ";
cin >> num;
out << num << ",";
cout << "\nEnter peak reading :";
cin >> num;
out << num<< ",";
cout << "\nEnter reading entry date (seperated by / ) :";
cin >> enter;
out << enter << ",";
cout << "\nEnter electrcity costs: ";
cin >> num;
out << num << ",";
cout << "\nEnter sales tax : ";
cin >> num;
out << num << ",";
cout << "\nEnter fixed charges : ";
cin >> num;
out << num << ",";
cout << "\nEnter total bill : ";
cin >> num;
out << num << ",";
string enter2;
cout << "\nEnter due date (seperated by / ) : ";
cin >> enter2;
out << enter2 << ",";
string enter3;



}
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
		cout << "Update Billing Information";	
		updatebill();// Function call
	}
	else if (check == 3) {
		cout << "Update Tariff Tax";	// Function call
	}
	else if (check == 4) {
		cout << "View Customer Information";	// Function call
	}
}

string input(string line)
{
	string value, store;
	value = line;
	cout << endl << "enter the whole statement" << endl;
	cin >> store;
	line = store;
	return line;
}

void UpdateTaxInfo()
{
	ifstream fin;
	ofstream fout;
	string line, line2, digit;
	int count = 0;
	int str_length;
	fin.open("TarrifTaxInfo.txt");
	char inputFile;
	int num, num2, num3, num4;
	cout << "press 1 if you want to update info\npress 2 if you want to add new info\n";
	cin >> num;
	if (num == 1)
	{
		string file_data[4];
		cout << "if single phase press 1\nif three phase press 3\n";
		cin >> num2;
		if (num2 == 1)
		{
			cout << "if domestic press 1\nif commercial press 2\n";
			cin >> num3;
			if (num3 == 1)
			{
				//getline(fin, line);
				string recieve;
				getline(fin, line);
				fout << line;
				//cout << line;
				recieve = input(line);
				fin.close();
				fin.open("TarrifTaxInfo.txt");
				int count = 0;
				while (count<4)
				{
					getline(fin, file_data[count]);
					count++;
				}
				fin.close();
				file_data[0] = recieve;
				fstream filee;
				filee.open("TarrifTaxInfo.txt", ios::out);
				count = 0;
				for (count = 0; count < 4; count++)
				{
					filee << file_data[count] <<endl;
				}
				filee.close();
			}
			
			else if (num3 == 2)
			{
				for (int i = 0; i < 2; i++)
				{
					getline(fin, line2);
				}
				cout << line2;
				string recieve = input(line2);

				fstream filee;
				filee.open("TarrifTaxInfo.txt", ios::in);
				int count = 0;
				while (count < 4)
				{
					getline(filee, file_data[count]);
					count++;
				}
				filee.close();
				file_data[1] = recieve;
				filee.open("TarrifTaxInfo.txt", ios::out);
				count = 0;
				for (count = 0; count < 4; count++)
				{
					filee << file_data[count] << endl;
				}
				filee.close();


			}
		}
		else if (num2 == 3)
		{
			cout << "if domestic press 1\nif commercial press 2\n";
			cin >> num3;
			if (num3 == 1)
			{
				for (int i = 0; i < 3; i++)
				{
					getline(fin, line);
				}
				cout << line;
				string recieve = input(line);
				fstream filee;
				filee.open("TarrifTaxInfo.txt", ios::in);
				int count = 0;
				while (count < 4)
				{
					getline(filee, file_data[count]);
					count++;
				}
				filee.close();
				file_data[2] = recieve;
				filee.open("TarrifTaxInfo.txt", ios::out);
				count = 0;
				for (count = 0; count < 4; count++)
				{
					filee << file_data[count] << endl;
				}
				filee.close();
			}
			else if (num3 == 2)
			{
				for (int i = 0; i < 4; i++)
				{
					getline(fin, line2);
				}
				cout << line2;
				string recieve = input(line2);
				fstream filee;
				filee.open("TarrifTaxInfo.txt", ios::in);
				int count = 0;
				while (count < 4)
				{
					getline(filee, file_data[count]);
					count++;
				}
				filee.close();
				file_data[3] = recieve;
				filee.open("TarrifTaxInfo.txt", ios::out);
				count = 0;
				for (count = 0; count < 4; count++)
				{
					filee << file_data[count] << endl;
				}
				filee.close();
			}
		}
	}
	if (num == 2)
	{

	}
}


bool employee(string username, string password)
{
		ifstream fin;
	string line;
	bool check2 = false;
	fin.open("employeesdata.txt");
	if (fin.is_open())
	{

		while (getline(fin, line))
		{

			for (int i = 0; username[i] != '\0'; i++)
			{
				if (username[i] == line[i]&&line[i]!=',')
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
					if (password[j] == line[i]&&line[i]!='\0')
					{
						check2 = true;

					}
					else
						check2 = false;
				}

			}
			if (check2)
			{
				cout << "LOGIN SUCCESFUL";
				break;
			}
		}
		}
	if (check2 == false)
	{
		cout << "USERNAME OR PASS INCORECT ";
	}

	return check2;


		
}


bool customer(string username, string password)
{
	ifstream fin;
	string line;
	bool check2 = false;
	fin.open("customersinfo.txt");
	if (fin.is_open())
	{

		while (getline(fin, line))
		{

			for (int i = 0; username[i] != '\0'; i++)
			{
				if (username[i] == line[i]&&line[i]!=',')
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
					if (password[j] == line[i]&&line[i]!='\0')
					{
						check2 = true;

					}
					else
						check2 = false;
				}

			}
			if (check2)
			{
				cout << "LOGIN SUCCESFUL";
				break;
			}
		}
	}

	return check2;
}

int main()
{

	char check;
	cout << " Are you an employee or a Customer? \n\n Enter e for employee and c for customer ";
	cin >> check;

	string username;
	string password;
	
	bool login = false;
	int m = 0;
	while (m == 0 || m == 1)
	{
		cout << "ENTER USERNAME :";
		cin >> username;
		cout << "ENTER PASSWORD : ";
		cin >> password;

		if (check == 'e')
		{
			login = employee(username, password);

		}
		else
		{
			login = customer(username, password);
		}
		if (login == false)
		{
			cout << " PRESS 1 TO RETRY AND 2 TO EXIT ";
			cin >> m;
		}
		else if (login)
		{
			m = 3;
		}

		if (m == 2)
		{
			exit(0);


		}
	}



	}
