#include<iostream>
using namespace std;
template <class T>

void selection_sort(T a[],int n)
{
  int i,j;
  T temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
}

void input()
{
	int n,i,ch;
	int a[n];
	float b[n];
	cout<<"\nEnter type of Array\n~press 1 for INTEGER\n~press 2 for FLOAT\n";
	cin>>ch;
	
	
	
	switch(ch)
	{
		case 1: cout<<"\nEnter no. of elements\n";
		   		cin>>n;
		   		
				
				cout<<"\nEnter array elements : ";
				for(i=0;i<n;i++)
				{
  					cin>>a[i];
				}
				selection_sort(a,n);
				cout<<"\nAfter sort:";
				for(i=0;i<n;i++)
				{
  					cout<<a[i]<<" ";
				}
				break;
		
		case 2: cout<<"\nEnter no. of elements\n";
		   		cin>>n;
		   		
				
				cout<<"\nEnter array elements : ";
				for(i=0;i<n;i++)
				{
  					cin>>b[i];
				}
				selection_sort(b,n);
				cout<<"\nAfter sort:";
				for(i=0;i<n;i++)
				{
  					cout<<b[i]<<" ";
				}	
				break;	
				
		default: cout<<"\nERROR! enter correct choice.";
	  			break;			
	}
		char ch1;
		cout<<"\ndo you want to continue(press Y/N)\n";
		cin>>ch1;
		if(ch1=='y'||ch1=='Y')
		input();
		
}

int main()
{
    input();
 	return 0;
}

/*
Enter type of Array
~press 1 for INTEGER
~press 2 for FLOAT
1

Enter no. of elements
4

Enter array elements : 12
16
7
23

After sort:7 12 16 23
do you want to continue(press Y/N)
n

--------------------------------
Process exited after 28.26 seconds with return value 0
Press any key to continue . . .
*/
