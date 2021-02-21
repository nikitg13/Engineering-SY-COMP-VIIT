/*


Write a C++ program that creates an output file, writes information to it, closes the file and open it again 
as an input file and read the information from the file.



*/
#include<iostream>
#include<fstream>
using namespace std;
main()
{
  fstream f; //object of fstream class
  char ch;  //to read single character
  f.open("data.txt",ios::out); //opening file "Ankit.txt" in out(write) mode
  if(!f)
  {
     cout<<"Error opening file";
     return 0;
  }
  cout<<"file name data.txt created"<<endl; //write text into file
  f<<"Hi there! How are you? "<<endl;
  f.close(); //closing the file
  f.open("data.txt",ios::in); //again open file in read mode
  if(!f)
  {
     cout<<"Error opening file";
     return 0;
  }
  //read untill end of file is not found.
  while(!f.eof())
  {
    f>>ch; //read single character from file
    cout<<ch;
  }
  f.close(); //close file
  return 0;
}
/*
Output:


file name Ankit.txt created
HelloAnkitt
--------------------------------
Process exited after 1.362 seconds with return value 0
Press any key to continue . . .

*/


