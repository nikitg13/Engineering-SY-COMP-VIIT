/*
Using standard template libary (STL) list container implement 
following member functions of list class: empty, insert, reverse, sort, Unique, using interator.


*/
#include<iostream>
#include<list>
using namespace std;
int display(list<int> &l)
{
  list<int>::iterator itr;
  for(itr=l.begin();itr!=l.end();++itr)
  {
        cout<<*itr;
        cout<<" ";
  }
   return 0;
}
int main()
{
  int value;
  list<int> l1(3);
  list<int> l2(5);
  cout<<"\n\nAdd at the back\n";
  for(int i=0;i<5;i++)
  {
      cin>>value;
      l1.push_back(value);
      l2.push_back(value+5);
  }
  display(l1);
  cout<<" ";
  display(l2);
  cout<<" ";

  

  cout<<"\n\nSort list1 and list2\n";
  l1.sort();
  l2.sort();
  display(l1);
  cout<<" ";
  display(l2);
  cout<<" ";
  

  cout<<"\n\nMerge two lists\n";
  l1.merge(l2);
  display(l1);
  cout<<" ";
  
  cout<<"\n\nAdd at the front\n";
  for(int i=0;i<5;i++)
  {
      cin>>value;
      l1.push_front(value);
      l2.push_front(value+5);
  }
  display(l1);
  cout<<" ";
  display(l2);
  cout<<" ";
  return 0;
}

/*output:


Add at the back
6
5
5
45
5
0 0 0 6 5 5 45 5  0 0 0 0 0 11 10 10 50 10

Sort list1 and list2
0 0 0 5 5 5 6 45  0 0 0 0 0 10 10 10 11 50

Merge two lists
0 0 0 0 0 0 0 0 5 5 5 6 10 10 10 11 45 50

Add at the front
2
5
5
6
3
3 6 5 5 2 0 0 0 0 0 0 0 0 5 5 5 6 10 10 10 11 45 50  8 11 10 10 7
--------------------------------
Process exited after 43.41 seconds with return value 0
Press any key to continue . .*/


