#include<iostream>
	using namespace std;
struct list {
	int data ;
	int *next;
};
list *them(list *p , int x)
{
	int i;
	list*temp=new list ;
	temp->data= x ;
	temp-> next= NULL;
	if(p==NULL) 
	{
	return temp;
	}
	temp -> next = p;
	return temp;
}
void hienthi(list *p){
	if(temp==NULL) 
	{
	cout<<" danh sach trong";
	}
	else {
		cout<<"-------------danh sach ten-------------";
		while(temp->temp!=NULL){
			cout<<temp->data<<"	";
			temp=temp->next ;
		}
		cout<<endl;
	}
}
int main(){
	list*p=NULL;
	int x ;
	them(p,x);
	hienthi(List*p);
}

