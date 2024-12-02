#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node * prev;
	struct node * next;
};

struct node* traversal(struct node* head)
{
	struct node * ptr=head;
	
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	return head;
	
	
}
int main()
{
	struct node* head;
	struct node* first;
	struct node* second;
	struct node* third;
	
	head = (struct node*)malloc(sizeof(struct node));
	first=(struct node *)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	
	head->data=2;
	head->prev=NULL;
	head->next=first;
	
	
	first->data=5;
	first->prev=head;
	first->next=second;
	
	second->data=10;
	second->prev=first;
	second->next=third;
	
	third->data=12;
	third->prev=second;
	third->next=NULL;
	
	head= traversal(head);
	
	cout<<first->prev->data;
	
	
}