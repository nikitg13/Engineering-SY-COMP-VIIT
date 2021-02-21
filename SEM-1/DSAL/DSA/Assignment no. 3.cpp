#include<iostream>
#include<string.h>
using namespace std;
typedef struct student
{
	int roll;
	char name[30];
	char div;
	int cont;
	char addr[30];
};
void input(student s[],int a1)
{
	int i;
	for(i=0;i<a1;i++)
	{
		cout<<"\nEnter roll number of student : ";
		cin>>s[i].roll;
		cout<<"Enter name students : ";
		cin>>s[i].name;
		cout<<"Enter division of students : ";
		cin>>s[i].div;
		cout<<"Enter contact number of students : ";
		cin>>s[i].cont;
		cout<<"Enter address of students : ";
		cin>>s[i].addr;
		cout<<"\n";
	}
}
void display(student s[],int a1)
{
    cout<<"Roll no\tName\tDivision\tContact\tAddress\n";
	for(int i=0;i<a1;i++)
	{
		cout<<s[i].roll<<"\t"<<s[i].name<<"\t"<<s[i].div<<"\t\t"<<s[i].cont<<"\t"<<s[i].addr<<"\n";
	}
			
}
void add(student s[],int a3,int a1)
{
	int i;
	for(i=a1;i<(a1+a3);i++)
	{
		cout<<"\nEnter roll number of student : ";
		cin>>s[i].roll;
		cout<<"\nEnter name students : ";
		cin>>s[i].name;
		cout<<"\nEnter division of students : ";
		cin>>s[i].div;
		cout<<"\nEnter contact number of students : ";
		cin>>s[i].cont;
		cout<<"\nEnter address of students : ";
		cin>>s[i].addr;
	}
}
void edit(student s[],int a4,int a1)
{
	int i,flag=0;
	for(i=0;i<a1;i++)
	{
		if(s[i].roll==a4)
		{
			cout<<"\nEnter roll number of student : ";
		    cin>>s[i].roll;
			cout<<"Enter name students : ";
			cin>>s[i].name;
			cout<<"Enter division of students : ";
			cin>>s[i].div;
			cout<<"Enter contact number of students : ";
			cin>>s[i].cont;
			cout<<"Enter address of students : ";
			cin>>s[i].addr;
			flag=flag+1;
		}
	}
	if(flag=0)
	{
		cout<<"Roll number is not found..."<<endl;
	}
}
void delet(student s[],int a5,int a1)
{
	int i,j,a,d;
	char b[30],c,e[30];
	for(i=0;i<a1;i++)
	{
		if(s[i].roll==a5)
		{
			for(j=i;j<a1;j++)
			{
				s[j].roll=s[j+1].roll;
				s[j].cont=s[j+1].cont;
				s[j].div=s[j+1].div;
				strcpy(s[j+1].name,s[j].name);
				strcpy(s[j+1].addr,s[j].addr);
				
			}
		}
		break;
	}
}
int main()
{
	int a1,i,a2,a3,a4,a5,c,k;
	student s[100];
	cout<<"\nEnter number of student :";
	cin>>a1;
	input(s,a1);
	cout<<"\n";
	display(s,a1);
	p:cout<<"\n1.Add data"<<endl<<"2.Edit Data"<<endl<<"3.Delete Data"<<endl;
	cin>>a2;
	switch(a2)
	{
		case 1:
				cout<<"Enter number of students :";
				cin>>a3;
				add(s,a3,a1);
				a1=a3+a1;
				display(s,a1);
				break;
		case 2:
				cout<<"Enter roll number of student for edit :";
				cin>>a4;
				edit(s,a4,a1);
				display(s,a1);
				break;
		case 3:
				cout<<"Enter roll number of student for delete :";
				cin>>a5;
				delet(s,a5,a1);
				cout<<"Roll no\tName\tDivision\tContact\tAddress\n";
				for(k=0;k<(a1-1);k++)
				{
					cout<<s[i].roll<<"\t"<<s[i].name<<"\t"<<s[i].div<<"\t"<<s[i].cont<<"\t"<<s[i].addr;
				}
				break;
	}
	char ch; 
	 cout<<"\nDo you want to continue (~press Y/N)\n";
	 cin>>ch;

	 if(ch=='y'||ch=='Y')
	 {
		goto p;
	 }
	
	return 0;
}


/*
Enter number of student :2

Enter roll number of student : 1
Enter name students : Nikit
Enter division of students : D
Enter contact number of students : 12345
Enter address of students : Nagpur


Enter roll number of student : 2
Enter name students : John
Enter division of students : A
Enter contact number of students : 12333
Enter address of students : NY


Roll no Name    Division        Contact Address
1       Nikit   D               12345   Nagpur
2       John    A               12333   NY

1.Add data
2.Edit Data
3.Delete Data
1
Enter number of students :1

Enter roll number of student : 3

Enter name students : Rahul

Enter division of students : B

Enter contact number of students : 12344

Enter address of students : Mumbai
Roll no Name    Division        Contact Address
1       Nikit   D               12345   Nagpur
2       John    A               12333   NY
3       Rahul   B               12344   Mumbai

Do you want to continue (~press Y/N)
y

1.Add data
2.Edit Data
3.Delete Data
3
Enter roll number of student for delete :2
Roll no Name    Division        Contact Address
1       Nikit   D       12345   Nagpur
3       Rahul   B       12344   Mumbai
Do you want to continue (~press Y/N)
n

--------------------------------
Process exited after 127.1 seconds with return value 0
Press any key to continue . . .
*/
