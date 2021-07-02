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
		float cgpa;
	public:
		Student(int Student_id,string Sname,int Sage,char Sgender,string Sbranch,float Sfees,float cgpa)
		{
			this->Student_id=Student_id;
			this->Sname=Sname;
			this->Sage=Sage;
			this->Sgender=Sgender;
			this->Sbranch=Sbranch;
			this->Sfees=Sfees;
			this->cgpa=cgpa;
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
		float getcgpa(){
			return this->cgpa;
		}
		void getAllStDetails()
		{
			cout<<"student id : "<<Student_id<<endl;
			cout<<"student name : "<<Sname<<endl;
			cout<<"student age : "<<Sage<<endl;
			cout<<"Stuent gender : "<<Sgender<<endl;
			cout<<"Student branch : "<<Sbranch<<endl;
			cout<<"Student Fees : "<<Sfees<<endl;
			cout<<"Student cgpa :"<<cgpa<<endl;
		}
};

bool searchstudentId(int student_id,int student_array[]){
int count=0;
int n=10;
for(int i=0;i<n;i++){
	if(student_array[i]==student_id){
		count++;
	}
}
if(count!=0){
	return true;
}
else{
	return false;
}
return -1;
}
bool searchteacherId(int teacher_id,int teacher_array[]){
int count=0;
int n=10;
for(int i=0;i<n;i++){
	if(teacher_array[i]==teacher_id){
		count++;
	}
}
if(count!=0){
	return true;
}
else{
	return false;
}
return -1;
}
bool searchstaffId(int staff_id,int staff_array[]){
int count=0;
int n=10;
for(int i=0;i<n;i++){
	if(staff_array[i]==staff_id){
		count++;
	}
}
if(count!=0){
	return true;
}
else{
	return false;
}
return -1;
}
//class Student::public University{
//	
//};


 
int main(){
<<<<<<< Updated upstream
	int student_array[10000]={};
	int teacher_array[10000];
	int staff_array[10000];
=======
	
	Student s1[10]={Student(101,"venkatesh",20,'M',"CSE",45000,9.0),
	Student(102,"swaroop",20,'M',"CSE",45000,9.0),
	Student(103,"ganesh",22,'M',"CSE",45000,8.5),
   	Student(104,"rakesh",20,'M',"CSE",60000,8.0),
   	Student(105,"rasmika",19,'F',"CSE",45000,9.5),
   	Student(106,"rashi",20,'F',"CSE",45000,9.1),
   	Student(107,"sharath",20,'M',"CSE",45000,9.0),
   	Student(108,"suresh",20,'M',"CSE",45000,9.0),
  	Student(109,"mahesh",20,'M',"CSE",60000,9.0),
	Student(110,"samantha",21,'F',"CSE",45000,9.4),
};
	

	int Student_array[10]={101,102,103,104,105,106,107,108,109,110};
	int teacher_array[10]={2501,2502,2503,2504,2505,2506,2507,2508,2509,2510};
	int staff_array[10]={901,902,903,904,905,906,907,908,909,910};
>>>>>>> Stashed changes
//	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cout<<"**************************************UNIVERSITY MANAGEMENT SYSTEM*************************\n";
	cout<<"Welcome to Interface\n";
	cout<<"1.Enter 1 to login Student Interface\n";
	cout<<"2.Enter 2 to login Teacher Interface\n";
	cout<<"3.Enter 3 to login Mess Inetrface\n";
	int n;
	cin>>n;
	bool flag=true;
	while(flag){
	if(n==1){
		cout<<endl;
		cout<<"Welcome to student interface\n";
		cout<<"Please confrim you as a Student by entering the id"<<endl;
		int Student_id;
		cin>>Student_id;
		if(searchstudentId(Student_id,Student_array)==true){
			cout<<"Login Sucessfull"<<endl;
	cout<<"What do you want to do?"<<endl;

			int number;
			bool value=true;
			while(value){
			cout<<"1.Enter 1 to get your details"<<endl;
			cout<<"2.Enter 2 to see your academics"<<endl;
			cout<<"3.Enter 3 to see your score"<<endl;
			cout<<"4.Enter 4 to see your balance"<<endl;
			cout<<"5.Enter 5 to manage your mess details"<<endl;
<<<<<<< Updated upstream
			int number_student;
			cin>>number_stduent;
			
=======
				cin>>number;
				if(number==1){
					cout<<"Details are"<<endl;
					s1[10].getAllStDetails();
					
				}
				if(number==2){
					cout<<"Details are"<<endl;
					cout<<"SNO    "<<"Name"<<"timings"<<endl;
					cout<<"1       "<<"phy"	<<"5:30"<<endl;			
					}
				if(number==3){
					cout<<"CGPA: "<<endl;
				}
				if(number==4){
					cout<<"CGPA"<<endl;
					
				}
				if(number==5){
					cout<<"Details are"<<endl;
					
				}


					cout<<"Would you like to continue?(y/n)"<<endl;
					char decision;
					cin>>decision;
					if(decision=='n' ||decision=='N'){
						break;
					}
					else if(decision=='y' || decision=='Y'){
						continue;
					}
				
			}
>>>>>>> Stashed changes
			break;
		}
		else{
			cout<<endl;
			cout<<"details not found please enter valid student id"<<endl;
		}
		
		
	}
	else if(n==2){
		cout<<"Welcome to Teacher interface\n";
		cout<<"Please confrim you as a Teacher by entering the id"<<endl;
		int Teacher_id;
		cin>>Teacher_id;
		if(searchteacherId(Teacher_id,teacher_array)==true){
			cout<<"Login Sucessfull"<<endl;
			cout<<"What do you want to do?"<<endl;
			cout<<"1.Enter 1 to get your details"<<endl;
			cout<<"2.Enter 2 to see your branch"<<endl;
			break;
		}
		else{
			cout<<endl;
			cout<<"details not found please enter valid teacher id"<<endl;
		}
	}
	else if(n==3){
		cout<<"Welcome to Mess interface\n";
		cout<<"Please confrim you as a Staff by entering the id"<<endl;
		int Staff_id;
		cin>>Staff_id;
		if(searchstaffId(Staff_id,staff_array)==true){
			cout<<"Login Sucessfull"<<endl;
			cout<<"What do you want to do?"<<endl;
			cout<<"1.Enter 1 to get your details"<<endl;
			cout<<"2.Enter 2 to see your branch"<<endl;
			break;
		}
		else{
			cout<<endl;
			cout<<"details not found please enter valid staff id"<<endl;
		}
	}
	else{
		cout<<"Please Enter valid number\n";
	}
}
	
	return 0;
}
