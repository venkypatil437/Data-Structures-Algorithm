#include<iostream>
#include<cstdlib>

struct node{
	int data;
	struct node *next;
};
void linkedlist(struct node* ptr){
	while(ptr!=NULL){
	
	std::cout<<ptr->data<<std::endl;
	ptr = ptr->next;
}
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
	
	linkedlist(head);
}