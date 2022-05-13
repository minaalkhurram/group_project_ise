#include<iostream>
#include<fstream>
#include<cstring>
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
    int j=0, count=0;;
	file.open("CustomersInfo.txt");
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
  cout<<"Cost of electricity= "<<cost_of_electricity<<endl;
  cout<<"Tax amount= "<<Sales_tax<<endl;
  cout<<"Fixed charges= "<<Fixed_charges<<endl;
  cout<<"Total bill amount due= "<<Billing_amount<<endl;
  cout<<"The due date: "<<due_date<<endl;
  cout<<"Paid status: "<<paid_status<<endl;
}
int main() {
	ifstream fin;
    string customer_id;
    cout<<"Enter Customer ID= ";
    cin>>customer_id;
    bool check=CustomerID(customer_id);
    if(check){
	fin.open("Billinginfo.txt");
	input_bill(fin,customer_id);
    output_bill();
    }
    else{
        cout<<"No such customer exists."<<endl<<endl;
    }
	system("pause");
	return 0;
}