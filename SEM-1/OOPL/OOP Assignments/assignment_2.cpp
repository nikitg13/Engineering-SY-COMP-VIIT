#include<iostream>
using namespace std;

class complex
{
	private:
	   	int real,imag;
		
	public:
	 complex()
	 {
		real = 0;
		imag = 0;

	 }
	 void input()
	 {
		cout<<"Enter real part of complex number : ";
		cin>>real;

		cout<<"Enter the imaginary part of complex number : ";
		cin>>imag;
	 }
	

     complex operator + (complex c2)
	 { 
		complex temp;
		temp.real = real + c2.real;

		temp.imag = imag + c2.imag;


		
		return temp;
	 }
	 
	 
	 complex operator * (complex c2)
	 {
		complex temp;

		temp.real = real * c2.real - imag * c2.imag; 


		temp.imag = real * c2.imag + imag * c2.real;
		
		return temp;


	 }
	
	
	 void display()
	 {
		if(imag<0)
		{

			cout<<"\nThe result complex number is "<<real<<imag<<"i\n";

		}
		else
		{
			cout<<"\nThe result complex number is "<<real<<" + "<<imag<<"i\n";
		}
	 }

};



int main()
{   
	complex c1,c2,result;
    int choice;
	
	p:cout<<"\nEnter the firt complex number\n";
	 c1.input();

	 cout<<"\nEnter the second complex number\n";
	 c2.input();

	 cout<<"\nFor Addition ~press 1 \nFor Multiplication ~press 2\n";
	  cin>>choice;

	  switch(choice)
	   {
		case 1:
			result = c1 + c2;
			result.display();
			break;

		case 2:
			result = c1 * c2;

			result.display();
			break;

		default:
			cout<<"\nEnter valid choice\n";
			goto p;




	  }
	 char ch; 
	 cout<<"Do you want to continue (~press Y/N)\n";
	 cin>>ch;

	 if(ch=='y'||ch=='Y')
	 {
		goto p;
	 }
	
    return 0;
	
}


/*
Enter the firt complex number
Enter real part of complex number : 2
Enter the imaginary part of complex number : 3

Enter the second complex number
Enter real part of complex number : 4
Enter the imaginary part of complex number : 2

For Addition ~press 1
For Multiplication ~press 2
1

The result complex number is 6 + 5i
Do you want to continue (~press Y/N)
n

--------------------------------
Process exited after 6.38 seconds with return value 0
Press any key to continue . . .

*/


