#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
using namespace std;
string User_id;
string Month;
string Current_meter_reading_reg;
string current_meter_reading_peak;
string entry_date;
string cost_of_electricity;
string Sales_tax;
string Fixed_charges;
string Billing_amount;
string due_date;
string paid_status;
bool CustomerID(string customer_id) {
	ifstream file;
	string digit;
	int count = 0, j = 0;
	bool check;
	file.open("Customersinfo.txt");
	while (getline(file, digit)) {
		for (int i = 0; digit[i] != file.eof(); )
		{
			if (digit[i] == customer_id[j] && digit[i] != ',') {
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
void input_bill(ifstream& fin, string customer_id){
     char buffer[250];
    if(customer_id=="6055"){
	fin.getline(buffer, 250, ',');
	 User_id=buffer;
  
    fin.getline(buffer, 250, ',');
	Month=buffer;
	
    fin.getline(buffer, 250, ',');
	Current_meter_reading_reg=buffer;
    
    fin.getline(buffer, 250, ',');
	current_meter_reading_peak=buffer;
  
    fin.getline(buffer, 250, ',');
     entry_date=buffer;

    fin.getline(buffer, 250, ',');
    cost_of_electricity=buffer;
    
    fin.getline(buffer, 250, ',');
    Sales_tax=buffer;
    
    fin.getline(buffer, 250, ',');
    Fixed_charges=buffer;

    fin.getline(buffer, 250, ',');
    Billing_amount=buffer;
   
    fin.getline(buffer, 250, ',');;
    due_date=buffer;
   
    fin.getline(buffer, 250, ',');
    paid_status=buffer;
    }
    else if(customer_id=="6052"){
        string line;
        getline(fin, line);
        fin.getline(buffer, 250, ',');
	 User_id=buffer;
  
    fin.getline(buffer, 250, ',');
	Month=buffer;
	
    fin.getline(buffer, 250, ',');
	Current_meter_reading_reg=buffer;
    
    fin.getline(buffer, 250, ',');
	current_meter_reading_peak=buffer;
  
    fin.getline(buffer, 250, ',');
     entry_date=buffer;

    fin.getline(buffer, 250, ',');
    cost_of_electricity=buffer;
    
    fin.getline(buffer, 250, ',');
    Sales_tax=buffer;
    
    fin.getline(buffer, 250, ',');
    Fixed_charges=buffer;

    fin.getline(buffer, 250, ',');
    Billing_amount=buffer;
   
    fin.getline(buffer, 250, ',');;
    due_date=buffer;
   
    fin.getline(buffer, 250, ',');
    paid_status=buffer;
    }
    else if(customer_id=="6053"){
        string line;
        getline(fin,line);
        getline(fin,line);
        fin.getline(buffer, 250, ',');
	 User_id=buffer;
  
    fin.getline(buffer, 250, ',');
	Month=buffer;
	
    fin.getline(buffer, 250, ',');
	Current_meter_reading_reg=buffer;
    
    fin.getline(buffer, 250, ',');
	current_meter_reading_peak=buffer;
  
    fin.getline(buffer, 250, ',');
     entry_date=buffer;

    fin.getline(buffer, 250, ',');
    cost_of_electricity=buffer;
    
    fin.getline(buffer, 250, ',');
    Sales_tax=buffer;
    
    fin.getline(buffer, 250, ',');
    Fixed_charges=buffer;

    fin.getline(buffer, 250, ',');
    Billing_amount=buffer;
   
    fin.getline(buffer, 250, ',');;
    due_date=buffer;
   
    fin.getline(buffer, 250, ',');
    paid_status=buffer;
    }
    else if(customer_id=="5808"){
        string line;
        getline(fin, line);
        getline(fin,line);
        getline(fin,line);
        fin.getline(buffer, 250, ',');
	 User_id=buffer;
  
    fin.getline(buffer, 250, ',');
	Month=buffer;
	
    fin.getline(buffer, 250, ',');
	Current_meter_reading_reg=buffer;
    
    fin.getline(buffer, 250, ',');
	current_meter_reading_peak=buffer;
  
    fin.getline(buffer, 250, ',');
     entry_date=buffer;

    fin.getline(buffer, 250, ',');
    cost_of_electricity=buffer;
    
    fin.getline(buffer, 250, ',');
    Sales_tax=buffer;
    
    fin.getline(buffer, 250, ',');
    Fixed_charges=buffer;

    fin.getline(buffer, 250, ',');
    Billing_amount=buffer;
   
    fin.getline(buffer, 250, ',');;
    due_date=buffer;
   
    fin.getline(buffer, 250, ',');
    paid_status=buffer;
    }
}

void output_bill(){
  cout<<"User Id: "<<User_id<<endl;
  cout<<"Cost of electricity= "<<cost_of_electricity<<endl;
  cout<<"Tax amount= "<<Sales_tax<<endl;
  cout<<"Fixed charges= "<<Fixed_charges<<endl;
  cout<<"Total bill amount due= "<<Billing_amount<<endl;
  cout<<"The due date: "<<due_date<<endl;
  cout<<"Paid status: "<<paid_status<<endl;
}
void Employeepressed() {
	int check = 0;
	//cout << "Update Customer Information" << '\n' << "Update Billing Information" << '\n' << "Update Tariff Tax" << '\t' << "View Customer Information" << endl;
	cout << "\nPress 1 for updating customer info" << endl;
	cout << "  Press 2 for updating billing info" << endl;
	cout << "  Press 3 for tariff tax info" << endl;
	cout << "  Press 4 to view customer info" << endl;
    cout << "  Press 5 to view bill information of customer."<<endl;
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
        string customer_id;
        cout<<"Customer ID: ";
        cin>>customer_id;
        ifstream fin;
	bool check3 = CustomerID(customer_id);
	if (check3) {
		fin.open("Customersinfo.txt");
		string character;
		while (getline(fin, character)) {
			cout << character<<endl;
		}
	}
	else {
		cout << "Customer ID is Incorrect" << endl;
	}
    }
	else if(check==5){
           ifstream fin;
    string customer_id;
    cout<<"\nEnter Customer ID= ";
    cin>>customer_id;
    bool check4=CustomerID(customer_id);
    if(check4){
	fin.open("Billinginfo.txt");
	input_bill(fin,customer_id);
    output_bill();
    }
    else{
        cout<<"\nNo such customer exists."<<endl<<endl;
    }
    }
}

void Customerpressed() {
	cout << "Your Bill Information " << endl;

}
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
	fin.open("Customersinfo.txt");
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
    Employeepressed();
    system("pause");
    return 0;


	}