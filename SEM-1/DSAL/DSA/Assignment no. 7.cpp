#include<iostream> 
#include<stdlib.h> 
using namespace std; 
 struct node 
 { 
  int roll; 
  char d; 
  char a[20],b[20],c[20],e[20],f[20]; 
  node *next; 
 }*head=NULL; 
  
 //Creating the list 
 void create() 
 { 
  struct node *temp,*nn; 
  nn=new node; 
  cout<<endl; 
  cout<<"Enter Information of student"<<endl; 
  cout<<"Enter the Roll: "; 
  cin>>nn->roll; 
  cout<<"Enter the surname : "; 
  cin>>nn->a; 
  cout<<"Enter the name : "; 
  cin>>nn->b; 
  cout<<"Enter Father's name : "; 
  cin>>nn->c; 
  cout<<"Enter the div : "; 
  cin>>nn->d; 
  cout<<"Enter the contact number : "; 
  cin>>nn->e; 
  cout<<"Enter the address of student : "; 
  cin>>nn->e; 
  cout<<endl; 
  nn->next=NULL; 
  temp=head; 
  if(head==NULL) 
  { 
   head=nn; 
  } 
  else 
  { 
   while(temp->next!=NULL) 
   { 
    temp=temp->next; 
   } 
   temp->next=nn; 
  } 
 } 
  
 //Display the list 
 void disp() 
 { 
  struct node *temp; 
  temp=head; 
   cout<<"Roll"<<" \t\t"<<"Name"<<"\t\t"<<"Division"<<"\t"<<"Address"<<endl; 
  while(temp!=NULL) 
   { 
    cout<<"----------------------------------------------------"; 
     cout<<endl<<temp->roll<<"   "<<temp->a<<" "<<temp->b<<" "<<temp->c<<"\t"<<temp->d<<"\t\t"<<temp->e<<endl; 
     temp=temp->next; 
   } 
 } 
  
 //Inserting new content in front the list 
 void insertf() 
 { 
  struct node *nn; 
  nn=new node; 
  cout<<endl; 
  cout<<"Enter Information of student"<<endl; 
  cout<<"Enter the Roll: "; 
  cin>>nn->roll; 
  cout<<"Enter the surname : "; 
  cin>>nn->a; 
  cout<<"Enter the name : "; 
  cin>>nn->b; 
  cout<<"Enter Father's name : "; 
  cin>>nn->c; 
  cout<<"Enter the div : "; 
  cin>>nn->d; 
  cout<<"Enter the contact number : "; 
  cin>>nn->e; 
  cout<<"Enter the address of student : "; 
  cin>>nn->e; 
  cout<<endl; 
  nn->next=head; 
  head=nn; 
} 
 
//Inserting new content in end the list 
void inserte() 
{ 
 struct node *temp,*nn; 
 nn=new node; 
 cout<<endl; 
  cout<<"Enter Information of student"<<endl; 
  cout<<"Enter the Roll: "; 
  cin>>nn->roll; 
  cout<<"Enter the surname : "; 
  cin>>nn->a; 
  cout<<"Enter the name : "; 
  cin>>nn->b; 
  cout<<"Enter Father's name : "; 
  cin>>nn->c; 
  cout<<"Enter the div : "; 
  cin>>nn->d; 
  cout<<"Enter the contact number : "; 
  cin>>nn->e; 
  cout<<"Enter the address of student : "; 
  cin>>nn->e; 
  cout<<endl; 
  nn->next=NULL; 
  temp=head; 
  while(temp->next!=NULL) 
  { 
   temp=temp->next; 
  } 
  temp->next=nn; 
} 
 
//Inserting new content in any position the list 
void insertp() 
{ 
 struct node *temp,*nn; 
 int a,i=1; 
 nn=new node; 
 cout<<endl; 
  cout<<"Enter Information of student"<<endl; 
  cout<<"Enter the Roll: "; 
  cin>>nn->roll; 
  cout<<"Enter the surname : "; 
  cin>>nn->a; 
  cout<<"Enter the name : "; 
  cin>>nn->b; 
  cout<<"Enter Father's name : "; 
  cin>>nn->c; 
  cout<<"Enter the div : "; 
  cin>>nn->d; 
  cout<<"Enter the contact number : "; 
  cin>>nn->e; 
  cout<<"Enter the address of student : "; 
  cin>>nn->e; 
  cout<<endl; 
  nn->next=NULL; 
  cout<<"Enter position :"; 
  cin>>a; 
  temp=head; 
  while(i!=a) 
  { 
  temp=temp->next; 
   i++; 
  } 
  nn->next=temp->next; 
  temp->next=nn; 
} 
 
//Deleting content in front the list 
void delf() 
{ 
 struct node *temp; 
 temp=head; 
 head=temp->next; 
 cout<<"Deleting First Data"<<endl; 
 free(temp); 
} 
 
//Deleting content in end the list 
void dele() 
{ 
 struct node *temp,*a; 
 temp=head; 
 while(temp->next!=NULL) 
 { 
  a=temp; 
  temp=temp->next; 
 } 
 a->next=NULL; 
 cout<<"Deleting Last Data"<<endl; 
 free(temp);  
}  
 
//Deleting content in any position the list 
void delp() 
{ 
 struct node *temp,*a; 
 int i=1,p; 
 cout<<"Enter position to delete:"; 
 cin>>p; 
 temp=head; 
 while(i!=p) 
 { 
  a=temp; 
  temp=temp->next; 
 } 
 a->next=temp->next; 
 cout<<"Deleting position "<<endl; 
 free(temp);  
}  
 
//Searching content in the list 
void search() 
 { 
  struct node *temp; 
  int k,j=0; 
  temp=head; 
  cout<<"\nEnter the roll no. which you want to search : "; 
  cin>>k; 
  while(temp!=NULL) 
  { 
    if(temp->roll==k) 
   { 
    cout<<"Name of roll no. "<<temp->roll<<" is "<<temp->a<<temp->b<<temp->c<<"\n\n"; 
    j++;break; 
    } 
    temp=temp->next; 
    
  } 
  if(j==0) 
  { 
   cout<<"Roll number is not found "<<endl; 
  } 
 } 
  
 //modify the content in list 
 void modify() 
 { 
   struct node *temp; 
  int k,j=0; 
  temp=head; 
  cout<<"\nEnter the roll no. which you want to modify : "; 
  cin>>k; 
  while(temp!=NULL) 
  { 
    if(temp->roll==k) 
   { 
    cout<<"Enter the name of roll no. "<<temp->roll<<" : "; 
    cin>>temp->a; 
    j++;break; 
    } 
    temp=temp->next; 
    
  } 
  if(j==0) 
  { 
   cout<<"Roll number is not found "<<endl; 
  } 
 } 
 
int main() 
{ 
 int i,n,choice; 
 cout<<"Enter number of students : "; 
 cin>>n; 
 for(i=0;i<n;i++) 
 { 
  create(); 
 } 
 disp(); 
 cout<<"1.Insert at First"<<endl<<"2.Insert at End"<<endl<<"3.Insert at any position"<<"4.Delete at Fisrt"<<endl<<"5.Delete at End"<<endl<<"6.Delete at any position"<<endl<<"7.search"<<endl<<"8.Modify"<<endl; 
 cin>>choice; 
 switch(choice) 
 { 
  case 1: 
   insertf(); 
   disp(); 
   break; 
  case 2: 
   inserte(); 
   disp(); 
   break; 
  case 3: 
   insertp(); 
   disp(); 
   break; 
  case 4: 
   delf(); 
   disp(); 
   break; 
  case 5: 
   dele(); 
   disp(); 
   break; 
  case 6: 
   delp(); 
   disp(); 
   break; 
  case 7: 
   search(); 
   break; 
  case 8: 
   modify(); 
   break; 
  default: 
   cout<<"Invalid option....."<<endl; 
   break; 
 } 
 return 0; 
} 
 
 
