#include<iostream>
#include<fstream>
#include<string>
#define length 25
#include<stdio.h>
using namespace std;
int main()
{
	
	
	int roll,i=0,a,roll1[10];
	char name[length];
	string name1[20],sname[20];
	fstream file_("assign5.txt",ios::app);
	fstream file("assign5.txt");

	if(file_.is_open())
	
	{  
	    cout<<"File is opened:\n";
		cout<<"Enter Name and Sur name:";
		gets(name);
		file_<<" "<<name;
		cout<<"Enter Roll NO:";
		cin>>roll;
		file_<<" "<<roll<<"\n";
	}
	file_.close();
	cout<<"\nFile is closed:";
	cout<<"\nPress 1 to read the data from file:";
	cin>>a;
	
		
		if(file.is_open())
		{   
			i=0;
			while(file>>name1[i]>>sname[i]>>roll1[i])
			{	
			cout<<endl<<name1[i]<<"  "<<sname[i]<<" "<<roll1[i]<<endl;
			i++;
			}
		}

	
	//cin.get();						
	return 0;
}
	
	
	

/*
File is opened:
Enter Name and Sur name:Nikit Gokhe
Enter Roll NO:24

File is closed:
Press 1 to read the data from file:1

nikit  gokhe 24

Nikit  Gokhe 24

--------------------------------
Process exited after 13.8 seconds with return value 0
Press any key to continue . . .
*/
