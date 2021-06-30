#include<bits/stdc++.h>
using namespace std;
//class University{
//	private:
//		int Mess_id;
//		int Student_id;
//		int Employee_id;
//	public:	
//	University(int Mess_id,int Student_id,int Employee_id){
//		this->Mess_id=Mess_id;
//		this->Student_id=Student_id;
//		this->Employee_id=Employee_id;
//	}	
//	int getmess()
//	{
//		return this->Mess_id;
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
class Mess{
	private:
		int Worker_id;
		string Wname;
		int Wage;
		string Items;
		double Bill;
	public:
		Mess(int Worker_id,string Wname,int Wage,string Items,double Bill)
		{
			this->Worker_id=Worker_id;
			this->Wname=Wname;
			this->Wage=Wage;
			this->Items=Items;
			this->Bill=Bill;
		}
		int getWorker_id()
		{
			return this->Worker_id;
		}
		string getWname()
		{
			return this->Wname;
		}
			int getWage()
		{
			return this->Wage;
		}
		string getItems()
		{
			return this->Items;
		}
		double getBill()
		{
			return this->Bill;
		}
		void getAllMess()
		{
			cout<<"Worker id is:"<<Worker_id<<endl;
			cout<<"Wname is:"<<Wname<<endl;
			cout<<"Wage is:"<<Wage<<endl;
			cout<<"Items are:"<<Items<<endl;
			cout<<"Bill is:"<<Bill<<endl;
		}
	
};

class Student{
	private:
		int Student_id;
		string Sname;
		int Sage;
		char Sgender;
		string Sbranch;
		float Sfees;
	public:
		Student(int Student_id,string Sname,int Sage,char Sgender,string Sbranch,float Sfees)
		{
			this->Student_id=Student_id;
			this->Sname=Sname;
			this->Sage=Sage;
			this->Sgender=Sgender;
			this->Sbranch=Sbranch;
			this->Sfees=Sfees;
		}
		int getStudent_id()
		{
			return this->Student_id;
		}
		string getSname()
		{
			return this->Sname;
	    }
	    int getSage()
		{
			return this->Sage;
		}
		char getSgender()
		{
			return this->Sgender;
		}
		string getSbranch()
		{
			return this->Sbranch;
		}
		float getSfees()
		{
			return this->Sfees;
		}
		void getAllStDetails()
		{
			cout<<"student id : "<<Student_id<<endl;
			cout<<"student name : "<<Sname<<endl;
			cout<<"student age : "<<Sage<<endl;
			cout<<"Stuent gender : "<<Sgender<<endl;
			cout<<"Student branch : "<<Sbranch<<endl;
			cout<<"Student Fees : "<<Sfees<<endl;
		}
};


//class Student::public University{
//	
//}; 
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cout<<"**************************************UNIVERSITY MANAGEMENT SYSTEM*************************";
	return 0;
}
