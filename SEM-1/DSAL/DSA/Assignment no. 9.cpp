#include<iostream> 
using namespace std; 
char stack[50]; 
int top = -1; 
void push(char ele) 
{ 
 stack[++top] = ele; 
} 
int pop() 
{ 
 return (stack[top--]); 
} 
int pr(char ele) 
{ 
 switch(ele) 
 { 
  case '#': return 0;break; 
  case '(': return 1;break; 
  case '+':  
  case '-': return 2; break; 
  case '*': 
  case '/': return 3; break; 
  case '^': return 4; break; 
 } 
} 
int main() 
{ 
  int k = 0,i = 0,p,j; 
  char ch,in[50],post[50]; 
 
  cout<<"\nOperation for Conversion of infix expression to postfix expression\n"; 
  cout<<"=============================================================== ===\n\n"; 
   
  cout<<"Enter the infix expression : "; 
  cin>>in; 
  push('#'); 
  while((ch=in[i++])!='\0') 
  { 
    if(ch == '(') 
    { 
     push(ch); 
    }
	 
    else if(isalnum(ch)) 
    { 
        post[k++] = ch; 
    } 
    
    else if(ch == ')') 
    {  
 		 while(stack[top]!='(') 
         { 
  			 post[k++] = pop(); 
  		 } 
  			pop(); 
    } 
  
   else 
   { 
        while(pr(stack[top])>=pr(ch)) 
  		{ 
   			post[k++] = pop(); 
  		} 
  			push(ch); 
   } 
   
 } 
 
 
 
 
while(stack[top]!='#') 
{ 
   post[k++] = pop(); 
} 
  
post[k]='\0'; 

 
 cout<<"Postfix expression is : "<<post<<"\n"; 
 cout<<"\n\n"; 
 return 0; 
} 
