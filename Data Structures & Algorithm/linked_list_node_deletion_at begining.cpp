#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
};

//function for linked list traversal
void linkedlist(struct node* ptr){
	while(ptr!=NULL){
		
	
	std::cout<<ptr->data<<std::endl;
	ptr = ptr->next;
}
if(ptr==NULL){
	cout<<"Linked List is empty"<<endl;
}
}

//funtion for deletion of node
struct node* deleteFirst(struct node* head)
{
	struct node*ptr = head;
	head=head->next;
	free(ptr);
	return head;
}

	
	


int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	//setting the data and linking the nodes
	head->data=7;
	head->next=second;
	
	second->data=11;
	second->next=third;
	
	third->data=44;
	third->next=NULL;
	
	cout<<"Linked List Before Deletion"<<endl;
	linkedlist(head);
    
    head=deleteFirst(head);
    
    cout<<"Linked List after Deletion"<<endl;
    linkedlist(head);
    
}