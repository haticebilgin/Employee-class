#include<string>
using namespace std;
//c++ HEADER FILE

class Employee{
	
	private:
		string firstname;
		string lastname;
		float salary;
		
	public:
	
		Employee(string f,string l,float s); //CONSTRUCTOR
		void setfirstname(string f);
		void setlastname(string l);
		void setsalary(float s);
		string getfirstname();
		string getlastname();
		float getsalary();
		float incrasesalary(float i);
		float yearlyincome();
	
	
};
