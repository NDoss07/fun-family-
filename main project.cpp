#include <iostream>
#include <string>
#include <fstream>
#include <string.h>
#include "function_hed.h"
//#include "garden.cpp"

using namespace std;

//haw
struct pack{
  string ty;
  int  price; 
};
//batool
int gardens(int total,int age,int g);

//zah
int burger_rest(string burgers_c[]);
int pizza_rest(string pizza_c[]);
int cooffee(string coffee_c[],int price_c[]);
int Drinks_rest(string Drinks_c[],int price_d[]);

//main
int main()
{	pack fgame;
  pack sgame;
  pack thgame;
string name, number, Email, Phone,game, pack;
string burgers_c[3]={"burger" ,"chicken nugget", "potato" }, pizza_c[3]={"Cheese Pizza","Meat Pizza","Chicken pizza"};
string coffee_c[4]={"Tea","Cookies","Black coffee","Hot chocolate"}, Drinks_c[5]={"Orange juice","Strawberry juice","Manjo juice","water","Soft drink"};
double money ;
char choi1,choi2,choi3,again,b;
int age, tickets, persons, price, total_price,pricepac,gar,age2,x,total2,cart_num,box,*p, total_burger=0, total_coff=0, total_drinks=0, total_pizza=0,total_rest=0;
int price_c[4]={10,10,5,6},price_d[5]={10,10,10,2,3};
const double adult_ticket=100;
const double child_ticket=50;
persons = 1, total_price = 0;

cout<<"``~~***  Welcome  TO   AMUSEMENT PARK  --- FUN FAMILY --- ***~~``\n";

cout<<" \n - Please write your full name: \n";
getline(cin,name); 
cout<<" \n - Please write your Email: \n";
getline(cin,Email);
cout<<" \n - Please write your Phone number: \n";
getline(cin,Phone);
cout<<" \n - Please write How many people: \n";
cin>> number;

cout<<"\nYou can put your stuff in a box, do you want to? Y/N : ";
cin>>b;

//zah
if(b=='Y' || b=='y'){
	p=new int;
	cout<<"Your box ID id is: "<<&p<<endl;
}
else
cout<<"Ok, thank u"<<endl;


  
//hawra
cout<<"\n Do you want a ticket package or individual tickets?  "<<endl<<"enter (P): for ticket package. "<<"\nenter (i): for individual tickets"<<endl;
cin>>choi1;

if (choi1=='P' || choi1=='p'){
  
	
  fgame.ty ="family\t|";
  sgame.ty ="friends\t|";
  thgame.ty="children\t";
  fgame.price=550;
  sgame.price=650;
  thgame.price=250;
  string search, choose;
  char an;  
  
    
  cout<<fgame.ty<<sgame.ty<<thgame.ty<<"\n"; //what packages we have for games
  cout<<"-------------------------------------\n";
  cout<<fgame.price<<"\t|"<<sgame.price<<"\t\t|"<<thgame.price;
  do{
  
  cout<<"\nenter what about you are looking\n"; //details of the packages
  cin>> search;
  if(search=="family")
  {
  cout<<"2 adults and 3 children \n the services:play in all games \nthe price: 550 SR\n";
  }  
  else if(search=="friend"||"friends")
  {cout<<"5 adults \n the services:play in all games \nthe price: 650 SR\n";
  }
  else if(search=="child"||"children")
      {cout<<"3 children \nthe services:play in all games and meal for every child \nthe price: 250 SR\n";
      }
  else
  cout<<"\ni can find what you are looking";
  cout<<"\ndo you want search about another things? enter y\n";
  cin>>an;
  }
  while(an=='y');
  
  do{
  
  cout<<"\nenter what about you are choosing\n"; //choosing the packages for games
  cin>>choose;
  
  if(choose=="family")
  {pricepac=550;
  cout<<"you are choosing the family packages \nthe price: 550 SR\n";
  }  
  else if(choose=="friend"||"friends")
  {
  pricepac=650;
  cout<<"you are choosing the friends packages \nthe price: 650 SR\n";
  }
  else if(choose=="child"||"children")
      {pricepac=250;
	  cout<<"you are choosing the children packages \nthe price: 250 SR\n";
      }
  else
  cout<<"\ni can find what you are choosing";

  cout<<"\ndo you want choose another things? enter y\n";
  cin>>an;
  }  
  while(an=='y');
}
      
      //naimah
    else if(choi1=='I' || choi1=='i'){

    
    //This program asks the user how many ticket he/she wants to buy
     cout << "How many tickets do you want? "; 
     cin >> tickets;
     cout<<"\nAdult tickets price is: 100 SR";
     cout<<"\nChild tickets price is: 50 SR"<<endl;
     cout << "Number of tickets: " << tickets << endl;
     while (tickets >= persons) {
    //then asks them about their age for each ticket
        cout << "Please enter your age : " << persons << "/ ";
        cin >> age;
        if (age >= 18){
                price = 100;}
            else if (age<17 && age>8){
                price = 50;}
            else{
                price = 0;}
    //then should be able to calculate the total price of the ticket
        total_price += price;
        persons++;
		}
		cout << "Total price is: " << total_price<<endl;}
		
		cout<<"\n*******************************************************************************************\n";
//batool
cout<<"\nWe have a garden packeges: "<<endl;
  cout<<"*** Garden packages *** \n";
  cout<<"1- butterfly garden    | price: adult=25 // kids=15   \n2- the water park      | price: adult=30 // kids=20    \n3- bird garden         | price: adult=25 // kids=15  \n4- wild animals garden | price: adult=25 // kids=15 \n";
 cout<<"\nDo you want to walk around one of these gardens? Y/N: "<<endl;
 cin>>choi2;
 if(choi2=='Y' || choi2=='y'){
  cout<<"choose the garden ID you want: \n";
  cin>>gar;
  while(gar<1||gar>4){
    cout<<"invalid garden ID. "<<endl;
    cout<<"choose the garden ID you want: "<<endl;
    cin>>gar;
  }
  
  x=gardens(total2,age2,gar);
  cout<<"the total bill is :  "<<x<<endl;}
		//zah
		cout<<"***************************************************************************"<<endl;
		//This program gives the user options for existing restaurants 
		cout<<"\nDo you want to eat or drink something? Y/N : ";
        cin>>choi3;
        if(choi3=='Y' || choi3=='y'){
        	do{
              cout<<"\nWe have many food carts, choose the one you want : "<<endl<<"1- Burgers cart. \n2- Pizza cart. \n3- Drinks cart. \n4- Coffee shop cart. "<<endl;
              cin>>cart_num;
              switch(cart_num){
                 case 1:{
                  total_burger=burger_rest(burgers_c);//this function print the menu for burger rest and calculate the total bill
                  cout<<"\nYour total bill= "<<total_burger<<" SR";
                    break;}
                 case 2:{
                  total_pizza=pizza_rest(pizza_c);//this function print the menu for pizza rest and calculate the total bill
                  cout<<"\nYour total bill= "<<total_pizza<<" SR";
                    break;}
				 case 3:{
	              total_drinks=Drinks_rest(Drinks_c,price_d);//this function print the menu for drinks and calculate the total bill
	              cout<<"\nYour total bill= "<<total_drinks<<" SR";
                	break;}
                 case 4:{
                  total_coff=cooffee(coffee_c,price_c);//this function print the menu for coffee and calculate the total bill
	              cout<<"\nYour total bill= "<<total_coff<<" SR";
                	break;}}
                 cout<<"\nDo you want to buy somthing from another cart? Y/N : ";
                 cin>>again; } while (again=='Y' || again=='y');}
			  else
                 cout<<"\n Ok, Thank you!";
                 total_rest=total_rest+total_burger+total_pizza+total_drinks+total_coff;
                 
                 //Fay
                 cout<<"\n---------------------------------------------------------------------"<<endl;
                 cout<<"\n**Thank you** for visiting our website and we hope you will be happy to visit: "<<name<<endl;
                 cout<<"your final bill | \n";
                 cout<<"your total bill for packeges: "<<pricepac<<" SR"<<endl;
                 cout << "your Total price for tickets is: " << total_price<<" SR"<<endl;
                 cout<<"your total bill for gardins is :  "<<x<<" SR"<<endl;
                 cout<<"Your total bill for all resturants: "<<total_rest<<" SR"<<"\n";
                 
				 
int c;
char something;

	cout<<"Do you want to modify something like (delete ,update ,search,display all)? (Y/N)"<<endl; //to display the final guest information
	cin>>something;
     
	if(something=='y'||something=='Y')
	{
   bool flag=true;
    while (flag)
    {
        cout << "  search : 1 \n display all : 2 \n update : 3 \n delete :  4 \n  write your choose : ";
        cin>>c;
        switch (c)
        {
        case 1:
            search_guest();
            break;
        case 2:
            display_all();
            break;
        case 3 :
            update_guest();

            break;
        case 4 :
            delete_guest();
            break;
        default :
            cout << " \n choose right number \n";
        }
        
        cout << " if you continue to use program press ' y ' \n ";
        char f;
        cin>>f;
        if(f!='y')
        {
            flag=false;
        }
}
    }
                       
return 0;
}

//batool
 int gardens(int total,int age,int g){
  total=0;
  char car;
  int rent,tickets2,age2,price;
  cout << "How many tickets do you want? "; 
    cin >> tickets2;
  for(int i=1;i<=tickets2 ;i++) {
  cout<<"Enter age of the persone "<<i<<endl;
    cin>>age2;
  if(g==1&&age2>15 ||g==3&&age2>15 || g==4&&age2>15)
   price=25;
  else if(g==1&&age2<=15 ||g==3&&age2<=15 || g==4&&age2<=15)
   price=15;
  else if(g==2&&age2>15)
   price=30;
  else if(g==2&&age2<=15)
     price=20;
     
    total+=price;}
    
    cout<<"Do you want to rent a car to move around for two hours (price=50)?  (y/n)"<<endl;
     cin>>car;
    if(car=='y'||car=='Y')
     rent=50;
    else
     rent=0;

  return (total+rent);
}
   
//zah1
int burger_rest(string burgers_c[]){
int x, total=0;
char c;
do{
cout<<"\nThe menu is: "<<endl;
for(int i=0;i<3; i++)
cout<<i+1<<"- "<<burgers_c[i]<<endl;
cout<<"\nChoose the number you want : ";
cin>>x;
if(x==1){
total+=15;
}
else if(x==2){
total+=10;
}
else if(x==3){
total+=5;
}
else 
cout<<"\nPlease enter a valid number.";
cout<<"\nDo you want anything alse? Y/N: ";
cin>>c;
}while (c=='y' || c=='Y');
return total;}

//zah2
int pizza_rest(string pizza_c[]){
int x, total=0;
char c;
do{
cout<<"\nThe menu is: "<<endl;
for(int i=0;i<3; i++)
cout<<i+1<<"- "<<pizza_c[i]<<endl;
cout<<"\nChoose the number you want : ";
cin>>x;
if(x==1){
total+=20;
}
else if(x==2){
total+=30;
}
else if(x==3){
total+=25;
}
else 
cout<<"\nPlease enter a valid number.";
cout<<"\nDo you want anything alse? Y/N: ";
cin>>c;
}while (c=='y' || c=='Y');
return total;}

//zah3
int cooffee(string coffee_c[],int price_c[]){
	int x,temp,total_b=0;
	char c;
	for(int i=0;i<3; i++){
	for(int j=0; j<3;++j)
	if(price_c[j] > price_c[j+1]){
		temp = price_c[j];
		price_c[j] = price_c[j+1];
		price_c[j+1] = temp;
	}}
	
do{
	int j=0,i=0;
	cout<<"\nThe menu is: "<<endl;
	for(i=j=0;i<4,j<4; i++,j++)
	cout<<i+1<<"- "<<coffee_c[i]<<"  | "<<price_c[j]<<" SR"<<endl;
	cout<<"\nChoose the number you want : ";
    cin>>x;
if(x==1){
total_b+=5;
}
else if(x==2){
total_b+=6;
}
else if(x==3){
total_b+=10;
}
else if(x==4){
total_b+=10;
}
else 
cout<<"\nPlease enter a valid number.";
cout<<"\nDo you want anything alse? Y/N: ";
cin>>c;
}while (c=='y' || c=='Y');
return total_b;}

//zah4
int Drinks_rest(string Drinks_c[],int price_d[])
{
	int x,total_b=0;
	char c;
	
	do{
	int j=0,i=0;
cout<<"\nThe menu is: "<<endl;
for(i=j=0;i<4,j<5; i++,j++)
	cout<<i+1<<"- "<<Drinks_c[i]<<"  | "<<price_d[j]<<" SR"<<endl;
	cout<<"\nChoose the number you want : ";
cin>>x;
if(x==1){
total_b+=10;
}
else if(x==2){
total_b+=10;
}
else if(x==3){
total_b+=10;
}
else if(x==4){
total_b+=2;
}
else if(x==5){
total_b+=3;
}
else 
cout<<"\nPlease enter a valid number.";
cout<<"\nDo you want anything alse? Y/N: ";
cin>>c;
}while (c=='y' || c=='Y');
return total_b;
}
