#include <iostream>

using namespace std;

int main(){
	int quant;
	int choice;
	//Hold quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
	//Hold food items sold
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
	//Total price of items.
	int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

	cout<<"\n\t Quantity of items we have in our hotel";
	cout<<"\n Rooms avaible: ";
	cin>>Qrooms;
	cout<<"\n Quantity of pasta :";
	cin>>Qpasta;
	cout<<"\n Quantity of burger :";
	cin>>Qburger;
	cout<<"\n Quantity of noodles :";
	cin>>Qnoodles;
	cout<<"\n Quantity of shakes :";
	cin>>Qshake;
	cout<<"\n Quantity of chicken :";
	cin>>Qchicken;
	
	m:
	cout<<"\n\t\t\t Please select from the menu options ";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burgers";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shakes";
	cout<<"\n6) Chickens";
	cout<<"\n7) Information regarding sales and collection ";
	cout<<"\n8) Exit";
	
	cout<<"\n\n Please Enter your choice. ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\n\n What number of rooms you need?: ";
			cin>>quant;
			if(Qrooms-Srooms >=quant){
				Srooms=Srooms+quant;
				Total_rooms=Total_rooms+quant*1200;
				cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!";			
				}
				else{
					cout<<"\n\tOnly "<<Qrooms-Srooms<<" rooms remaining in hotel ";
					break;
				}
		case 2:
			cout<<"\n\n What number of noodles you want to order?: ";
			cin>>quant;
			if(Qpasta-Spasta >=quant){
				Spasta=Spasta+quant;
				Total_pasta=Total_pasta+quant*80;
				cout<<"\n\n\t\t"<<quant<<" : is the number of ordered noodles!";			
				}
				else{
					cout<<"\n\tOnly "<<Qpasta-Spasta<<" noodles avaible to order.";
					break;
				}
		case 3:
			cout<<"\n\n What number of burgers you want to order?: ";
			cin>>quant;
			if(Qburger-Sburger >=quant){
				Sburger=Sburger+quant;
				Total_burger=Total_burger+quant*50;
				cout<<"\n\n\t\t"<<quant<<": burgers you ordered.";			
				}
				else{
					cout<<"\n\tOnly "<<Qburger-Sburger<<" burgers possible to order.";
					break;
				}
		case 4:
			cout<<"\n\n What number of noodles you want to order?: ";
			cin>>quant;
			if(Qnoodles-Snoodles >=quant){
				Snoodles=Snoodles+quant;
				Total_noodles=Total_noodles+quant*40;
				cout<<"\n\n\t\t"<<quant<<": ordered noodles.";			
				}
				else{
					cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" noodles possible to oder.";
					break;
				}
		case 5:
			cout<<"\n\n What number of shakes do you need?: ";
			cin>>quant;
			if(Qshake-Sshake >=quant){
				Sshake=Sshake+quant;
				Total_shake=Total_shake+quant*10;
				cout<<"\n\n\t\tYou ordered: "<<quant<<" shakes.";			
				}
				else{
					cout<<"\n\tOnly "<<Qshake-Sshake<<" shakes can you order. ";
					break;
				}
		case 6:
			cout<<"\n\n What number of chickens you need?: ";
			cin>>quant;
			if(Qchicken-Schicken >=quant){
				Schicken=Schicken+quant;
				Total_chicken=Total_chicken+quant*35;
				cout<<"\n\n\t\tYou ordered: "<<quant<<" chickens. ";			
				}
				else{
					cout<<"\n\tOnly "<<Qchicken-Schicken<<" chickens avaible. ";
					break;
				}
				break;
		case 7: 
		
		cout<<"\n\t\tDetails of sales and collection ";
		cout<<"\n\n Number of rooms we had: "<<Qrooms;
		cout<<"\n\n Number of rooms we gave for rent: " <<Srooms;
		cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
		cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;
		
		cout<<"\n\n Number of pastas we had: "<<Qpasta;
		cout<<"\n\n Number of pastas we sold: " <<Spasta;
		cout<<"\n\n Remaining pastas: "<<Qpasta-Spasta;
		cout<<"\n\n Total pastAs collection for the day: "<<Total_pasta;
		
		cout<<"\n\n Number of burgers we had: "<<Qburger;
		cout<<"\n\n Number of burgers we sold: " <<Sburger;
		cout<<"\n\n Remaining burgers: "<<Qburger-Sburger;
		cout<<"\n\n Total burgers collection for the day: "<<Total_burger;
		
		cout<<"\n\n Number of noodles we had: "<<Qnoodles;
		cout<<"\n\n Number of noodles we sold: " <<Snoodles;
		cout<<"\n\n Remaining noodles: "<<Qnoodles-Snoodles;
		cout<<"\n\n Total noodles collection for the day: "<<Total_noodles;
		
		cout<<"\n\n Number of shakes we had: "<<Qshake;
		cout<<"\n\n Number of shakes we sold: " <<Sshake;
		cout<<"\n\n Remaining shakes: "<<Qshake-Sshake;
		cout<<"\n\n Total shakes collection for the day: "<<Total_shake;
		
		cout<<"\n\n Number of chickens we had: "<<Qchicken;
		cout<<"\n\n Number of chickens we sold: " <<Schicken;
		cout<<"\n\n Remaining rooms: "<<Qchicken-Schicken;
		cout<<"\n\n Total chickens collection for the day: "<<Total_chicken;
		
		
		cout<<"\n\n\n Total Collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
		case 8: 
			exit(0);
			
			default: 
				cout<<"Please select the number of menu. ";
	}
	goto m;
	
}
