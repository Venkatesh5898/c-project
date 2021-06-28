#include<bits/stdc++.h>
using namespace std;
//class University{
//	private:
//		int Teacher_id;
//		int Student_id;
//		int Employee_id;
//	public:	
//	University(int Teacher_id,int Student_id,int Employee_id){
//		this->Teacher_id=Teacher_id;
//		this->Student_id=Student_id;
//		this->Employee_id=Employee_id;
//	}	
//	int getteacher()
//	{
//		return this->Teacher_id;
//	}	
//	int getstudent()
//	{
//		return this->Student_id;
//	}
//	int getemployee(){
//		return this->Employee_id;
//	}
//	
//};
class Employee{
	private:
		int Employee_id;
		string Ename;
		int Age;
		string Designation;
		char Gender;
		double Salary;
		float Exp;
	public:
		Employee(int Employee_id,string Ename,int Age,string Designation,char Gender,double Salary,float Exp)
		{
		//this pointer is used for assigning the values and not creating the copy 
		//while assigning through construtor or funtion
		this->Employee_id=Employee_id;
		this->Ename=Ename;
		this->Age=Age;
		this->Designation=Designation;
		this->Gender=Gender;
		this->Salary=Salary;
		this->Exp=Exp;
     	}
     	int getEmp_id()
     	{
     		return this->Employee_id;	
		}
		string getEmp_name()
		{
			return this->Ename;
		}
		int getEmp_age()
		{
			return this->Age;
		}
	    string getEmp_designation()
		{
			return this->Designation;
		}
		char getEmp_gender()
		{
			return this->Gender;
		}
		double getEmp_salary()
		{
			return this->Salary;
		}
		float getEmp_exp()
		{
			return this->Exp;
		}
		void getAllDetails()
		{
			cout<<"Emlpoyee id is: "<<Employee_id<<endl;
			cout<<"Emlpoyee name is: "<<Ename<<endl;		
			cout<<"Emlpoyee age is: "<<Age<<endl;
			cout<<"Emlpoyee designation is: "<<Designation<<endl;
		    cout<<"Emlpoyee gender is: "<<Gender<<endl;
			cout<<"Emlpoyee salary is: "<<Salary<<endl;
			cout<<"Emlpoyee exp is: "<<Exp<<endl;
 
		}
}; 
//class Teacher::public University{
//	
//}; 
//class Student::public University{
//	
//}; 
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	Employee E1(101,"Aula venkates",21,"SDE",'M',50000.000,3.5);
	int id;
	cout<<"enter id";
	cin>>id;
	if(id==E1.getEmp_id()){
	E1.getAllDetails();	
	}
	else{
		cout<<"number thapu ra pukaa"<<endl;
	}
	return 0;
}
