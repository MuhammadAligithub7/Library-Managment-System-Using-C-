// create a library managment system using singly linked list
// store student name,id,number of books he has got,date of entry,
// also create a book store to see how many books is left in library which can be given to student
// for example if a student get 4 books of cpp now if you check the avaliable book so for cpp books in library should be 0
// because there are just 4 copies of each book and a student can only take 4 books at a time limitation.  

#include<iostream>
#include<string>
using namespace std;

class student
{
	private:	
	string name;
	int id;
	int day,month,year;

	int size;
    student *next,*head,*tail,*temp,*current;
	
	public:
	student()
	{	
	name=" ";
    id=0;
	day,month,year=0;	
	size=0;
	head=NULL;
	tail=NULL;
	temp=NULL;
	current=NULL;
	}	
	
	void insert_data();
	void books();
	void display();
		
};
 
void student::insert_data()
{

	string st_name;
	int st_id;
    int st_day;
    int st_month;
    int st_year;
		
	cout<<"Enter Name of Student : ";
    cin>>st_name; 
    cout<<"Enter ID of Student : "; 
    cin>>st_id;  
    cout<<"Enter the Day : ";
    cin>>st_day;
    cout<<"Enter the month : ";
    cin>>st_month;
    cout<<"Enter the year : ";
    cin>>st_year;
      
    temp=new student;
	temp->name=st_name;
    temp->id=st_id;
    temp->day=st_day;
    temp->month=st_month;
    temp->year=st_year;
	temp->next=NULL;
	size++;
	
	if (head==NULL)
    {
	head=temp;
	tail=temp;
	current=temp;
    }  	
    else
    {
    tail->next=temp;
    tail=tail->next;
    current=current->next;
    }
    
}

void student::books()
{
    int option;
	cout<<"\n ***************** ***************** ***************** \n"<<endl;	
	cout<<"press 1 To Get c++ Book "<<endl;
	cout<<"press 2 To Get python Book "<<endl;
	cout<<"press 3 To Get java Book "<<endl;
	cout<<"\n ***************** ***************** ***************** \n"<<endl;	

	cin>>option;
	switch(option)
	{
		case 1:
		cout<<"you got c++ book"<<endl;	
		break;
		case 2:
		cout<<"you got python book"<<endl;	
		break;
		case 3:
		cout<<"you got java book"<<endl;		
		break;
		default: 
	    cout<<"invalid \n\n";	
	    break;		
	}
	
}

void student::display()
{
	if(head==NULL)
    {
	cout<<" There is No Data \n\n"<<endl; 
    } 
    current=head;
    while(current!=NULL)
    {
	cout<<"\n\n Student Name is : "<<current->name<<endl;
	cout<<"\n\n Student ID is : "<<current->id<<endl;
	cout<<"\n\n Date : "<<current->day<<"/"<<current->month<<"/"<<current->year<<endl<<endl;
    current=current->next;
	cout<<"\n\n ***************** ***************** ***************** "<<endl;	
    }	
}

 
main()
{
   	cout<<"\n ***************************************************** \n"<<endl;
    cout<<"\t\t Library Managmnet System \t\t"<<endl;
	cout<<"\n ***************************************************** \n"<<endl;
	student obj;
	int choice;
	while(true)
 {
	cout<<"\n ***************** ***************** ***************** \n"<<endl;
	cout<<" press 1 To Store Student information "<<endl;
	cout<<" press 2 To select books "<<endl;
	cout<<" press 3 To Display Student Information "<<endl;
	cout<<" press 4 To Clear Screen "<<endl;

	cout<<"\n ***************** ***************** ***************** \n"<<endl;
	
	cin>>choice;
	switch(choice)
	{
	case 1:
	cout<<"\t\t Enter Student Detail "<<endl;	
	cout<<"\n ***************** ***************** ***************** \n"<<endl;
	obj.insert_data();
	break;
	
	case 2:
  	cout<<"\t\t Books Detail "<<endl;
	cout<<"\n ***************** ***************** ***************** \n"<<endl;	  	
	obj.books();		
	break;
	
		
    case 3:	cout<<"\t\t Student Detail "<<endl;
	cout<<"\n ***************** ***************** ***************** \n"<<endl;	
	obj.display();
	break;
	
	case 4:
	system("cls");	
	break;

	default: 
	cout<<"invalid \n\n";	
	break;					
	}
 }


}
