#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<cstring>
#include<conio.h>
#include<cstdlib>

using namespace std;

class Airline_Resevation
{
	struct bus
	{
		string F_Name;
		string L_Name;
		string Flight_name;
		string Gender;
		string Passport_No;
    	int Age;
		string arrival;
		string departure;
		string duration;
		string PNR;
		int Fare;
		int Tickets;
    	
		bus *next;
	};
	
	bus* head;

public:

	Airline_Resevation() 
	{ 
		head = NULL;  
	}
	
	bus pass;
	void Reserve_Seat();
	void Display_Record();
	void Search_Record();
	void Delete_Record();
};
void Airline_Resevation::Reserve_Seat()
{
	bus* newNode, *nodePtr;

	int ch=0;

	newNode = new bus;	
	cout<<"Enter you Name\t\t\t";
	cin>>pass.F_Name;
	cout<<"Enter your Father Name\t\t";
	cin>>pass.L_Name;
	cout<<"Enter your Gender\t\t";
	cin>>pass.Gender;
	cout<<"Enter you Age\t\t\t";
	cin>>pass.Age;
	cout<<"Enter Passport ID\t\t";
	cin>>pass.Passport_No;
	cout<<"How many tickets\t\t";
	cin>>pass.Tickets;
	
	cout<<"\n\n\t\t\t\tFlight Menu"<<endl;
	cout<<"\t\t\t1-> From Lahore To Islamabad"<<endl;
	cout<<"\t\t\t2-> From Karachi To Dubai"<<endl;
	cout<<"\t\t\t3-> From Lahore To Multan"<<endl;
	cout<<"\t\t\t";
	
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			pass.PNR = "CY12344";
			pass.arrival ="Lahore";
			pass.departure="Islamabad";
			pass.Flight_name = "PIA";
			pass.duration = "2_hours_10_mins ";
			break;
		case 2:
			pass.PNR = "PZ126644";
			pass.arrival ="Karachi";
			pass.departure="Dubai";
			pass.Flight_name = "Arab_Emarites";
			pass.duration = "1_hours_3_mins ";
			break;
		case 3:
			pass.PNR = "HY143344";
			pass.arrival ="Lahore";
			pass.departure="Multan";
			pass.Flight_name = "Air_Blue";
			pass.duration = "1_hour ";
			break;
	}
	newNode->F_Name = pass.F_Name;
	newNode->L_Name = pass.L_Name;
	newNode->Gender = pass.Gender;
	newNode->Age = pass.Age;
	newNode->Flight_name = pass.Flight_name;
	newNode->Passport_No = pass.Passport_No;
	newNode->Tickets = pass.Tickets;
	newNode->PNR=pass.PNR;
	newNode->arrival=pass.arrival;
	newNode->departure=pass.departure;
	newNode->duration=pass.duration;
	newNode->next = NULL;
	
	cout<<"Thankyou "<<pass.F_Name<<" "<<pass.L_Name<<", You have purchased "<<pass.Tickets<<" tickets"<<endl;
	cout<<"Thankyou for Reservation"<<endl<<endl;
	
	if (!head)

		head = newNode;

	else
	{
		nodePtr = head;
		
		while (nodePtr->next)

		nodePtr = nodePtr->next;
		nodePtr->next = newNode;
	
	}
		fstream file_in("Airline Reservation.txt", ios::app);
		
		if(file_in) 
		{
			file_in<<pass.F_Name<<"\t\t"<<pass.L_Name<<"\t\t"<<pass.Gender<<"\t"<<pass.Age<<"\t"
			<<pass.Tickets<<"\t"<<pass.Passport_No<<"\t"<<pass.PNR<<"\t\t"
			<<pass.arrival<<"\t\t"<<pass.departure<<"\t\t"<<pass.Flight_name<<"\t\t"<<pass.duration<<endl;
			
			file_in.close();

			cout<<"Record has been saved in a file!"<<endl;
		}
		
		else 
		
		cout<<"File is Not Responding...";
}

void Airline_Resevation::Search_Record()
{
	bus* newNode1, *nodePtr1;
    newNode1=new  bus;

    
	
	cout<<"Enter you Name\t\t";
	cin>>pass.F_Name;

	if (!head)

		head = newNode1;

	else
	{
		nodePtr1 = head;

		while (nodePtr1->next)

		nodePtr1 = nodePtr1->next;
		nodePtr1->next = newNode1;
		
		if(nodePtr1->F_Name==pass.F_Name)
		{
		
			cout<<pass.F_Name<<"\t\t"<<pass.L_Name<<"\t\t"<<pass.Gender<<"\t"<<pass.Age<<"\t"
			<<pass.Tickets<<"\t"<<pass.Passport_No<<"\t"<<pass.PNR<<"\t\t"
			<<pass.arrival<<"\t\t"<<pass.departure<<"\t\t"<<pass.Flight_name<<"\t\t"<<pass.duration<<endl;
		}   
	}
}

void Airline_Resevation:: Display_Record()
{
	bus* nodePtr;
	nodePtr=head;
	if(head==NULL)
	cout<<"No Record Found!"<<endl;
	else
	{
		while (nodePtr)
		{
			cout<<nodePtr->F_Name<<"\t"<<nodePtr->L_Name<<"\t"<<nodePtr->Gender<<"\t"<<nodePtr->Age<<"\t"
				<<nodePtr->Tickets<<"\t"<<nodePtr->Passport_No<<"\t"<<nodePtr->PNR<<"\t"<<nodePtr->arrival<<"\t\t"<<nodePtr->departure<<"\t\t"
				<<nodePtr->Flight_name<<"\t\t"<<nodePtr->duration<<endl;
				
			
			nodePtr = nodePtr->next;
		}
	}
}
	
void Airline_Resevation::Delete_Record()
{
	string line;
	int count = 0;
	bus *nodePtr, *previousNode;

	if (!head)
	{
		cout<<"List is empty"<<endl;
		return;
	}
	
	cout<<"Enter the name of passenger you want to delete\t";
	cin>>pass.F_Name;

	if (head->F_Name == pass.F_Name)
	{
		nodePtr = head->next;

		cout<<nodePtr->F_Name<<"\t"<<nodePtr->L_Name<<"\t"<<nodePtr->Gender<<"\t"<<nodePtr->Age<<"\t"
				<<nodePtr->Tickets<<"\t"<<nodePtr->Passport_No<<"\t"<<nodePtr->PNR<<"\t"<<nodePtr->arrival<<"\t\t"<<nodePtr->departure<<"\t\t"
				<<nodePtr->Flight_name<<"\t\t"<<nodePtr->duration<<endl;

		delete head;

		cout<<"Record for "<<pass.F_Name<<" has been Deleted"<<endl;

		head = nodePtr;
	}	
	else
	{
		nodePtr = head;

		while ((nodePtr != NULL) && (nodePtr->F_Name != pass.F_Name))
		{
			cout<<"No Record found for "<<pass.F_Name<<endl;
	
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		previousNode->next = nodePtr->next;
	
		delete nodePtr;
	}
}

int main()
{
	
	Airline_Resevation air;
	while(1)
	{
	
	system("cls");	


	cout<<"\n\n\n\t\t\t\t\t   AIRLINE RESERVATION SYSTEM"<<endl;
	
	cout<<"\t\t\t\t\t1----------Add Passenger Record"<<endl;
	cout<<"\t\t\t\t\t2----------Display Passenger Record"<<endl;
	cout<<"\t\t\t\t\t3----------Search Passenger Record"<<endl;
	cout<<"\t\t\t\t\t4----------Delete Passenger Record"<<endl;
	cout<<"\t\t\t\t\t5----------Exit"<<endl<<endl;
	
	int choice;
	
	cout<<"\t\t\t\t\tEnter your choice"<<endl<<endl<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
				air.Reserve_Seat();
				cin.get();
				cin.get();
				break;
		case 2:
				air.Display_Record();
				cin.get();
				cin.get();
				break;
		case 3:
				air.Search_Record();
				cin.get();
				cin.get();
				break;
		case 4:
				air.Delete_Record();
				cin.get();
				cin.get();
				break;
		default:
				cout<<"You have entered invalid choice"<<endl;
				break;
	}
 
}
   
	return 0;
}
