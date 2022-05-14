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
string CNIC;
string name;
string town;
string phonenum;
string customer_type;
string meter_type;
string connection_date;
string reg_unit_consumed;
string peak_units_consumed;
int count1=0;
int count2=0;
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
			else {
				i++;
			}
		}
		return false;
	}
}

void input_customersinfo(ifstream& fin, string customer_id) {
	char buffer[250];
	if (customer_id == "6055") {
		fin.getline(buffer, 250, ',');
		User_id = buffer;

		fin.getline(buffer, 250, ',');
		CNIC = buffer;

		fin.getline(buffer, 250, ',');
		name = buffer;

		fin.getline(buffer, 250, ',');
		town = buffer;

		fin.getline(buffer, 250, ',');
		phonenum = buffer;

		fin.getline(buffer, 250, ',');
		customer_type = buffer;

		fin.getline(buffer, 250, ',');
		meter_type = buffer;

		fin.getline(buffer, 250, ',');
		connection_date = buffer;

		fin.getline(buffer, 250, ',');
		reg_unit_consumed = buffer;

		fin.getline(buffer, 250, ',');
		peak_units_consumed = buffer;


	}
	else if (customer_id == "6052") {
		string line;
		getline(fin, line);
		fin.getline(buffer, 250, ',');
		User_id = buffer;
		fin.getline(buffer, 250, ',');
		CNIC = buffer;

		fin.getline(buffer, 250, ',');
		name = buffer;

		fin.getline(buffer, 250, ',');
		town = buffer;

		fin.getline(buffer, 250, ',');
		phonenum = buffer;

		fin.getline(buffer, 250, ',');
		customer_type = buffer;

		fin.getline(buffer, 250, ',');
		meter_type = buffer;

		fin.getline(buffer, 250, ',');
		connection_date = buffer;

		fin.getline(buffer, 250, ',');
		reg_unit_consumed = buffer;

		fin.getline(buffer, 250, ',');
		peak_units_consumed = buffer;


	}
	else if (customer_id == "6053") {
		string line;
		getline(fin, line);
		getline(fin, line);
		fin.getline(buffer, 250, ',');
		User_id = buffer;
		fin.getline(buffer, 250, ',');
		CNIC = buffer;

		fin.getline(buffer, 250, ',');
		name = buffer;

		fin.getline(buffer, 250, ',');
		town = buffer;

		fin.getline(buffer, 250, ',');
		phonenum = buffer;

		fin.getline(buffer, 250, ',');
		customer_type = buffer;

		fin.getline(buffer, 250, ',');
		meter_type = buffer;
		fin.getline(buffer, 250, ',');
		connection_date = buffer;

		fin.getline(buffer, 250, ',');
		reg_unit_consumed = buffer;

		fin.getline(buffer, 250, ',');
		peak_units_consumed = buffer;


	}

	else if (customer_id == "5808") {
		string line;
		getline(fin, line);
		getline(fin, line);
		getline(fin, line);
		fin.getline(buffer, 250, ',');
		User_id = buffer;
		fin.getline(buffer, 250, ',');
		CNIC = buffer;

		fin.getline(buffer, 250, ',');
		name = buffer;

		fin.getline(buffer, 250, ',');
		town = buffer;

		fin.getline(buffer, 250, ',');
		phonenum = buffer;

		fin.getline(buffer, 250, ',');
		customer_type = buffer;

		fin.getline(buffer, 250, ',');
		meter_type = buffer;
		fin.getline(buffer, 250, ',');
		connection_date = buffer;

		fin.getline(buffer, 250, ',');
		reg_unit_consumed = buffer;

		fin.getline(buffer, 250, ',');
		peak_units_consumed = buffer;


	}
}

void output_customersinfo() {
	cout << "\n\n\n\t\t\t\t\t\tThe name of customer: " << name << endl;
	cout << "\n\t\t\t\t\t\tCNIC of customer: " << CNIC << endl;
	cout << "\n\t\t\t\t\t\tMeter type: " << meter_type << endl;
	cout << "\n\t\t\t\t\t\tCustomer type: " << customer_type << endl;
	cout << "\n\t\t\t\t\t\tThe area in which the customer lives: " << town << endl;
	cout << "\n\t\t\t\t\t\tCustomers phone number: " << phonenum << endl;

}

void input_bill(ifstream& fin, string customer_id) {
	char buffer[250];
	if (customer_id == "6055") {
		fin.getline(buffer, 250, ',');
		User_id = buffer;

		fin.getline(buffer, 250, ',');
		Month = buffer;

		fin.getline(buffer, 250, ',');
		Current_meter_reading_reg = buffer;

		fin.getline(buffer, 250, ',');
		current_meter_reading_peak = buffer;

		fin.getline(buffer, 250, ',');
		entry_date = buffer;

		fin.getline(buffer, 250, ',');
		cost_of_electricity = buffer;

		fin.getline(buffer, 250, ',');
		Sales_tax = buffer;

		fin.getline(buffer, 250, ',');
		Fixed_charges = buffer;

		fin.getline(buffer, 250, ',');
		Billing_amount = buffer;

		fin.getline(buffer, 250, ',');;
		due_date = buffer;

		fin.getline(buffer, 250, ',');
		paid_status = buffer;
         if(paid_status=="paid"){
              count1++;
         }
         else{
         count2++;
         }
	}
	else if (customer_id == "6052") {
		string line;
		getline(fin, line);
		fin.getline(buffer, 250, ',');
		User_id = buffer;

		fin.getline(buffer, 250, ',');
		Month = buffer;

		fin.getline(buffer, 250, ',');
		Current_meter_reading_reg = buffer;

		fin.getline(buffer, 250, ',');
		current_meter_reading_peak = buffer;

		fin.getline(buffer, 250, ',');
		entry_date = buffer;

		fin.getline(buffer, 250, ',');
		cost_of_electricity = buffer;

		fin.getline(buffer, 250, ',');
		Sales_tax = buffer;

		fin.getline(buffer, 250, ',');
		Fixed_charges = buffer;

		fin.getline(buffer, 250, ',');
		Billing_amount = buffer;

		fin.getline(buffer, 250, ',');;
		due_date = buffer;

		fin.getline(buffer, 250, ',');
		paid_status = buffer;
         if(paid_status=="paid"){
              count1++;
         }
         else{
         count2++;
         }
	}
	else if (customer_id == "6053") {
		string line;
		getline(fin, line);
		getline(fin, line);
		fin.getline(buffer, 250, ',');
		User_id = buffer;

		fin.getline(buffer, 250, ',');
		Month = buffer;

		fin.getline(buffer, 250, ',');
		Current_meter_reading_reg = buffer;

		fin.getline(buffer, 250, ',');
		current_meter_reading_peak = buffer;

		fin.getline(buffer, 250, ',');
		entry_date = buffer;

		fin.getline(buffer, 250, ',');
		cost_of_electricity = buffer;

		fin.getline(buffer, 250, ',');
		Sales_tax = buffer;

		fin.getline(buffer, 250, ',');
		Fixed_charges = buffer;

		fin.getline(buffer, 250, ',');
		Billing_amount = buffer;

		fin.getline(buffer, 250, ',');;
		due_date = buffer;

		fin.getline(buffer, 250, ',');
		paid_status = buffer;
         if(paid_status=="paid"){
              count1++;
         }
         else{
         count2++;
         }
	}
	else if (customer_id == "5808") {
		string line;
		getline(fin, line);
		getline(fin, line);
		getline(fin, line);
		fin.getline(buffer, 250, ',');
		User_id = buffer;

		fin.getline(buffer, 250, ',');
		Month = buffer;

		fin.getline(buffer, 250, ',');
		Current_meter_reading_reg = buffer;

		fin.getline(buffer, 250, ',');
		current_meter_reading_peak = buffer;

		fin.getline(buffer, 250, ',');
		entry_date = buffer;

		fin.getline(buffer, 250, ',');
		cost_of_electricity = buffer;

		fin.getline(buffer, 250, ',');
		Sales_tax = buffer;

		fin.getline(buffer, 250, ',');
		Fixed_charges = buffer;

		fin.getline(buffer, 250, ',');
		Billing_amount = buffer;

		fin.getline(buffer, 250, ',');;
		due_date = buffer;

		fin.getline(buffer, 250, ',');
		paid_status = buffer;
         if(paid_status=="paid"){
              count1++;
         }
         else{
         count2++;
         }
	}
}

void output_bill() {
	cout << "\n\n\n\t\t\t\t\t\tCUSTOMERS INFO: " << endl;
	cout << "\n\t\t\t\t\t\tUser Id: " << User_id << endl;
	cout << "\n\t\t\t\t\t\tCustomers name: " << name << endl;
	cout << "\n\t\t\t\t\t\tCNIC of customer: " << CNIC << endl;
	cout << "\n\t\t\t\t\t\tMeter type of customer: " << meter_type << endl;
	cout << "\n\t\t\t\t\t\tCustomer type: " << customer_type << endl << endl;
	cout << "\n\t\t\t\t\t\t INFO: " << endl;
	cout << "\n\t\t\t\t\t\tCost of electricity= " << cost_of_electricity << endl;
	cout << "\n\t\t\t\t\t\tTax amount= " << Sales_tax << endl;
	cout << "\n\t\t\t\t\t\t charges= " << Fixed_charges << endl;
	cout << "\n\t\t\t\t\t\tTotal bill amount due= " << Billing_amount << endl;
	cout << "\n\t\t\t\t\t\tThe due date: " << due_date << endl;
	cout << "\n\t\t\t\t\t\tPaid status: " << paid_status << endl;

}
void showreport()
{
        cout<<"\n\t\t\t\t\t\tNo of people who have paid the bill= "<<count1<<endl;
        cout<<"\n\t\t\t\t\t\tNo of people that did not pay their bill yet= "<<count2<<endl;

}
string input(string line)
{
	system("cls");
	string value, store;
	value = line;
	cout << endl << "\n\n\t\t\tEnter the whole statement seperated with commas and no spaces\n\t\t\t\t " << endl;
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

	string file_data[4];
	cout << "\n\n\n\t\t\t\t\t\tIf single phase press 1\n\n\t\t\t\t\t\tIf three phase press 3\n";
	cin >> num2;
	if (num2 == 1)
	{
		system("cls");
		cout << "\n\n\n\t\t\t\t\t\tIf domestic press 1\n\n\t\t\t\t\t\tIf commercial press 2\n";
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
			while (count < 4)
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
				filee << file_data[count] << endl;
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

		else if (num2 == 3)
		{
			system("cls");
			cout << "\n\n\n\t\t\t\t\t\tIf domestic press 1\n\n\t\t\t\t\t\tIf commercial press 2\n";
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

}

void updatebillcust()
{
	ifstream fin;
	ofstream fout;
	string line, line2, digit;
	int count = 0;
	int str_length;
	fin.open("customersinfo.txt");
	char inputFile;
	int num, num2, num3, num4;
	num = 1;

	if (num == 1)
	{
		
		string file_data[4];
		cout << "\n\n\n\t\t\t\t\t\tIf single phase press 1\n\n\t\t\t\t\t\tIf three phase press 3\n";
		cin >> num2;
		if (num2 == 1)
		{
			system("cls");
			cout << "\n\n\n\t\t\t\t\t\tIf domestic press 1\n\n\t\t\t\t\t\tIf commercial press 2\n";
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
				fin.open("customersinfo.txt");
				int count = 0;
				while (count < 4)
				{
					getline(fin, file_data[count]);
					count++;
				}
				fin.close();
				file_data[0] = recieve;
				fstream filee;
				filee.open("customersinfo2.txt", ios::out);
				count = 0;
				for (count = 0; count < 4; count++)
				{
					filee << file_data[count] << endl;
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
				filee.open("customersinfo.txt", ios::in);
				int count = 0;
				while (count < 4)
				{
					getline(filee, file_data[count]);
					count++;
				}
				filee.close();
				file_data[1] = recieve;
				filee.open("customersinfo2.txt", ios::out);
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
			system("cls");
			cout << "\n\n\n\t\t\t\t\t\tIf domestic press 1\n\n\t\t\t\t\t\tIf commercial press 2\n";
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
				filee.open("customersinfo.txt", ios::in);
				int count = 0;
				while (count < 4)
				{
					getline(filee, file_data[count]);
					count++;
				}
				filee.close();
				file_data[2] = recieve;
				filee.open("customersinfo2.txt", ios::out);
				count = 0;
				for (count = 0; count < 4; count++)
				{
					filee << file_data[count] << endl;
				}
				filee.close();
			}
			if (num3 == 2)
			{
				for (int i = 0; i < 3; i++)
				{
					getline(fin, line);
				}
				cout << line;
				string recieve = input(line);
				fstream filee;
				filee.open("customersinfo.txt", ios::in);
				int count = 0;
				while (count < 4)
				{
					getline(filee, file_data[count]);
					count++;
				}
				filee.close();
				file_data[3] = recieve;
				filee.open("customersinfo2.txt", ios::out);
				count = 0;
				for (count = 0; count < 4; count++)
				{
					filee << file_data[count] << endl;
				}
				filee.close();
			}

		}
	}
}

void updatebill()
{

	ofstream out;
	out.open("billinginfo.txt", ios::app);

	string enter;
	int num;
	int regreading, peak, id;
	cout << "\n\n\t\t\t\t\t\tENTER CUSTOMER ID : ";
	cin >> id;
	out << endl << id << ",";

	cout << "\n\n\t\t\t\t\t\tEnter bill month : ";
	cin >> enter;
	out << enter << ",";
	cout << "\n\n\t\t\t\t\t\tEnter regular reading : ";
	cin >> regreading;
	out << regreading << ",";

	cout << "\n\n\t\t\t\t\t\tEnter peak reading :";
	cin >> peak;
	out << peak << ",";
	cout << "\n\n\t\t\t\t\t\tEnter reading entry date (seperated by / ) :";
	cin >> enter;
	out << enter << ",";
	cout << "\n\n\t\t\t\t\t\tEnter electrcity costs: ";
	cin >> num;
	out << num << ",";
	cout << "\n\n\t\t\t\t\t\tEnter sales tax : ";
	cin >> num;
	out << num << ",";
	cout << "\n\n\t\t\t\t\t\tEnter fixed charges : ";
	cin >> num;
	out << num << ",";

	cout << "\n\n\t\t\t\t\t\tEnter total bill : ";
	cin >> num;
	out << num << ",";
	string enter2;
	cout << "\n\n\t\t\t\t\t\tEnter due date (seperated by / ) : ";
	cin >> enter2;
	out << enter2 << ",";
	string enter3;

	cout << "\n\n\t\t\t\t\t\tEnter status : ";
	cin >> enter3;
	out << enter3 << ",";
	cout << "\n\n\t\t\t\t\t\tEnter due date (seperated by / ) : ";
	cin >> enter2;
	out << enter2 << "," << endl;

	updatebillcust();

}

void Employeepressed() {
	int check = 0;
    
	//cout << "Update Customer Information" << '\n' << "Update Billing Information" << '\n' << "Update Tariff Tax" << '\t' << "View Customer Information" << endl;
	cout << "\n\n\n\n\t\t\t\tPress 1 for updating customer info" << endl;
	cout << "\n\n\t\t\t\tPress 2 for updating billing info" << endl;
	cout << "\n\n\t\t\t\tPress 3 for tariff tax info" << endl;
	cout << "\n\n\t\t\t\tPress 4 to view customer info" << endl;
	cout << "\n\n\t\t\t\tPress 5 to view bill information of customer." << endl;
    cout << "\n\n\t\t\t\tPress 6 to view the report."<<endl;
  
	cin >> check;
	if (check == 1) {
		system("cls");
		cout << "\n\n\t\t\t\t\t\tUpdate Customer Information";
		updatebillcust();
		// Function call
	}
	else if (check == 2) {
		system("cls");
		cout << "\n\n\t\t\t\t\t\tUpdate Billing Information";
		updatebill();	// Function call
	}
	else if (check == 3) {
		system("cls");
		cout << "\n\n\t\t\t\t\t\tUpdate Tariff Tax";
		UpdateTaxInfo();	// Function call
	}
	else if (check == 4) {
		system("cls");
		ifstream fin;
		string customer_id;
		cout << "\n\n\t\t\t\t\t\tEnter Customer ID= ";
		cin >> customer_id;
		bool check = CustomerID(customer_id);
		if (check) {
			fin.open("customersinfo.txt");
			input_customersinfo(fin, customer_id);
			output_customersinfo();
		}
		else {
			system("cls");
			cout << "\n\n\t\t\t\t\t\tCustomer ID is Incorrect" << endl;
		}
	}
	else if (check == 5) {
		system("cls");
		ifstream fin;
		string customer_id;
		cout << "\n\n\t\t\t\t\t\tEnter Customer ID= ";
		cin >> customer_id;
		bool check4 = CustomerID(customer_id);
		if (check4) {
			fin.open("Billinginfo.txt");
			input_bill(fin, customer_id);
			output_bill();
		}
		else {
			system("cls");
			cout << "\n\n\t\t\t\t\t\tNo such customer exists." << endl << endl;
		}

	}
    else if(check==6){
        system("cls");
	ifstream fin;
    ifstream finn;
    int i=0;
    string customer_id[4], line;
    string customerid;
        char buffer[10];
	fin.open("Billinginfo.txt");
    finn.open("Billinginfo.txt");
    do
    {
      
       fin.getline(buffer, 10, ',');
       customer_id[i]=buffer;
       i++;
    }
    while(getline(fin,line) && i<4);
    i=0;
    while(i<4){
          customerid=customer_id[i];
          input_bill(finn, customerid);
          i++;
     }
      showreport(); 

   
	}
}

void customerpressed(string username) {
	ifstream fin, file;
	string customer_id;
	customer_id = username;
	bool check4 = CustomerID(customer_id);
	if (check4) {
		fin.open("Billinginfo.txt");
		file.open("CustomersInfo.txt");
		cout << "\n\n\t\t\t\t\t\tYour bill information is: " << endl;
		input_bill(fin, customer_id);
		input_customersinfo(file, customer_id);
		output_bill();
	}
	else {
		system("cls");
		cout << "\n\n\t\t\t\t\t\tNo such customer exists." << endl << endl;
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
				system("cls");
				cout << "\n\n\t\t\t\t\t\tLOGIN SUCCESSFUL";
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
	fin.open("Customersinfo.txt");
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
				system("cls");
				cout << "\n\n\t\t\t\t\t\tLOGIN SUCCESFUL";
				break;
			}
		}
	}

	return check2;
}

int main()
{

	char check;
	cout << "\n\n\t\t\t\t\t\t>Welcome to LESCO<\n\n\n\n";
	cout << "\t\t\t\tAre you an employee or a Customer? \n\n\t\t\t\tEnter 'e' for employee and 'c' for customer: ";
	cin >> check;

	string username;
	string password;

	bool login = false;
	int m = 0;
	while (m == 0 || m == 1)
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tENTER USERNAME :";
		cin >> username;
		cout << "\n\t\t\t\t\t\tENTER PASSWORD : ";
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
			system("cls");
			cout << "\n\n\n\n\n\n\n\t\t\t\t\tINCORRECT USERNAME OR PASSWORD ENTERED\n\n\t\t\t\t\tPRESS 1 TO RETRY AND 2 TO EXIT: ";
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
		if (m == 3)
		{
			if (check == 'e')
				Employeepressed();
			else if (check == 'c')
			{
				cout << "\n\n\t\t\t\t\tCustomer can view bill info only." << endl;
				customerpressed(username);
			}
		}


	}

	system("pause");
	return 0;


}
