#include <fstream>
#include <string.h>

#ifndef function_H
#define function_H
using namespace std;
// fay 
void delete_guest() //Here we have used sequential access files with a function delete,... to display the final guest information
{

    fstream gues;
    fstream temp;

    gues.open("guest.txt",ios::in);
    temp.open("temp.txt",ios::out);
    
    char name [25];
    char email[25];
    char phone [25];
    char people [25];
    char a[25];

    cin.ignore();
    cout<<"  \n  What do you want to record it : ";
    cin.getline(a,25);

    while(!gues.eof())
    {
        gues.getline(name,25,'|');
        gues.getline(phone,25,'|');
        gues.getline(email,25,'|');
        gues.getline(people,25);
        
        if(strcmp(phone,a)==0)
        {
            continue;
			}
        else if (strcmp(name,a)==0){
            continue;}
            else if (strcmp(email,a)==0)
        {
            continue;}
            else if (strcmp(people,a)==0)
        {
            continue;}
        
        else
        {
            temp<< name<<'|'<<phone<<'|'<<email<<'|'<<people<<'\n';
        }
    }
    temp.close();
    gues.close();

    gues.open("guest.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(name,25,'|');
        temp.getline(phone,25,'|');
        temp.getline(email,25,'|');
        temp.getline(people,25);
        
        gues<< name<<'|'<<phone<<'|'<<email<<people<<'\n';

    }
    temp.close();
    gues.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";
}

void update_guest()
{
    fstream gues;
    fstream temp;

    gues.open("guest.txt",ios::in);
    temp.open("temp.txt",ios::out);
    
    char name [25];
    char email[25];
    char phone [25];
    char people [25];
    char a [25];

    cin.ignore();
        cout<<" \n  What do you want to search update record it : ";
    cin.getline(a,25);
    
    while(!gues.eof())
    {
        gues.getline(name,25,'|');
        gues.getline(phone,25,'|');
        gues.getline(email,25,'|');
        gues.getline(people,25);
        
        if(strcmp(phone,a)==0)
        {
            cout<<" \n\tenter new value of record  \n ";
            
            cout<<" \n name : ";
            cin.getline(name,25);
            cout<<" \n phone : ";
            cin.getline(phone,25);
            cout<<" \n email : ";
            cin.getline(email,25);
            cout<<" \n people : ";
            cin.getline(people,25);
            temp<< name<<'|'<<phone<<'|'<<email<<people<<'\n';
        }
		if(strcmp(name,a)==0)
        {
            cout<<" \n\tenter new value of record  \n ";
            
            cout<<" \n name : ";
            cin.getline(name,25);
            cout<<" \n phone : ";
            cin.getline(phone,25);
            cout<<" \n email : ";
            cin.getline(email,25);
            cout<<" \n people : ";
            cin.getline(people,25);
            temp<< name<<'|'<<phone<<'|'<<email<<people<<'\n';
        }
		 if(strcmp(email,a)==0)
        {
            cout<<" \n\tenter new value of record  \n ";
            
            cout<<" \n name : ";
            cin.getline(name,25);
            cout<<" \n phone : ";
            cin.getline(phone,25);
            cout<<" \n email : ";
            cin.getline(email,25);
            cout<<" \n people : ";
            cin.getline(people,25);
            temp<< name<<'|'<<phone<<'|'<<email<<people<<'\n';
        }
        if(strcmp(people,a)==0)
        {
            cout<<" \n\tenter new value of record  \n ";
            
            cout<<" \n name : ";
            cin.getline(name,25);
            cout<<" \n phone : ";
            cin.getline(phone,25);
            cout<<" \n email : ";
            cin.getline(email,25);
            cout<<" \n people : ";
            cin.getline(people,25);
            temp<< name<<'|'<<phone<<'|'<<email<<people<<'\n';
        }
    else
        {
            temp<< name<<'|'<<phone<<'|'<<email<<people<<'\n';
        }

    }
    temp.close();
    gues.close();

    gues.open("guest.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(name,25,'|');
        temp.getline(phone,25,'|');
        temp.getline(email,25,'|');
        temp.getline(people,25);
        gues<<name<<'|'<<phone<<'|'<<email<<people<<'\n';

    }
    temp.close();
    gues.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";
}
void display_all()
{
    char name [25];
    char email[25];
    char phone [25];
    char people [25];

    fstream gues;
    gues.open("guest.txt",ios::in);

    cout<< " \n\t name \t phone \t  email\n  people\n";
    while(!gues.eof())
    {
        gues.getline(name,25,'|');
        gues.getline(phone,25,'|');
        gues.getline(email,25,'|');
        gues.getline(people,25);
      
	   cout<< "\n \t "<< name << "\t"<<phone<<"\t"<<email<<people<<endl;
    }
}
void search_guest(   )
{

    fstream gues;
    gues.open("guest.txt",ios::in);
    
    char name [25];
    char email[25];
    char phone [25];
    char people [25];
    char a[25];
    
    cout<<" \n  What do you want to search for it : ";
    cin.ignore();
    cin.getline(a,25);
    int x=0;
    cout<< " \n\t name \t phone \t  email\n  people\n";
    while(!gues.eof())
    {
        gues.getline(name,25,'|');
        gues.getline(phone,25,'|');
        gues.getline(email,25,'|');
        gues.getline(people,25);

        if(strcmp(phone, a)==0)
        {
            cout<< "\n \t "<< name << "\t"<<phone<<"\t"<<email<<people<<endl;
            x=1;
            break;
        }
         else if (strcmp(name, a)==0){
		 
		 cout<< "\n \t "<< name << "\t"<<phone<<"\t"<<email<<people<<endl;
            x=2;
            break;
            }
            else if (strcmp(email, a)==0){
			
		 cout<< "\n \t "<< name << "\t"<<phone<<"\t"<<email<<people<<endl;
            x=3;
            break;
            }
            else if (strcmp(people, a)==0){
			
		 cout<< "\n \t "<< name << "\t"<<phone<<"\t"<<email<<people<<endl;
            x=4;
            break;
			}
        }
    
    if (x==0)
    {
        cout<<" \n not found !\n";
    }
    gues.close();
};
#endif
