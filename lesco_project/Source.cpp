#include<iostream>
#include<fstream>
#include<string.h>
#include<string>

using namespace std;

int main()
{

	char check;
	cout << " Are you an employee or a Customer? \n\n Enter e for employee and c for customer ";
	cin >> check;


	if (check == 'e')
	{
		string username;
		string password;
		cout << "ENTER USERNAME :";
		cin >> username;
		cout << "ENTER PASSWORD : ";
		cin >> password;

		ifstream fin;
		string line;
		fin.open("employeesdata.txt");
		if (fin.is_open())
		{
			bool check2=true;
			while (getline(fin, line))
			{
				
				for (int i = 0; username[i] != '\0'; i++)
				{
					if (username[i] == line[i])
					{
						check2 = true;
					}
					else
						check2=false;

				}
				if (check2)
				{
					
					int size = username.length();
					for (int i = size+1, j = 0; password[j] != '\0'; i++, j++)
					{
						if (password[j] == line[i])
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

				}


			}

		}

	}
}
