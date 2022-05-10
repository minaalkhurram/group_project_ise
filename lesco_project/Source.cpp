#include<iostream>
#include<fstream>
#include<string.h>
#include<string>

using namespace std;

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
			else
			{
				cout << "USERNAME OR PASS INCORRECT ";
				break;

			}
		}
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
	cout << "ENTER USERNAME :";
	cin >> username;
	cout << "ENTER PASSWORD : ";
	cin >> password;
	bool login = false;
	int m = 0;
	while (m == 0 || m == 1)
	{

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

		if (m == 2)
		{
			exit(0);


		}
	}
	}
