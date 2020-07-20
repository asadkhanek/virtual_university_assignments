#include<iostream>
using namespace std;

class Question
{
	private : 
		int QesID;
		string QesType;
		int QesMarks;
	
	public :
		Question()
		{
			cout<<"Enter Question ID : ";
			cin>>QesID;
			cout<<" Enter  Question Type : ";
			cin>>QesType;
			cout<<"Enter Question Marks : ";
			cin>>QesMarks;
		}
		void setQueID(int id)  
		{
			QesID=id;
		}
		
		void setQueType(string type)  
		{
			QesType=type;
		}
		void setQueMarks(int marks)	 
		{
			QesMarks=marks;
		}
		int getQueID() const 
		{
			return QesID;
		}
		string getQueType() const 
		{
			return QesType;
		}
		int getQueMarks() const 
		{
			return QesMarks;
		}
			
};

class Exam
{
	private :
		string ExmTyp;
		string CursCde;
		static const int NoOfQuestions=2;
		Question *questions[NoOfQuestions];
	
	public :
		Exam(string EType, string CCode)
		{
			ExmTyp=EType;
			CursCde=CCode;
			for(int i=0; i<NoOfQuestions; i++)
			{
				cout<<"\n*******Enter Data of Question No. "<<i+1<<"**********\n";
				questions[i] = new Question();
			}
		}
		void DisplayInfo()
		{
		
			cout<<"************ Displaying Exam Information **************";
			
			cout<<"\nExam Type : "<<ExmTyp;
			cout<<"\nCourse Code : "<<CursCde;
			cout<<"\nTotal No of Questions for Exam : "<<NoOfQuestions;
			
			cout<<"\n----------------------------\n";
			cout<<"********** Displaying Question Information **************";
			cout<<"\n----------------------------";
			for(int i=0; i<NoOfQuestions; i++)
			{
				cout<<"\nQuestion No. : "<<i+1;
				cout<<"\nQuestion Id : "<<questions[i]->getQueID();
				cout<<"\nQuestion Type : "<<questions[i]->getQueType();
				cout<<"\nQuestion Marks : "<<questions[i]->getQueMarks();
				cout<<"\n----------------------------";
			}
		}
	
};

main()
{
	
	cout<<"\n\t\tCS304 Assignment No. 2 \n";
	cout<<"\id:bc180409129 name:Muhammad Asad khan\n\n";
	string type, code;
	cout<<"********Enter Exam Type : ";
	getline(cin, type);
	cout<<"**********Enter Course Code : ";
	getline(cin, code);
	
	Exam exm1(type,code);
	
	exm1.DisplayInfo();
}



