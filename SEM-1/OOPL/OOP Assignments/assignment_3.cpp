#include<iostream>
using namespace std;
class shape
{       
        public:
        double x,y;     
};

class input:public shape
{
        public:
                void get_data()
                {
                        cout<<"\n\nEnter the value of x (it can be length or base)\n";
                        cin>>x;
                        cout<<"Enter the value of y (it can be breadth or height)\n";
                        cin>>y;
                }
};

class output:public shape
{
        public:
                void display_area(input abc)
                {
                        int choice;
                        q:cout<<"\nEnter your choice :\n~press 1. Area of Rectangle\n~press 2. Area of Triangle\n";
                          cin>>choice;
                          switch(choice)
                          {
                                case 1: cout<<"\nArea of rectangle = "<<(abc.x*abc.y)<<endl;
                                        break;
                                case 2: cout<<"\nArea of triangle = "<<(0.5*abc.x*abc.y)<<endl;
                                        break;
                                default: cout<<"Enter correct choice\n";
					                     goto q;
                          }
                }
};
int main()
{
        
        input i;
        output o;
        p:i.get_data();
         o.display_area(i);
         char ch;
         cout<<"Do you want to continue? (~press Y/N)\n";
         cin>>ch;
         if(ch=='y'||ch=='Y')
         goto p;
}

/*
Enter the value of x (it can be length or base)
4
Enter the value of y (it can be breadth or height)
8

Enter your choice :
~press 1. Area of Rectangle
~press 2. Area of Triangle
1

Area of rectangle = 32
Do you want to continue? (~press Y/N)
n

--------------------------------
Process exited after 16.01 seconds with return value 0
Press any key to continue . . .
*/

