#include<iostream>
using namespace std;
int partion(int a[],int p,int r)
{
	int i,j,pivot,temp,temp1;
	pivot=a[r];
	i=p-1;
	for(j=p;j<=(r-1);j++)
	{
		if(a[j]<pivot)
		{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		
		}
	}
	temp1=a[i+1];
	a[i+1]=a[r];
	a[r]=temp1;
	return (i+1);	
}
int qsort(int a[],int p,int r)
{
	int q,l;
	if(p<r)
	{
		q=partion(a,p,r);
		qsort(a,p,q-1);
		qsort(a,q+1,r);
	}
	cout<<endl;
	for(l=0;l<=r;l++)
	{
		cout<<a[l]<<" ";
	}
}
int main()
{
	int a[100],i,j,n;
	cout<<"How many number you have :";
	cin>>n;
	cout<<"Enter the element :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"Your list is :";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	qsort(a,0,(n-1));
	return 0;
}

/*
How many number you have :4
Enter the element :
5
12
1
7

Your list is :5 12 1 7
5 51 12

1 5
1 5
1 5 7 12
1 5 7 12
--------------------------------
Process exited after 19.45 seconds with return value 0
Press any key to continue . . .
*/
