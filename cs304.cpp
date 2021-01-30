
#include<iostream>
#include <cstring>
#include <string>
using namespace std;

class Person
{
	private : 
		string n;
		int a;
		string g;
		string ad;
		string ph;
	
	public :
		Person()
		{
			
		}

		void set_n(string n)
		{
			n=n;
		}
		void set_a(int a)
		{
			a=a;
		}
		void set_g(string g)
		{
			g=g;
		}
		void set_ad(string ad)
		{
			ad=ad;
		}
		void set_ph(string p)
		{
			ph=p;
		}
		
		string get_n()
		{
			return n;
		}
		int get_a()
		{
			return a;
		}
		string get_g()
		{
			return g;
		}
		string get_ad()
		{
			return ad;
		}
		string get_ph()
		{
			return ph;
		}
		
		virtual void save_info()
		{
			cin.ignore();
			cout<<"Enter N : ";
			getline(cin, n);
			cout<<"Enter G : ";
			cin>>g;
			cout<<"Enter A : ";
			cin>>a;
			cin.ignore();
			cout<<"Enter Ad : ";
			getline(cin, ad);
			cout<<"Enter Ph No : ";
			cin>>ph;
		}
		
		virtual void display_info()
		{
			cout<<"N : "<<n;
			cout<<"\nG : "<<g;
			cout<<"\nA : "<<a;
			cout<<"\nAd : "<<ad;
			cout<<"\nPh No. : "<<ph;
		}
};

class Patient : public Person
{
	private : 
		string sickness;
		string prescription;
	public :
		Patient()
		{
			
		}
		
		void save_info()
		{
			cout<<"\nEnter the following data for Patient\n\n";
			Person::save_info();
			cout<<"Enter Sickness : ";
			cin>>sickness;
			cout<<"Enter Prescription : ";
			cin>>prescription;
		}
		
		void display_info()
		{
			cout<<"\nDisplaying Patient's Information:\n------------------------------------\n";
			cout<<"\nPatient's N : "<<get_n();
			cout<<"\nPatient's G : "<<get_g();
			cout<<"\nPatient's A : "<<get_a();
			cout<<"\nPatient's Ad : "<<get_ad();
			cout<<"\nPatient's Ph No. : "<<get_ph();
			cout<<"\nPatient's Sickness : "<<sickness;
			cout<<"\nPrescription for the sickness : " <<prescription;
		}
};

class Staff : public Person
{
	
	private :
		string education;
		long salary;
	
	public : 
		Staff()
		{
			
		}
		
		void save_info()
		{
			cout<<"\nEnter the following data for Staff\n\n";
			Person::save_info();
			cout<<"Enter Education : ";
			cin>>education;
			cout<<"Enter Salary : ";
			cin>>salary;
		}
		
		void display_info()
		{
			cout<<"\nDisplaying Staff's Information:\n------------------------------------\n";
			cout<<"\nStaff's N : "<<get_n();
			cout<<"\nStaff's G : "<<get_g();
			cout<<"\nStaff's A : "<<get_a();
			cout<<"\nStaff's Ad : "<<get_ad();
			cout<<"\nStaff's Ph No. : "<<get_ph();
			cout<<"\nStaff's Education : "<<education;
			cout<<"\nStaff's Salary : " <<salary;
		}
};

void showinfo()
{

}
main()
{
	showinfo();
	int number=0, i=0;
	char type='\0', option='\0';
	cout<<"How many Person's information you want to enter : ";
	cin>>number;
	Person * persons[number];
	do
	{
		again:
		cout<<"\nEnter choice: P for Patient,  S for Staff : ";
		cin>>type;
		if(type=='p' || type=='P')
		{
			persons[i]=new Patient();
			persons[i]->save_info();
			i++;
		}
		else if(type=='s' || type=='S')
		{
			persons[i]=new Staff();
			persons[i]->save_info();
			i++;
		}
		else
		{
			cout<<"\nSorry Invalid Choice , Try Again\n";
			goto again;
		}
		cout<<"Do you want to enter more data (Y for Yes N for No) : ";
		cin>>option;
	}while((option=='Y' || option=='y') && i<number);
	for(int j=0; j<i; j++)
	{
		cout<<"\n";
		persons[j]->display_info();
		cout<<"\n------------------------------------";
	}
	
	cout<<"\n";
	showinfo();
	cout<<"\n\n";
}

