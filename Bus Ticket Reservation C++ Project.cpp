								//	NAME			KINZA GHAFFAR
								//  REG#			17-NTU-1040
								//  BSSE(MORNING)	4TH SEMESTER
								//  Course			Data Strucure
								//  Bus Ticket Reservation System
								//  Array Data Structure
	
	
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include <windows.h>
#include<ctime>

using namespace std;

int n;
int const size = 20;

void Login();
void Register();
void Forgot_Password();

//---------------------------------------------------------------------------------------------------------//
//												TICKET CLASS
//---------------------------------------------------------------------------------------------------------//
class ticket
{
	private:
		
			string seat[size];
			string reserve_seat[size];
			string temporary_save_seat[size];
			int Top;
			int Top1;
			int start;
			int end;
			string f_name;
			string l_name;
			string gender;
			string city;
			string bus_no;
			string Arrival_Time;
			string Departure_Time;
			string Duration;
			string phone_no;
			int age;
			int fare;
	
	public:
//---------------------------------------------------------------------------------------------------------//
//						  						 CONSTRUCTOR
//---------------------------------------------------------------------------------------------------------//
			ticket()
			{		
				Top = 0;
				Top1 = 0;
				start = 0;
				end = 0;
				fare = 0;	
			}
//---------------------------------------------------------------------------------------------------------//
//												ISEMPTY FUNCTION
//---------------------------------------------------------------------------------------------------------//
			bool Ticket_Containter_Is_Empty()
			{
				if(start == end) 
				return true;
			
				else 
				return false; 	
			}
//---------------------------------------------------------------------------------------------------------//
//												ISFULL FUNCTION
//---------------------------------------------------------------------------------------------------------//
			bool Ticket_Containter_Is_Full()
			{
				if(end == size)  
				return true;	
				
				else 
				return false;
			}
//---------------------------------------------------------------------------------------------------------//
//				   						 	BOOK_SEAT FUNCTION
//---------------------------------------------------------------------------------------------------------//
			void Book_Seat(string a,string b)
			{
				if(Ticket_Containter_Is_Full())
				{
					Line();
					cout<<"Sorry! No seat is available!"<<endl;
					Line();
				}
				else 
				{		
					seat[end++] = a+b;				
				}

			}
//---------------------------------------------------------------------------------------------------------//
//											   DEQUEUE FUNCTION
//---------------------------------------------------------------------------------------------------------//
			void Dequeue()
			{
				if(Ticket_Containter_Is_Empty())
				{
					Line();
					cout<< "\n\n\tTicket Container is Empty..!\n";
					Line();
				}
				else
				{	
					reserve_seat[Top]=seat[start];
					Top++;
				
					for(int i=0;i<end-1;i++)
					{					
						seat[i]=seat[i+1];
					}
					
					seat[end--];					
				}
			}
//---------------------------------------------------------------------------------------------------------//
//												DISPLAY FUNCTION
//---------------------------------------------------------------------------------------------------------//
		void Display_Seats()
		{
			cout<<"\nAvailable Seats Are\n\n";
			
			for(int j=0;j<end; j++) 
			
			cout<<seat[j]<<"\t\n";
		}
//---------------------------------------------------------------------------------------------------------//
//											DISPLAY RESERVED SEATS FUNCTION
//---------------------------------------------------------------------------------------------------------//
		void Display_Reserved_Seats()
		{
			cout<<"Reserved Seats Are\n\n";
			
			for(int j=Top-1;j>=0; j--) 
			
			cout<<reserve_seat[j]<<"\n";
		}
//---------------------------------------------------------------------------------------------------------//
//												FEMALE FUNCTION
//---------------------------------------------------------------------------------------------------------//
		void female()
		{	
			system("cls");
			
			cout<<"\t\t*************************************************************************"<<endl;
			
			cout<<"\t\t\t\t\tWelcome to the Female Portion\n";	
			
			cout<<"\t\t*************************************************************************"<<endl;
			
			cout<<"\n\t\t\t\t\tYour First Name   \t";
			cin>>f_name;
			cout<<"\t\t\t\t\tYour Last Name      \t";
			cin>>l_name;
			cout<<"\t\t\t\t\tYour Age\t\t\t";
			cin>>age;
			cout<<"\t\t\t\t\tYour Phone Number    \t";
			cin>>phone_no;
			
			cout<<"\n\t\t\t\t\tWhere you want to go?\t\n\n\n";
			
			cout<<"*************************************************************************************************************\n";
			cout<<"\tLahore          Departure: 10:00AM          Arrival: 12:30PM          Duration: 2 hours 30 mins"<<endl;
			cout<<"\tMultan          Departure: 12:00PM          Arrival: 04:00PM          Duration: 4 hours"<<endl;
			cout<<"\tGujranwala      Departure: 02:00PM          Arrival: 05:00PM          Duration: 3 hours"<<endl;
			cout<<"\tSahiwal         Departure: 08:00PM          Arrival: 10:30PM          Duration: 2 hours 30 mins"<<endl;
			cout<<"\tJhung           Departure: 08:00AM          Arrival: 10:45PM          Duration: 2 hours 45 mins"<<endl;
			cout<<"\tSargodha        Departure: 03:00PM          Arrival: 05:00PM          Duration: 2 hours"<<endl;
			cout<<"\tIslamabad       Departure: 06:00PM          Arrival: 10:00PM          Duration: 4 hours"<<endl;
			cout<<"*************************************************************************************************************";
			
			cout<<"\n\t\t\t\t\tEnter City\t";
			cin>>city;
		}
//---------------------------------------------------------------------------------------------------------//
//											MALE FUNCTION
//---------------------------------------------------------------------------------------------------------//
		void male()
		{
			system("cls");
			
			cout<<"\t\t*************************************************************************"<<endl;
			
			cout<<"\t\t\t\t\tWelcome to the Male Portion\n";	
			
			cout<<"\t\t*************************************************************************"<<endl;
			
			cout<<"\n\t\t\t\t\tYour First Name   \t";
			cin>>f_name;
			cout<<"\t\t\t\t\tYour Last Name      \t";
			cin>>l_name;
			cout<<"\t\t\t\t\tYour Age\t\t\t";
			cin>>age;
			cout<<"\t\t\t\t\tYour Phone Number    \t";
			cin>>phone_no;
			
			cout<<"\n\t\t\t\t\tWhere you want to go?\t\n\n\n";
			
			cout<<"*************************************************************************************************************\n";
			cout<<"\tLahore          Departure: 10:00AM          Arrival: 12:30PM          Duration: 2 hours 30 mins"<<endl;
			cout<<"\tMultan          Departure: 12:00PM          Arrival: 04:00PM          Duration: 4 hours"<<endl;
			cout<<"\tGujranwala      Departure: 02:00PM          Arrival: 05:00PM          Duration: 3 hours"<<endl;
			cout<<"\tSahiwal         Departure: 08:00PM          Arrival: 10:30PM          Duration: 2 hours 30 mins"<<endl;
			cout<<"\tJhung           Departure: 08:00AM          Arrival: 10:45PM          Duration: 2 hours 45 mins"<<endl;
			cout<<"\tSargodha        Departure: 03:00PM          Arrival: 05:00PM          Duration: 2 hours"<<endl;
			cout<<"\tIslamabad       Departure: 06:00PM          Arrival: 10:00PM          Duration: 4 hours"<<endl;
			cout<<"*************************************************************************************************************";
			
			cout<<"\n\t\t\t\t\tEnter City\t";
			cin>>city;
		}
//---------------------------------------------------------------------------------------------------------//
//											TICKET_PRICE FUNCTION
//---------------------------------------------------------------------------------------------------------//
		void Ticket_Price()
		{	
			if(city=="Lahore")
      		{
      			bus_no="LEH-4050";
      			Departure_Time="10:00AM";
				Arrival_Time="12:30PM";
				Duration="2hours30mins";
                cout<<"\nPer ticket, Rs.500/-";
                fare=n*500;
      		}

      		else if(city=="Multan")
      		{
			  	bus_no="KHG-1222";
                Departure_Time="12:00PM";
				Arrival_Time="04:00PM";
				Duration="4hours";
				cout<<"\nPer ticket, Rs.650/- ";
            	fare=n*650;	
      		}

      		else if(city=="Gujranwala")
      		{
			  	bus_no="FDK-5117";
                Departure_Time="02:00PM";
				Arrival_Time="05:00PM";
				Duration="3hours";
                cout<<"\nPer ticket, Rs.360/-";
                fare=n*360;
      		}

      		else if(city=="Sahiwal")
      		{
      			bus_no="LAH-5992";
                Departure_Time="08:00PM";
				Arrival_Time="10:30PM";
				Duration="2hours30mins";
				cout<<"\nPer ticket, Rs.400/- ";
                fare=n*400;
      		}

      		else if(city=="Jhung")
      		{
      			bus_no="EBY-4864";
                Departure_Time="08:00AM";
				Arrival_Time="10:45PM";
				Duration="2hours45mins";
                cout<<"\nPer ticket, Rs.470/- ";
                fare=n*470;
      		}

      		else if(city=="Sargodha")
      		{
      			bus_no="AQU-1022";
                Departure_Time="03:00PM";
				Arrival_Time="05:00PM";
				Duration="2hours";
                cout<<"\nPer ticket, Rs.370/- ";
                fare=n*370;
      		}

			else if(city=="Islamabad")
      		{
      			bus_no="APZ-2456";
               	Departure_Time="06:00PM";
				Arrival_Time="10:00PM";
				Duration="4hours";
				cout<<"\nPer ticket, Rs.490/- ";
                fare=n*490;
      		}
      		else
      		{
			
			do
      			{
      				cout<<"\nSorry! "<<f_name<<" "<<l_name<<" Sorry! This city is not included in our destination"<<endl;
      				break;
			 	}
			
			while(city!="Lahore"||city!="Jhang"||city!="Sahiwal"||city!="Sargodha"||
				  city!="Multan"||city!="Islamabad"||city!="Gujranwala");
      	   }
      		
		}	
//---------------------------------------------------------------------------------------------------------//
//												RESERVE FUNCTION
//---------------------------------------------------------------------------------------------------------//
		void Reservation()
		{
			system("cls");
			
			cout<<"\t\t\t\t*******************************************************\n";
			cout<<"                                                WELCOME TO OUR RESERVATION\n";
			cout<<"\t\t\t\t*******************************************************\n";
			
			int input;
			
			if(end!=0)
			{
				cout<<"\n\n\t\t\t\t\tHow many Tickets you wanna purchase?\t";
				cin>>n;
				
				if(n>20)
				{
					cout<<"Sorry! we have only 20 seats in bus!\n";
					cin.get();
					cin.get();
					Reservation();
				}
			
				else
				{
					if(n<end)
					{
						cout<<"\n\t\t\t\t\t\tEnter your gender\t";
						cin>>gender;
						
						cout<<"\n\n";
						
						if(gender=="F"||gender=="f"||gender=="Female"||gender=="female")
						{
							female();
						}
						
						else if(gender=="M"||gender=="m"||gender=="Male"||gender=="male")
						{
							male();
						}
						
						else
						return;
							
					    
						Ticket_Price();
					 	Save_In_File();
					
					    for(int i=0;i<n;i++)
						{
						//cout<<"fff\n";
							Dequeue();
				
					    }
					    cout<<"**********************************************************************";
					   	cout<<"\n\nThankyou "<<f_name<<" "<<l_name<<" You have purchased "<<n<<" tickets for "<<city<<endl;
						cout<<"You have to pay Rs."<<fare<<"/- for your "<<n<<" Tickets"<<endl;
						cout<<"Your Bus Number is "<<bus_no<<endl;
						cout<<"Your Departure and Arrival Time Time for "<<city<<" is "<<Departure_Time<<" and "<<Arrival_Time
						<<" resepectively."<<endl;
						cout<<"ThankYou for resrvation. Have a Safe Journey!\n\n";
						cout<<"**********************************************************************";

						Display_Reserved_Seats();
						//Display_Seats();
					}
						else
						cout<<"Can't book seat because we have not "<<n<<" seats\n";
				}
			}
			
			else
			cout<<"ok!..\n";
			
		}
//---------------------------------------------------------------------------------------------------------//
//											CANCEL RESERVATION FUNCTION
//---------------------------------------------------------------------------------------------------------//
			void Cancel_Reservation()
			{
				int q;
			
				Display_Reserved_Seats();
			
				cout<<"Which seat u want to cancel?(1/2/3/4/5/6/7/8/9/10/11/12/13/14/15/16/17/18/19/20) ";
				cin>>q;
			
				for(int i=0;i<q-1;i++)
				{
					temporary_save_seat[Top1++]=reserve_seat[Top-1];
					Top--;
				}	
				
				seat[end++]=reserve_seat[Top-1];
				Top--;

				for(int i=0;i<q-1;i++)
				{
				
					reserve_seat[Top++]==temporary_save_seat[Top1-1];
				
					temporary_save_seat[Top1--];
				
					Display_Reserved_Seats();
				}	
			
			}
//---------------------------------------------------------------------------------------------------------//
//					  						 SAVE IN FILE FUNCTION
//---------------------------------------------------------------------------------------------------------//
		void Save_In_File()
		{
			ofstream myfile("Bus Ticket Reservation.txt",ios::app); 
 			
			if(!myfile) 
 			{ 
				cout<<" FILE DOES NOT EXIST!!!"<<endl; 
			}
 			
			myfile<<f_name<<"\t\t"<<l_name<<"\t\t"<<gender<<"\t\t"<<age<<"\t\t"<<phone_no<<"\t\t"
			<<city<<"\t\t"<<bus_no<<"\t\t"<<Departure_Time<<"\t\t"<<Arrival_Time<<"\t\t"<<Duration<<"\t\t"<<fare<<endl;
				  
			cout<<"\n\nRECORD HAS BEEN SAVED IN A FILE SUCCESSFULLY!";
			
			cout<<endl<<endl;
		}		
//---------------------------------------------------------------------------------------------------------//
//												SHOW RESERVATION FUNCTION
//---------------------------------------------------------------------------------------------------------//
			void Show_Reservation()
			{
				system("cls");
				
				cout<<"\t\t\t\t\t\t\t\tAll Reservations"<<endl<<endl;
				
				ifstream myfile("Bus Ticket Reservation.txt"); 
		 		
				if(!myfile) 
 				{ 
    				cout<<"FILE DOES NOT EXIST."<<endl; 
 				} 
cout<<"______________________________________________________________________________________________________________________________________________________________________\n";

			cout<<"First Name\tLast Name\tGender\t\tAge\tPhone Number\tCity\t\tBus No.\t\tDeparture\tArrival\t\tDuration\t\tFare"<<endl;
cout<<"______________________________________________________________________________________________________________________________________________________________________\n";
 			
				while(myfile>>f_name>>l_name>>gender>>age>>phone_no>>city>>bus_no>>Departure_Time>>Arrival_Time>>Duration>>fare) 
				{ 
 			
				cout<<f_name<<"\t\t"<<l_name<<"\t\t"<<gender<<"\t\t"<<age<<"\t"<<phone_no<<"\t"
			        <<city<<"\t\t"<<bus_no<<"\t"<<Departure_Time<<"\t\t"<<Arrival_Time<<"\t\t"<<Duration<<"\t\t"<<fare<<endl;
				} 				  
			}
//---------------------------------------------------------------------------------------------------------//
//				  						  SEARCH RESERVATION FUNCTION
//---------------------------------------------------------------------------------------------------------//
			void Search_Reservation()
			{
				system("cls");
				
				cout<<"\t\t\t\t\t\tSearch For a Reservation"<<endl<<endl;
				
				ifstream myfile("Bus Ticket Reservation.txt"); 
				
				if(!myfile) 
				{ 
					cout<<"FILE DOES NOT EXIST."<<endl; 
				} 
				
				string Name; 
			
				cout<<endl;
				
				cout<<"\t\t\t\t\tEnter name of passenger you want to search\t"; 
				cin>>Name;
				cout<<endl<<endl;
cout<<"______________________________________________________________________________________________________________________________________________________________________\n";

			cout<<"First Name\tLast Name\tGender\t\tAge\tPhone Number\tCity\t\tBus No.\t\tDeparture\tArrival\t\tDuration\t\tFare"<<endl;
cout<<"______________________________________________________________________________________________________________________________________________________________________\n";

				while(myfile>>f_name>>l_name>>gender>>age>>phone_no>>city>>bus_no>>Departure_Time>>Arrival_Time>>Duration>>fare)
				{ 
				
					if(Name.compare(f_name)==0) 		
					
					cout<<f_name<<"\t\t"<<l_name<<"\t\t"<<gender<<"\t\t"<<age<<"\t"<<phone_no<<"\t"
			        <<city<<"\t\t"<<bus_no<<"\t"<<Departure_Time<<"\t\t"<<Arrival_Time<<"\t\t"<<Duration<<"\t\t"<<fare<<endl;
				
				} 
			}
//---------------------------------------------------------------------------------------------------------//
//				 						   UPDATE RESERVATION FUNCTION
//---------------------------------------------------------------------------------------------------------//
			void Update_Reservation()
			{
				system("cls");
				cout<<"\t\t\t\t\t\t\tUpdate Your Reservation"<<endl<<endl;
				
				char count=0;
				
				ifstream myfile("Bus Ticket Reservation.txt");
				ofstream write("temp.txt");
				
				if(!myfile)
				{
					cout<<"FILE CANNOT OPEN!!!";
				}
				
				else
				{
					string Name;
					string gen;
					//gender:
					cout<<"\t\t\t\t\tPassenger belongs to which portion Female OR Male\t";
					cin>>gen;

					if(gen=="f"||gen=="F"||gen=="Female"||gen=="female")
					{
						cout<<"\n\n\t\t\t\t\tEnter name of the passenger you want to update\t";
						cin>>Name;

						while(myfile>>f_name>>l_name>>gender>>age>>phone_no>>city>>fare)
						{
							if(Name.compare(f_name)==0)
							{
								female();

								write<<f_name<<"\t\t\t"<<l_name<<"\t\t\t"<<gender<<"\t\t"<<age<<"\t\t"<<phone_no<<"\t\t\t"
				  					 <<city<<"\t\t"<<fare<<endl;
							
								count++;
								//goto gender;
							}
						  						
						}
					}
					else if(gen=="m"||gen=="M"||gen=="male"||gen=="Male")  
					{
						cout<<"\n\n\t\t\t\t\tEnter name of the passenger you want to update\t";
						cin>>Name;
						
						while(myfile>>f_name>>l_name>>gender>>age>>phone_no>>city>>fare)
						{
							if(Name.compare(f_name)==0)
							{
								male();
								
								write<<f_name<<"\t\t\t"<<l_name<<"\t\t\t"<<gender<<"\t\t"<<age<<"\t\t"<<phone_no<<"\t\t\t"
				  					 <<city<<"\t\t"<<fare<<endl;
							
								count++;
							}  
						
						}
					}
				
				}
				
				if(count==0)
				{
					cout<<"\t\t\t\t\tERROR!!! RECORD NOT FOUND!"<<endl;
				}
				
				else
				{
					cout<<"\t\t\t\t\tYOUR RECORD IS UPDATED SUCCESSFULLY"<<endl;
				}
		
				myfile.close();
				write.close();
		
				remove("Bus Ticket Reservation.txt");
				rename("temp.txt","Bus Ticket Reservation.txt");
			}
//---------------------------------------------------------------------------------------------------------//
//												LINE FUNCTION
//---------------------------------------------------------------------------------------------------------//
void Line ()
{
	for(int j=0;j<90; j++) 
	cout<<"*";
}
};
//---------------------------------------------------------------------------------------------------------//
//												EXIT FUNCTION
//---------------------------------------------------------------------------------------------------------//
			int Exit()
			{
				cout<<"Thankyou!...\n";
				return 0;
			}
//---------------------------------------------------------------------------------------------------------//
//												LOADING FUNCTION
//---------------------------------------------------------------------------------------------------------//
int loading()
{
	
	cout<<endl<<endl;
	
	system("color f0");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     Please wait while loading\n\n";
	
	char a=177, b=219;
	
	cout<<"\t\t\t\t\t\t";
	
	for (int i=0;i<=15;i++)
	
	cout<<a;
	
	cout<<"\r";
	
	cout<<"\t\t\t\t\t\t";
	
	for (int i=0;i<=15;i++)
	{
		cout<<b;
		for (int j=0;j<=1e8;j++);
	}

	system("cls");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n";
	
	cout<<"\t\t\t\t\t\tBUS TICKET RESERVATION SYSTEM"<<endl<<endl;
	cout<<"\t\t\t\t\t\t       KINZA GHAFFAR"<<endl;
	cout<<"\t\t\t\t\t\t       17-NTU-1040"<<endl;
	cout<<"\t\t\t\t\t\t       BSSE Morning"<<endl;
	cout<<"\t\t\t\t\t\t       4th Semester"<<endl;
	
	cin.get();
	cin.get();
	system("cls");
	
}
//---------------------------------------------------------------------------------------------------------//
//												MAIN FUNCTION
//---------------------------------------------------------------------------------------------------------//
int main()
{

// backgroung and foreground color
	system("color f4");
	loading();

//Date
	cout<<"DATE:   ";
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/";
	cout<<1900+ltm->tm_year;

//Time			
	cout<<"\nTIME:   ";			
	cout<<1+ltm->tm_hour<<":";
	cout<<1+ltm->tm_min<<":";
	cout<<1+ltm->tm_sec<<"\n";
	
	int choose;
    cout<<"****************************************************************************************************\n\n";
	cout<<"                                   WELCOME TO LOGIN PAGE\n\n";
	cout<<"****************************************************************************************************\n\n";

        cout<<"\t\t\t\t\t1.......LOGIN"<<endl;
        cout<<"\t\t\t\t\t2.......REGISTER"<<endl;
        cout<<"\t\t\t\t\t3.......FORGOT PASSWORD OR USERNAME"<<endl;

        cout<<"\n\t\t\tEnter your choice :";
        cin>>choose;    
        cout<<endl;

        switch(choose)
        {
                case 1:
                        Login();
                        break;
                case 2:
                        Register();
                        break;
                case 3:
                        Forgot_Password();
                        break;
                default:
                        system("cls");
                        cout<<"You've entered wrong choice!\n"<<endl; 
                        main();
        }
	
	cout<<"DATE\t"<<__DATE__<<endl;
	cout<<"TIME\t"<<__TIME__<<endl;
	
	cout<<"****************************************************************************************************\n\n";
	cout<<"                                   BUS TICKET RESERVATION SYSTEM\n\n";
	cout<<"****************************************************************************************************\n\n";
	
	
	cout<<"\t\t\t\t**************************************\n";
	cout<<"                                                MENU\n";
	cout<<"\t\t\t\t**************************************\n";	
	
	ticket obj;

	obj.Book_Seat("\tSeat No: S4000","\t\tTicket No: T1");
	obj.Book_Seat("\tSeat No: S4001","\t\tTicket No: T2");
	obj.Book_Seat("\tSeat No: S4002","\t\tTicket No: T3");
	obj.Book_Seat("\tSeat No: S4003","\t\tTicket No: T4");
	obj.Book_Seat("\tSeat No: S4004","\t\tTicket No: T5");
	obj.Book_Seat("\tSeat No: S4005","\t\tTicket No: T6");
	obj.Book_Seat("\tSeat No: S4006","\t\tTicket No: T7");
	obj.Book_Seat("\tSeat No: S4007","\t\tTicket No: T8");
	obj.Book_Seat("\tSeat No: S4008","\t\tTicket No: T9");
	obj.Book_Seat("\tSeat No: S4009","\t\tTicket No: T10");
	obj.Book_Seat("\tSeat No: S40010","\t\tTicket No: T11");
	obj.Book_Seat("\tSeat No: S40011","\t\tTicket No: T12");
	obj.Book_Seat("\tSeat No: S40012","\t\tTicket No: T13");
	obj.Book_Seat("\tSeat No: S40013","\t\tTicket No: T14");
	obj.Book_Seat("\tSeat No: S40014","\t\tTicket No: T15");
	obj.Book_Seat("\tSeat No: S40015","\t\tTicket No: T16");
	obj.Book_Seat("\tSeat No: S40016","\t\tTicket No: T17");
	obj.Book_Seat("\tSeat No: S40017","\t\tTicket No: T18");
	obj.Book_Seat("\tSeat No: S40018","\t\tTicket No: T19");
	obj.Book_Seat("\tSeat No: S40019","\t\tTicket No: T20");
	//obj.Display_Seats();
/*	obj.Cancel_Reservation();
	obj.Cancel_Reservation();
	obj.Display_Seats();
	obj.Display_paste();*/
	
/*	obj.Cancel_Reservation();
	obj.Cancel_Reservation();
	obj.Display_Seats();*/
	
	int a;
	
	while(a!=3)
	{
		cout<<"\n";
	
		cout<<"\t\t\t\t<1>.......Resevation"<<endl;
		cout<<"\t\t\t\t<2>.......Display Reservation"<<endl;
		cout<<"\t\t\t\t<3>.......Search Reservation"<<endl;
		cout<<"\t\t\t\t<4>.......Cancel Reservation"<<endl;
		cout<<"\t\t\t\t<5>.......Update Reservation"<<endl;
		cout<<"\t\t\t\t<6>.......Show Available Seats"<<endl;
		cout<<"\t\t\t\t<7>.......Show Reserved Seats"<<endl;
		cout<<"\t\t\t\t<8>.......Exit"<<endl<<endl<<endl;
		   	
		cout<<"\t\t\t\t\t  Enter Your Choice\t";
    	cin>>a;
    
	switch(a)
	{
    	case 1:
    			obj.Reservation();	
    			break;
    	case 2:
    			obj.Show_Reservation();
				break;
    	case 3:
    			obj.Search_Reservation();
				break;
		case 4:
			    obj.Cancel_Reservation();
			    break;
		case 5:
				obj.Update_Reservation();
				break;
		case 6:
				obj.Display_Seats();
				break;
		case 7:
				obj.Display_Reserved_Seats();
				break;
		case 8:
				cout<<"Thankyou for using this program!"<<endl;
				Exit();
				break;
		default:
				cout<<"\nYou Have Entered Wrong Choice!...\n";
	}
	
	cout<<"\n\n\nDo yuu want to again display the menu:\t(1 for yes/2 for no) ";
	cin>>a;
	
	if(a==1)
			cout<<"sure..\n";
	else 
	{
		cout<<"ok...\n";
		break;
	}
	
}
//	obj.//Save_Information_In_File();
}
//---------------------------------------------------------------------------------------------------------//
//												LOGIN FUNCTION
//---------------------------------------------------------------------------------------------------------//
void Login()
{
    int count;
    string user,pass,u,p;
    
    system("cls");
        
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";   
    
	cout<<"\t\t\t\t\tplease enter the following details"<<endl;
        
	cout<<"\t\t\t\t\t\tUSERNAME\t";
    cin>>user;

    cout<<"\t\t\t\t\t\tPASSWORD\t";
    cin>>pass;
    
    ifstream input("database.txt");
        
    while(input>>u>>p)
    {
        if(u==user && p==pass)
        {
            count=1;
            system("cls");
        }
    }
        input.close();
        
        if(count==1)
        {
        	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n"; 
            cout<<endl<<"\t\t\t\t\t\tLogin Successfull!"<<endl;
            cin.get();
            cin.get();
            system("cls");
        }
        else
        {
        	system("cls");
        	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n"; 
            cout<<"\t\t\t\t\t\t    LOGIN ERROR...!!!"<<endl;
            cout<<"\t\t\t\t\tPlease check your username and password"<<endl;
            cin.get();
            cin.get();
			system("cls");
            main();
        }
}
//---------------------------------------------------------------------------------------------------------//
//												REGISTER USER FUNCTION
//---------------------------------------------------------------------------------------------------------//
void Register()
{
        string reguser,regpass,ru,rp;
        system("cls");
        
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n"; 
        
        cout<<"\t\t\t\t\tEnter the username :";
        cin>>reguser;
        
        cout<<"\n\t\t\t\t\tEnter the password :";
        cin>>regpass;

        ofstream reg("database.txt",ios::app);

        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
		
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n"; 
        
		cout<<"\n\t\t\t\t\tRegistration Sucessfull\n";
		cin.get();
        cin.get();
		system("cls");
        main();
}
//---------------------------------------------------------------------------------------------------------//
//												FORGOT PASSWORD FUNCTION
//---------------------------------------------------------------------------------------------------------//
void Forgot_Password()
{
        int chooose;
        system("cls");
		
		cout<<"\n\n\n\n\n\n\n"; 
		
        cout<<"\t\t\t\t\t1......Search your id by username"<<endl;
        cout<<"\t\t\t\t\t2......Search your id by password"<<endl;
        cout<<"\t\t\t\t\t3......Main menu"<<endl<<endl;
        
        cout<<"\t\t\t\t\tEnter your choice :";
        cin>>chooose;

        switch(chooose)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        
                        cout<<"\n\n\n";
                        
                        cout<<"\t\t\t\t\tEnter your remembered username :";
                        cin>>searchuser;

                        ifstream searchu("database.txt");
                        
						while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\t\t\t\t\tAccount found...!\n";
                                cout<<"\t\t\t\t\tYour password is "<<sp;
                                cin.get();
                                cin.get();
                                
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\n\t\t\t\tSorry, Your userID is not found in our database\n";
                                cout<<"\n\t\t\t\tPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;

                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;

                        ifstream searchp("database.txt");

                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }       
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        Forgot_Password();
        }
		}
