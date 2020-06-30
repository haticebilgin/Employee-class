#include<iostream>
#include"Employee.h"

#include <string>
using namespace std;

int main(){
	
	Employee e1("Jane","Smith",1000);
	cout<<"First Name: "<<e1.getfirstname();
	e1.setfirstname("Mary");
	cout<<"\nFirst Name: "<<e1.getfirstname();
	cout<<"\nCurrent Salary : "<<e1.getsalary();
	e1.setsalary(4000);
	cout<<endl<<"Salary : "<<e1.getsalary();
	e1.incrasesalary(500);
	cout<<endl<<"Increased Salary : "<<e1.getsalary();	
	
	cout<<endl<<"Yearly Income:"<<e1.yearlyincome();
	
	
	return 0;
}
