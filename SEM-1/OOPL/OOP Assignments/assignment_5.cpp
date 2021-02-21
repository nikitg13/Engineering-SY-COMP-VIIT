#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    p:int i=0;
    char ch;
    string a;
    
    try
    {
    	cout<<"Enter city name (Enter name in capitals) : ";
    	cin>>a;
    	
    	if(a=="PUNE"||a=="MUMBAI"||a=="BANGALORE"||a=="CHENNAI"||a=="pune"||a=="angalore"||a=="chennai"||a=="mumbai")
    	 {
    	 	cout<<"\nDo you have 4-wheeler?\n~press Y if yes\n~press N if no\n";
    	 	cin>>ch;
    	 	if(ch=='n'||ch=='N')
    	 	{
			  i=1;
    	 	  throw i;
    	    } 
    	    cout<<"\nCONGRATULATIONS! There is parking available for you.";
		 }
		 
		 else
		 {  
		 	throw i;
		 }
	}
	
	
	catch(int x)
	{
		if(x==0)
		cout<<"\nERROR! Parking is not available in this city. Enter correct city.";
		
		if(x==1)
		cout<<"\n SORRY.currently parking is available only for 4-wheelers.";
	    
	    char ch1;
	    cout<<"\nDo you want to continue? (~press Y/N) : ";
    	cin>>ch1;
    	cout<<"\n\n";
    	if(ch1=='y'||ch1=='Y')
		goto p;	
	    
	}
    
    return 0;
	
}

/*
Enter city name (Enter name in capitals) : PUNE

Do you have 4-wheeler?
~press Y if yes
~press N if no
Y

CONGRATULATIONS! There is parking available for you.
--------------------------------
Process exited after 15.37 seconds with return value 0
Press any key to continue . . .



Enter city name (Enter name in capitals) : MUMBAI

Do you have 4-wheeler?
~press Y if yes
~press N if no
N

 SORRY.currently parking is available only for 4-wheelers.
Do you want to continue? (~press Y/N) : N



--------------------------------
Process exited after 19.55 seconds with return value 0
Press any key to continue . . .
*/
