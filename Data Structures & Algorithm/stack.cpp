#include<iostream>
using namespace std;
	int stack[10];
	int top=-1;
int push(int data)
{
	
	if(top==-1||top<10)
	{
		top++;
		stack[top]=data;
		cout<<"Pushed"<<data<<endl;
	}
	else if(top==9)
	{
		cout<<"Stack Is Full"<<endl;
	}
	return data;
}

void pop()
{
	if(top==-1)
	{
		cout<<"Stack is Empty"<<endl;
	}
	else if(top>=0)
	{
		cout<<"Popped Data"<<stack[top]<<endl;
		stack[top]=0;
		top--;
		
	}
}

void isEmpty(int stack[])
{
	if(top==-1){
		cout<<"Stack Is Empty"<<endl;
		
	}
	else
	{
		cout<<"stack is not empty"<<endl;
	}
}

void isFull(int stack[])
{
	if(top==9){
		cout<<"Stack Is Full"<<endl;
		
	}
	else
	{
		cout<<"stack is not Full"<<endl;
	}
}



void stack_display()
{
	 for(int i=0;i<10;i++)
 {
 	if(stack[i]!=0){
	 
 	cout<<stack[i]<<endl;
 }
 }
}
int main()
{
 push(10);
 push(11);
 push(12);
 stack_display();

 
 pop();
 pop();
 
 
 stack_display();
 isEmpty(stack);
 isFull(stack);
 
 


  

}