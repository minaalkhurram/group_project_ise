#include<iostream>
#include<fstream>
#include<string>
#include <cstdlib>
using namespace std;

void Read() {
	ifstream fin;
	string digit;
	string ar[4];
	char a[4],b[4];
	fin.open("nadrab.txt");

	short loop = 0;
	if (fin.is_open()) {
		while (!fin.eof()) {
			getline(fin, digit);
			ar[loop] = digit;
			loop++;

		}cout << endl;

		for (int z = 0,n=0,r=0; z < 4; z++)
		{
			for (int i = 0, j = 0, k = 0, count = 0; ar[z][i] != ' '; i++)
			{
				if (ar[z][i] == '/') {
				
					k = i;
					k++;
					a[j] = ar[z][k];
					j++;
					i++;
					k++;
					count++;

					if (ar[z][k] == '/') {
						k++;
					}
					else {

						a[j] = ar[z][k];
						j++;
					}
					if (count == 2)
						break;
				}
			}
			int l = atoi(a);
			if (n != 0 && n!=2) {
		
				int p = l / 10;
			}
			

			
			for (int i = 0, count1 = 0, k = 0, j = 0; ar[z][i] != ' '; i++) {
				if (ar[z][i] == ',') {
					count1++;

				}if (count1 == 2) {

					k = i;
					k++;
			
					if (ar[z][k] == '/') {
			
						i = k;
						k++;
						b[j] = ar[z][k];
						j++;
						i++;
						k++;
						if (ar[z][k] != '/') {

							b[j] = ar[z][k];
							j++;
						}
						else if (ar[z][k] == '/') {
							k++;
							b[j] = ar[z][k];
							j++;
							k++;
							b[j] = ar[z][k];
							break;
						}
					}
				}
			}n++;
			int m = atoi(b);
			if (r != 0 && r!=2) {
				
				int p = l / 10;
				int q = m / 10;
				cout << "number " << r;
				if (p < q && p != q) {
					cout << " Not Expired" << endl;
				}
				else if (p >= q) {
					cout << " will be Expired in 30 days" << endl;
				}
			}
			else {
				cout<<" Number "<<r<<" " ;
				if (l < m && l != m) {
					cout << " Not Expired" << endl;
				}
				else if (l >= m) {
					cout << " will be Expired in 30 days" << endl;
				}
			}
			r++;
		}
	}
	else {
		cout << "File Not Found";
	}
}

int main() {
	Read();
	system("pause");
	return 0;
}