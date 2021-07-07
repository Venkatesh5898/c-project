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
			cout<<"Employee id is: "<<Employee_id<<endl;
			cout<<"Employee name is: "<<Ename<<endl;		
			cout<<"Employee age is: "<<Age<<endl;
			cout<<"Employee designation is: "<<Designation<<endl;
		    cout<<"Employee gender is: "<<Gender<<endl;
			cout<<"Employee salary is: "<<Salary<<endl;
			cout<<"Employee exp is: "<<Exp<<endl;
 
		}
}; 
class Staff{
	private:
		int Staff_id;
		string Wname;
		float Wage;
		string Items;
		float Workinghrs;
	public:
		Staff(int Staff_id,string Wname,float Wage,string Items,float Workinghrs)
		{
			this->Staff_id=Staff_id;
			this->Wname=Wname;
			this->Wage=Wage;
			this->Items=Items;
			this->Workinghrs=Workinghrs;
		}
		int getStaff_id()
		{
			return this->Staff_id;
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
		double getWorkinghrs()
		{
			return this->Workinghrs;
		}
		void getAllStaff()
		{
			cout<<"Staff id is:"<<Staff_id<<endl;
			cout<<"Wname is:"<<Wname<<endl;
			cout<<"Wage is:"<<Wage<<endl;
			cout<<"Items are:"<<Items<<endl;
			cout<<"Workinghrs are:"<<Workinghrs<<endl;
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
bool searchEmployeeId(int Employee_id,int Employee_array[]){
int count=0;
int n=10;
for(int i=0;i<n;i++){
	if(Employee_array[i]==Employee_id){
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
	cout<<"**************************************UNIVERSITY MANAGEMENT SYSTEM*************************\n";
	cout<<"Welcome to Interface\n";
	cout<<"1.Enter 1 to login Student Interface\n";
	cout<<"2.Enter 2 to login Teacher Interface\n";
	cout<<"3.Enter 3 to login Mess Inetrface\n";
	Student s1[10]={Student(101,"venkatesh",20,'M',"CSE",50000,9.0),
	Student(102,"swaroop",20,'M',"CSE",50000,9.0),
	Student(103,"ganesh",22,'M',"CSE",50000,8.5),
   	Student(104,"rakesh",20,'M',"CSE",50000,8.0),
   	Student(105,"rasmika",19,'F',"CSE",50000,9.5),
   	Student(106,"rashi",20,'F',"CSE",50000,9.1),
   	Student(107,"sharath",20,'M',"CSE",50000,9.0),
   	Student(108,"suresh",20,'M',"CSE",50000,9.0),
  	Student(109,"mahesh",20,'M',"CSE",50000,9.0),
	Student(110,"samantha",21,'F',"CSE",50000,9.4)	
};

    Employee e1[10]={
    	Employee( 2501,"david",45,"Java",'M',50000,4),
    	Employee( 2502,"sharmila",40,"Html",'F',30000,1.5),
    	Employee( 2503,"madhulatha",35,"os",'F',25000,1),
    	Employee( 2504,"farrok",50,"Linux",'M',35000,3),
    	Employee( 2505,"ramadevi",60,"c",'F',40000,4.5),
    	Employee( 2506,"Riyaz",55,"c#",'M',35000,3.5),
    	Employee( 2507,"baskaar",65,"cd",'M',30000,2.5),
    	Employee( 2508,"amar",80,"se",'M',10000,2),
    	Employee( 2509,"Rangila",37,"unix",'M',20000,1.5),
    	Employee( 2510,"gothami",40,"dwdm",'F',35000,3)

	};
	
	Staff st1[10]={
		Staff(901,"Yaswanth",1000,"Puri",2 ),
		Staff(902,"Saiswaroop",1200,"Dosa",2.5 ),
		Staff(903,"Suri",1300,"idli-vada",2 ),
		Staff(904,"Sharath",1100,"Uggani",3 ),
		Staff(905,"Sampath",900,"Tea",2 ),
		Staff(906,"Mahesh",1000,"Bonda",4 ),
		Staff(907,"Govind",1350,"Pongal",2 ),
		Staff(908,"Manoj",1600,"Washing",5 ),
		Staff(909,"Reddy",1000,"Cleaning",2 ),
		Staff(910,"Anji",1400,"Accountant",6 ),
	};
	

	int Student_array[10]={101,102,103,104,105,106,107,108,109,110};
	int Employee_array[10]={2501,2502,2503,2504,2505,2506,2507,2508,2509,2510};
	int Staff_array[10]={901,902,903,904,905,906,907,908,909,910};
//	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n;
	cin>>n;
	bool flag=true;
	while(flag){
	if(n==1){
		cout<<endl;
		cout<<"Welcome to student interface\n";
		cout<<"Please confrim you as a Student by entering the id"<<endl<<endl;
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
			cout<<"5.Enter 5 to manage your mess details"<<endl<<endl;
			
				cin>>number;
				if(number==1){
					int i;
					cout<<"Details are"<<endl;
					for(i=0;i<10;i++){
						if(Student_array[i]==Student_id){
							break;
						}
					}
					s1[i].getAllStDetails();
				
					
				}
				if(number==2){
					cout<<"Acadamics are : "<<endl;
					cout<<"Week/Timings    "<<" 9-10 "<<" 10-11 "<<" 11-12   "<<" 12-1  "<<"  1-2  "<<" 2-3    "<<" 3-4  "<<endl;
					cout<<"      Mon       "<<" c++  "<<" c#    "<<" python  "<<" Break "<<" DBMs  "<<" linux  "<<" java "<<endl;
					cout<<"      Tue       "<<" c#   "<<" c++   "<<" java    "<<" Break "<<" linux "<<" python "<<" c   "<<endl;
					cout<<"      Wed       "<<" Html "<<" Web   "<<" android "<<" Break "<<" Daa   "<<" os     "<<" Rp   "<<endl;
					cout<<"      Fri       "<<" Css  "<<" unix  "<<" Ruby    "<<" Break "<<" java  "<<" os     "<<" Html "<<endl;
					cout<<"      Sat       "<<" c#   "<<" Web   "<<" python  "<<" Break "<<" Linux "<<" Html   "<<" c++  "<<endl;			
					}
				if(number==3){
					cout<<"CGPA: "<<endl;
					int i;
					for(i=0;i<10;i++){
						if(Student_array[i]==Student_id){
							break;
						}
					}
						cout<<s1[i].getcgpa()<<endl;
				}
				if(number==4){
					cout<<"Fee balance is"<<endl;
						int i;
					for(i=0;i<10;i++){
						if(Student_array[i]==Student_id){
							break;
						}
					}
					if(s1[i].getcgpa()>=9){
						cout<<s1[i].getSfees()-(s1[i].getSfees()*0.30)<<endl;
						
					}
					else if(s1[i].getcgpa()>=8 && s1[i].getcgpa()<=9){
						cout<<s1[i].getcgpa()-(s1[i].getSfees()*0.25)<<endl;
					}
					else{
						cout<<s1[i].getcgpa()<<endl;
					}
                
					
				}
				if(number==5){
					cout<<"Daily Mess Items are : "<<endl;
					cout<<"Week/Timings"<<"    Breakfast      "<<"     Lunch     "<<"     Dinner     "<<endl;
					cout<<"    Mon     "<<"  puri,dosa,vada   "<<"    Veg-Meals  "<<"     Veg-Meals  "<<endl;
					cout<<"    Tue     "<<"  idly,upma,bonda  "<<"    Veg-Meals  "<<"     Veg-Meals  "<<endl;
					cout<<"    Wed     "<<"  chapati,puri     "<<"     Non-veg   "<<"     Veg-Meals  "<<endl;
					cout<<"    Thu     "<<"  uggani,pongal    "<<"    Veg-Meals  "<<"     Veg-Meals  "<<endl;
					cout<<"    Fri     "<<"  jeera rice,idly  "<<"    Veg-Meals  "<<"      Non-Veg   "<<endl;
					cout<<"    Sat     "<<"  Salad,chapati    "<<"    Veg-Meals  "<<"     Veg-Meals  "<<endl<<endl;  
					
					int i;
					i=5000;
					cout<<"The Amount You have to pay for Mess Fees is : "<<"Rs."<<i<<"/-"<<endl<<endl;
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
			break;
		}
		else{
			cout<<endl;
			cout<<"details not found please enter valid student id"<<endl;
		}
		
		
	}
	else if(n==2){
		cout<<"Welcome to Employee interface\n";
		cout<<"Please confrim you as a Employee by entering the id"<<endl<<endl;
		int Employee_id;
		cin>>Employee_id;
		if(searchEmployeeId(Employee_id,Employee_array)==true){
			cout<<"Login Sucessfull"<<endl;
			cout<<"What do you want to do?"<<endl<<endl;
			int number;
			bool value=true;
			while(value){
			
			cout<<"1.Enter 1 to get your details"<<endl;
			cout<<"2.Enter 2 to see your branch"<<endl<<endl;
			
			cin>>number;
			if(number==1){
				int i;
				cout<<"Details of the employee : "<<endl<<endl;
				for(i=0;i<10;i++){
					if(Employee_array[i]==Employee_id){
						break;
					}
				}
				e1[i].getAllDetails();
		}
				
				
				if(number==2){
					
					cout<<"The Branch belongs to you is : "<<endl;
					cout<<"David      "<<":"<<"JAVA "<<endl;
					cout<<"SHarmila   "<<":"<<"HTML "<<endl;
					cout<<"Madhulatha "<<":"<<"Os   "<<endl;
					cout<<"Farok      "<<":"<<"Linux"<<endl;
					cout<<"Ramadevi   "<<":"<<"C    "<<endl;
					cout<<"Riaz       "<<":"<<"C#   "<<endl;
					cout<<"Baskar     "<<":"<<"SE   "<<endl;
					cout<<"Amar       "<<":"<<"Cd   "<<endl;
					cout<<"Rangila    "<<":"<<"Unix "<<endl;
					cout<<"Gothami    "<<":"<<"Dwdm "<<endl;
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
				
			
			break;
		}
	}
		else{
			cout<<endl;
			cout<<"details not found please enter valid teacher id"<<endl;
		}
	}
	else if(n==3){
		cout<<"Welcome to Mess interface\n";
		cout<<"Please confrim you as a Staff by entering the id"<<endl<<endl;
		int Staff_id;
		cin>>Staff_id;
		if(searchstaffId(Staff_id,Staff_array)==true){
			cout<<"Login Sucessfull"<<endl;
			cout<<"What do you want to do?"<<endl<<endl;
			int number;
			bool value=true;
			while(value){
			
			cout<<"1.Enter 1 to get your details"<<endl;
			cout<<"2.Enter 2 for price of each item"<<endl<<endl;
			
			cin>>number;
			if(number==1){
				int i;
				cout<<"Details of the Staff are : "<<endl<<endl;
				for(i=0;i<10;i++){
					if(Staff_array[i]==Staff_id){
						break;
					}
				}
				st1[i].getAllStaff();
		}
		
		    if(number==2){
		    
		    	cout<<"Menu is : "<<endl<<endl;
		    	cout<<"Food Item"<<" "<<"Price"<<endl;
		    	cout<<"Puri     "<<":"<<"40.rs"<<endl;
		    	cout<<"Dosa     "<<":"<<"35.rs"<<endl;
		    	cout<<"Idly-Vada"<<":"<<"30.rs"<<endl;
		    	cout<<"Uggani   "<<":"<<"25.rs"<<endl;
		    	cout<<"Tea      "<<":"<<"10.rs"<<endl;
		    	cout<<"Bonda    "<<":"<<"20.rs"<<endl;
		    	
			}
			
			cout<<"Would you like to continue?(y/n)"<<endl;
			char decision;
			cin>>decision;
			if(decision=='y' ||decision=='Y'){
				continue;
			}
			else if(decision=='n' || decision=='N'){
				break;
			}
			break;
		}
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
