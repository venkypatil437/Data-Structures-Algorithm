#include<iostream>

using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node * Traversal(struct node* head)
{
	while(head!=NULL)
	{
		cout<<"Element:"<<head->data<<endl;
		head=head->next;
	}
	return head;
}
struct node * InsertAtIndex(struct node*head,int index,int data)
{
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	int i=0;
	struct node *p=head;
	while(i!=index-1)
	{
		ptr=ptr->next;
		i++;
	}
	ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main()
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	struct node *first = (struct node*)malloc(sizeof(struct node));
	struct node *second = (struct node*)malloc(sizeof(struct node));
	struct node *third = (struct node*)malloc(sizeof(struct node));

    head->data=4;
    head->next=first;
    
    first->data=8;
    first->next=second;
    
    second->data=12;
    second->next=third;
    
    third->data=101;
    third->next=NULL;
    
    head=Traversal(head);
    head=InsertAtIndex(head,2,55);
	head=Traversal(head);
}