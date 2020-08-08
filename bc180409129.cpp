#include<iostream>
#include <string>
using namespace std;


class StockItem
{
	protected :
		string item_name;
		int quant;
		int pri;
		string cou_code;
		string cou_name;
	
	public :
		StockItem()
		{
			item_name="";
			quant=0;
			pri=0;
			cou_code="";
			cou_name="";
		}
		void set_Item_name(string n)
		{
			item_name=n;
		}
		void set_quant(int q)
		{
			quant=q;
		}
		void set_pri(int p)
		{
			pri=p;
		}
		void set_cou_code(string c)
		{
			cou_code=c;
		}
		void set_cou_name(string nm)
		{
			cou_name=nm;
		}
	
		string get_item_name()
		{
			return item_name;
		}
		int take_quantity()
		{
			return quant;
		}
		int get_price()
		{
			return pri;
		}
		string get_cou_code()
		{
			return cou_code;
		}
		string get_cou_name()
		{
			return cou_name;
		}
		
	
		virtual void set_stock()
		{
			cout<<"Enter The Data for Stock";
			cout<<"\nEnter Item Name : ";
			cin>>item_name;
			cout<<"Enter Item Quantity : ";
			cin>>quant;
			cout<<"Enter Item Price : ";
			cin>>pri;
			cout<<"Enter Course Name : ";
			cin>>cou_name;
			cout<<"Enter Course Code : ";
			cin>>cou_code;
		}
		
		virtual void display_stock()
		{
			cout<<"\nItem Name : "<<item_name;
			cout<<"\nCourse Name : "<<cou_name;
			cout<<"\nCourse Code : "<<cou_code;
			cout<<"\nQuantity : "<<quant;
			cout<<"\nPrice : "<<pri;	
		}	
};


class Handouts : public StockItem
{
	private :
	
		int no_pages;
		string author;
	public :
		Handouts() : StockItem ()
		{
			no_pages=0;
			author="";
		}
		virtual void set_stock()
		{
			cout<<"\nEnter following Data for Handouts Items";
			cout<<"\nEnter Item Name : ";
			cin>>item_name;
			cout<<"Enter Item Quantity : ";
			cin>>quant;
			cout<<"Enter Item Price : ";
			cin>>pri;
			cout<<"Enter Course Name : ";
			cin.ignore();
			getline(cin, cou_name);
			cout<<"Enter Course Code : ";
			cin>>cou_code;
			cout<<"Enter Pages : ";
			cin>>no_pages;
			cout<<"Enter Author : ";
			cin>>author;
		}
	
		virtual void display_stock()
		{
			cout<<"\nDisplaying Book Information";
			cout<<"\n----------------------------------";
			cout<<"\nItem Name : "<<get_item_name();
			cout<<"\nCourse Name : "<<cou_name;
			cout<<"\nCourse Code : "<<cou_code;
			cout<<"\nHandouts Quantity : "<<quant;
			cout<<"\nHandouts Price : "<<pri;
			cout<<"\nHandouts Pages : "<<no_pages;
			cout<<"\nHandouts Author : "<<author;	
		}
};

class Lecture_DVD : public StockItem
{
	private :
		int total_minutes;
		int total_lectures;
	public :
		Lecture_DVD() : StockItem ()
		{
			total_minutes=0;
			total_lectures=0;
		}

		virtual void set_stock()
		{
			cout<<"\nEnter Data following Data for Lecture DVD";
			cout<<"\nEnter Item Name : ";
			cin>>item_name;
			cout<<"Enter Item Quantity : ";
			cin>>quant;
			cout<<"Enter Item Price : ";
			cin>>pri;
			cout<<"Enter Course Name : ";
			cin.ignore();
			getline(cin, cou_name);
			cout<<"Enter Course Code : ";
			cin>>cou_code;
			cout<<"Enter Minutes : ";
			cin>>total_minutes;
			cout<<"Enter Lectures : ";
			cin>>total_lectures;
		}
		virtual void display_stock()
		{
			cout<<"\n\nDisplaying Lecture DVD Information";
			cout<<"\n----------------------------------";
			cout<<"\nItems Name : "<<item_name;
			cout<<"\nCourse Name : "<<cou_name;
			cout<<"\nCourse Code : "<<cou_code;
			cout<<"\nQuant : "<<quant;
			cout<<"\nPrice : "<<pri;
			cout<<"\nMinutes : "<<total_minutes;
			cout<<"\nLectures : "<<total_lectures;	
		}
};
void ASAD_KHAN()
{
	cout<<"\nName: Asad khan id:bc180409129\n";
	cout<<"cs304 object oreanted programming\n";
}

main()
{
	ASAD_KHAN();

	int items=0;
	char choice;
	char d;
	int i=0;
	
	cout<<"\nHow many items do you want to enter? : ";
	cin>>items;
	StockItem* stock[items];
	
	do
	{
	again:

		cout<<"Enter your choice: H for Handouts, L for lecture DVD : ";
		cin>>choice;
		if(choice=='H' || choice =='h')
		{
			stock[i]=new Handouts();
			stock[i]->set_stock();
			i++;
		} 
		else if(choice=='L' || choice =='l')
		{
			stock[i]=new Lecture_DVD();
			stock[i]->set_stock();
			i++;
		}
		else
		{
			cout<<"\nSorry Choice your is Invalid plz , Try Again\n";
			goto again;
		}

		cout<<"Do you want to enter more data {Y for yes, N for No} : ";
		cin>>d;
	}while((d=='Y'|| d=='y') && i<items);
	for(int j=0; j<i; j++)
	{
		stock[j]->display_stock();
	}
}

