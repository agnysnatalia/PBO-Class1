#include <iostream>
#include <string>


using namespace std;
class Employee
{
 public:
  Employee( string, string, int );
  void setFirstName( string );
  string getFirstName();
  void setLastName(string);
  string getLastName();
  void setMonthlySalary(int);
  int getMonthlySalary();
 private:
  string firstName;
  string lastName;
  int monthlySalary;
};
Employee::Employee( string fname, string lname, int sal)
{
{
 firstName=fname;
 lastName=lname;
 if(sal>0)
  monthlySalary=sal;
 else
 {
  monthlySalary=0;
  cout<<"Gaji awal tidak valid."<<endl;
 }
}
}

void Employee::setFirstName ( string fname)
{
	firstName = fname;
}

string Employee::getFirstName ()
{
	return firstName;
}

void Employee::setLastName ( string lname )
{
	lastName = lname;
}

string Employee::getLastName ()
{
	return lastName;
}

void Employee::setMonthlySalary(int salary )
{
 if(salary>0)
  monthlySalary=salary;
 else
 {
  monthlySalary=0;
  cout<<"Gaji awal tidak valid."<<endl;
 }
}
int Employee::getMonthlySalary()
{
 return monthlySalary;
}

int main()
{
 Employee Employee1("Agnys","Natalia",5000);
 Employee Employee2("Zubaedah","Anastasya",3125);
 cout << "Nama karyawan1 adalah: "<< Employee1.getFirstName()<<" "<< Employee1.getLastName()<<endl;
 cout<< "Gaji bulanan adalah:  "<< Employee1.getMonthlySalary()<< " Gaji tahunan adalah: "<< Employee1.getMonthlySalary()*12<< endl;
 cout<<"Setelah kenaikan gaji sebesar 10%"<<endl;
 int incrementedSalary1=Employee1.getMonthlySalary();
 incrementedSalary1=incrementedSalary1+(incrementedSalary1*0.1);
 Employee1.setMonthlySalary(incrementedSalary1);
 cout<< "Gaji bulanan karyawan1 adalah: "<< Employee1.getMonthlySalary()<< " dan gaji tahunan adalah: "<< Employee1.getMonthlySalary()*12<<endl<<endl;
 
 cout << "Nama karyawan2 adalah: "<< Employee2.getFirstName()<<" "<< Employee2.getLastName()<<endl;
 cout<< "Gaji bulanan adalah: "<< Employee2.getMonthlySalary()<< " Gaji tahunan adalah: "<< Employee2.getMonthlySalary()*12<< endl;
 cout<<"Setelah kenaikangaji sebesar 10%"<<endl;
 int incrementedSalary2=Employee1.getMonthlySalary();
 incrementedSalary2=incrementedSalary2+(incrementedSalary2*0.1);
 Employee2.setMonthlySalary(incrementedSalary2);
 cout<< "Gaji bulanan karyawan2 adalah: "<< Employee2.getMonthlySalary()<< " dan gaji tahunan adalah: "<< Employee2.getMonthlySalary()*12<< endl;
}
