#include<iostream>
using namespace std;
 
 int main(){
 	int quant;
 	int choice;
 	
 	//quantity of items
 	int Qrooms=0, Qpasta=0, Qshake=0, Qburger=0, Qicecream=0;
 	//no of items sold
 	int Srooms=0, Spasta=0, Sshake=0, Sburger=0, Sicecream=0;
 	//toal price of item
	int Trooms=0, Tpasta=0, Tshake=0, Tburger=0, Ticecream=0; 
	
	cout<<"\n\tEnter the quantity of items we have:";
	cout<<"\nRooms Available:-";
	cin>>Qrooms;
	cout<<"\nQuantity of pasta:-";
	cin>>Qpasta;
	cout<<"\nQuantity of shake:-";
	cin>>Qshake;
	cout<<"\nQuantity of burger:-";
	cin>>Qburger;
	cout<<"\nQuantity of icecream:-";
	cin>>Qicecream;
	
	
	m:
	cout<<"\n\t\t\t\tPlease Select from the menu Given:-";
	cout<<"\n\n1) Rooms";
	cout<<"\n\n2) Pasta";
	cout<<"\n\n3) Shake";
	cout<<"\n\n4) Burger";
	cout<<"\n\n5) Icecream";
	cout<<"\n\n6) Details regarding collection and sales";
	cout<<"\n\n7) Exit";
	
	cout<<"\n\nPlease enter your choice:-";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\nEnter the no of rooms you want:-";
			cin>>quant;
			if(Qrooms-Srooms >=quant){
				Srooms=Srooms + quant;
				Trooms=Trooms + quant*1000;
				cout<<"\n\n\t\t"<< quant<<"\tRooms have been alloted to you!";
			}
			else
				cout<<"\n\n\t\t"<< Qrooms-Srooms <<"\tRemaining in Hotel";
				break;
			
		case 2:
			cout<<"\n\nEnter the amount of pasta:-";
			cin>>quant;
			if(Qpasta-Spasta >=quant){
				Spasta=Spasta + quant;
				Tpasta=Tpasta + quant*150;
				cout<<"\n\n\t\t"<< quant<<"\tPastas have been added to your order!";
			}
			else
				cout<<"\n\n\t\t"<< Qpasta-Spasta <<"\tpasta only left in Hotel";
				break;
			
		case 3:
			cout<<"\n\nEnter the amount of shake:-";
			cin>>quant;
			if(Qshake-Sshake >=quant){
				Sshake=Sshake + quant;
				Tshake=Tshake + quant*100;
				cout<<"\n\n\t\t"<< quant<<"\tshakes have been added to your order!";
			}
			else
				cout<<"\n\n\t\t"<< Qpasta-Spasta <<"\tshakes only left in Hotel";
				break;
			
		case 4:
			cout<<"\n\nEnter the amount of burger:-";
			cin>>quant;
			if(Qburger-Sburger >=quant){
				Sburger=Sburger + quant;
				Tburger=Tburger + quant*150;
				cout<<"\n\n\t\t"<< quant<<"\tburgers have been added to your order!";
			}
			else
				cout<<"\n\n\t\t"<< Qburger-Sburger <<"\tburgers only left in Hotel";
				break;
			
		case 5:
			cout<<"\n\nEnter the amount of icecream:-";
			cin>>quant;
			if(Qicecream-Sicecream >=quant){
				Sicecream=Sicecream + quant;
				Ticecream=Ticecream + quant*150;
				cout<<"\n\n\t\t"<< quant<<"\ticecream have been added to your order!";
			}
			else
				cout<<"\n\n\t\t"<< Qburger-Sburger <<"\ticecream only left in Hotel";
				break;
			
		case 6:
		    cout<<"\n\t\tDetails of sales and collection:-";
			cout<<"\n\n No of rooms we have:-"<<Qrooms;
			cout<<"\n\n No rooms rented:-"<<Srooms;
			cout<<"\n\n No of rooms left:-"<<Qrooms-Srooms;
			cout<<"\n\n Total Collection from renting rooms:-"<<Trooms;
			
			cout<<"\n\n No of pasta we have:-"<<Qpasta;
			cout<<"\n\n No pasta sold:-"<<Spasta;
			cout<<"\n\n No of pasta left:-"<<Qpasta-Spasta;
			cout<<"\n\n Total Collection from selling pasta:-"<<Tpasta;
			
			cout<<"\n\n No of shake we have:-"<<Qshake;
			cout<<"\n\n No shake sold:-"<<Sshake;
			cout<<"\n\n No of shake left:-"<<Qshake-Sshake;
			cout<<"\n\n Total Collection from selling shake:-"<<Tshake;
			
			cout<<"\n\n No of burger we have:-"<<Qburger;
			cout<<"\n\n No burger sold:-"<<Sburger;
			cout<<"\n\n No of burger left:-"<<Qburger-Sburger;
			cout<<"\n\n Total Collection from selling burger:-"<<Tburger;
			
			cout<<"\n\n No of icecream we have:-"<<Qicecream;
			cout<<"\n\n No icecream sold:-"<<Sicecream;
			cout<<"\n\n No of icecream left:-"<<Qicecream-Sicecream;
			cout<<"\n\n Total Collection from selling icecream:-"<<Ticecream;
			
			cout<<"\n\n Total Collection:-"<<Trooms+Tpasta+Tshake+Tburger+Ticecream;
			
		case 7:
		    exit(0);	
		
		default :
		    cout<<"\nPlease select from the choices given";	
							
	}
	goto m;
 }
