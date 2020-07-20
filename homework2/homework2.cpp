#include<iostream>
#include<string>
#include<math.h>
void cal_com(float,float,float);
using namespace std;
int main()
{
	string name;
    float salary, sale, commission;
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission Percent : ";
	cin >> commission;
	cout << "\n\n";
	cout << "Your name = " << name << endl;
	cal_com(salary,sale,commission);
	
}
void cal_com(float salary,float sale,float commission)
{
	cout << "Total Reevenue " << salary + (sale * (commission/100)) << " Bath " << endl;

	
}
