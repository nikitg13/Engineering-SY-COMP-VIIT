#include<iostream>

using namespace std;
int lsearch(int a[100],int a1)
{
	int i,a2,flag=0;
	cout<<endl<<"Enter number you want to search :";
	cin>>a2;
	for(i=0;i<a1;i++)
	{
		if(a[i]==a2)
		{
		 flag=1;
		 cout<<"Number is found and index is : "<<i<<endl;
		}
	}
	if(flag == 0)
	{
		cout<<"Number is not found\n";
	}

	
}
int isort(int a[100],int a1)
{
	cout<<"\n***********INSERTION SORT*************";
	int i,j,k,l;
	for(i=0;i<a1;i++)
	{
		k=a[i];
		j=i-1;
		while(j>=0 && a[j]<k)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
		cout<<endl;
		for(l=0;l<a1;l++)
		{
			cout<<a[l]<<" ";
		}
	}
	cout<<endl<<"\nDescending order is : ";
	for(i=0;i<a1;i++)
		{
			cout<<a[i]<<" ";
  		}
}

int ssort(int a[100],int a1)
{ 
  cout<<"\n***********SELECTION SORT*************";
  int i,j,k,temp;
  for(i=0;i<a1-1;i++)
  {
  	for(j=i+1;j<a1;j++)
  	{
  		if(a[i]>a[j])
  		{
  		 	temp=a[i];
  		 	a[i]=a[j];
  		 	a[j]=temp;
  		 	cout<<endl;
  		 	for(k=0;k<a1;k++)
			{
				cout<<a[k]<<" ";
  			}
  		}	
	}
  }
  cout<<endl<<"\nAscending order is: ";
	for(i=0;i<a1;i++)
		{
			cout<<a[i]<<" ";
  		}
	
}

int main()
{

	int a[100],a1,i,a3;
	cout<<"How many number you have : ";
	cin>>a1;
	cout<<"Enter element\n";
	for(i=0;i<a1;i++)
	{
		cin>>a[i];
	}
	cout<<"\nYour list is : ";
	for(i=0;i<a1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	ssort(a,a1);
	cout<<"\n";
	isort(a,a1);
	lsearch(a,a1);
	return 0;

}

/*
How many number you have : 5
Enter element
12
4
33
5
17

Your list is : 12 4 33 5 17

***********SELECTION SORT*************
4 12 33 5 17
4 5 33 12 17
4 5 12 33 17
4 5 12 17 33

Ascending order is: 4 5 12 17 33

***********INSERTION SORT*************
4 5 12 17 33
5 4 12 17 33
12 5 4 17 33
17 12 5 4 33
33 17 12 5 4

Descending order is : 33 17 12 5 4
Enter number you want to search :12
Number is found and index is : 2

--------------------------------
Process exited after 43.26 seconds with return value 0
Press any key to continue . . .
*/
