#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node * prev, *next;
};

struct node * head;
struct node *get_new_node(int x){

	struct node* new_node = new node;
	new_node->data = x;
	new_node->next = NULL;
	new_node->prev = NULL;
	return new_node;
};

void insert_at_head(int x){

	struct node* new_node = get_new_node(x);

	if (head== NULL){
	head = new_node;		
	}
	
	else{
	head->prev = new_node;
	new_node ->next = head;
	head = new_node;
	}
};

void insert_at_tail(int x){
	
	struct node* new_node = get_new_node(x);
	struct node* temp = head;

	if (head==NULL){
	new_node = head;
	return;
	}
	
	while(temp->next !=NULL){
	temp= temp->next;	
	}
	
	new_node->prev = temp;
	temp->next = new_node;
};

void insert_at_nth_position(int x , int n){

	int k =1; //length of linked list
	struct node * new_node  = get_new_node(x); 
	struct node * temp, *temp1,*count;
	temp = head;
	count = head;

	if(head == NULL){
		head = new_node;
		return;	
		}
	
	if(n==1){
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
		return;		
		}
	
	while(count->next !=NULL){
		k++;
		count = count->next;
		}
	

	if(n==(k+1)){
		count->next = new_node;
		new_node->prev = count;
		return;
		}
	if( n>(k+1) || n<1){
		cout<<"invalid input"<<endl<<"last data stored at linked list : "<<endl;
		return;
		}

	for(int i =0 ;i<n-2;i++){
		temp = temp->next;			
		}
	temp1= temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = temp1;
	temp1->prev = new_node;


};

void print(){

	struct node* temp = head;

	while(temp !=NULL){
	cout<< temp->data <<"\t";	
	temp= temp->next;
	}
 	cout<<"\n";

}

void reverse_print(){

	struct node* temp;
	temp = head;

	while(temp->next != NULL){
	temp = temp->next;		
	}		
	
	while(temp!=NULL){
	cout<< temp->data <<"\t" ;
	temp = temp->prev;
	}
	
 	cout<< "\n";

}

int main(){
int n;
cin>>n;
head = NULL;

insert_at_head(2);
cout<<"print : ";
print();
cout<<"reverse_print : ";
reverse_print();
insert_at_tail(4);
cout<<"print : ";
print();
cout<<"reverse_print : ";
reverse_print();
cout<<"reverse_print : ";
insert_at_tail(6);
cout<<"print : ";
print();
cout<<"reverse_print : ";
reverse_print();
insert_at_tail(8);
cout<<"print : ";
print();
cout<<"reverse_print : ";
reverse_print();

insert_at_head(12);
cout<<"print : ";

print();
cout<<"reverse_print : ";
reverse_print();

insert_at_nth_position(50,n);

cout<<"print : ";

print();
cout<<"reverse_print : ";
reverse_print();


return 0;
}




































