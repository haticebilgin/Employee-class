#include"Employee.h"
//c++ SOURCE FILE

Employee::Employee(string f,string l,float s){
	
	firstname=f;
	lastname=l;
	salary=s;
	}
	
/*	
Employee::Employee(string f,string l,float s){
};*/
	
string Employee::getfirstname(){
return firstname;
}

string Employee::getlastname(){
return lastname;
}

float Employee::getsalary(){
	return salary;
}

void Employee::setfirstname(string f){
	
		firstname=f;
}

void Employee::setlastname(string l){
	
		lastname=l;
}

void Employee::setsalary(float s){
	
		salary=s;
}


float Employee::incrasesalary(float i){
	salary=salary+(salary*i)/100;
	return salary;
}

float Employee::yearlyincome(){return salary*12;
}
