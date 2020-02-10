#include<iostream>

using namespace std;

void i();
void u();
void c();
void dOr();
void sd();

main(){
	
	int choice;
	
	cout<<"Set Operations: \n1.Intersection \n2.Union \n3.Complement \n4.Difference or Relative Compliment \n5.Symmetric Difference";
	cout<<"\nChoice: ";
	cin>>choice;
	
	if(choice==1){
		i();
	}
	else if(choice==2){
		u();
	}
	else if(choice==3){
		c();
	}
	else if(choice==4){
		dOr();
	}
	else if(choice==5){
		sd();
	}
	else cout<<"Error 404.";
}

void i(){
	int a[100],b[100],temp[100];
	int x,y,count=0;
	
	cout<<"Intersection\n";
	cout<<"Set A size: ";
	cin>>x;
	cout<<"Enter Set A:\n";
	
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Set B size: ";
	cin>>y;
	cout<<"Enter Set B:\n";
	for(int i=0;i<y;i++){
		cin>>b[i];
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(a[i]==b[j]){
				temp[count]=a[i]; 
				count++;
			}
		}
	}
	cout<<"The Intersection of Set A & B: { ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}
	cout<<"}";
}
void u(){
	int a[100],b[100],temp[100];
	int x,y,z,count=0;
	
	cout<<"Union\n";
	cout<<"Set A size: ";
	cin>>x;
	cout<<"Enter Set A:\n";
	
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Set B size: ";
	cin>>y;
	cout<<"Enter Set B:\n";
	for(int i=0;i<y;i++){
		cin>>b[i];	
	
	}
	for(int i=0;i<x;i++){
		temp[count]=a[i];
		count++;
	}
	for(int i=0;i<y;i++){
		temp[count]=b[i];
		count++;
	}
	for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if(temp[i]>temp[j]){
				z=temp[i];
				temp[i]=temp[j];
				temp[j]=z;
			}
		}
	}
	cout<<"The Union of Set A & B: { ";
	for(int i=0;i<count;i++){
		if(temp[i]!=temp[i+1]) cout<<temp[i]<<" ";
	}
	cout<<"}";
}
void c(){
	int u[100],a[100],temp[100];
	int x,y,z,count=0;
	
	cout<<"Complement\n";
	cout<<"Universal Set: ";
	cin>>x;
	cout<<"Enter Universal Set:\n";
	
	for(int i=0;i<x;i++){
		cin>>u[i];
	}
	cout<<"Set A size: ";
	cin>>y;
	cout<<"Enter Set A:\n";
	for(int i=0;i<y;i++){
		cin>>a[i];	
	}	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(u[i]==a[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=u[i];
			count++;
		}
	}	
	cout<<"The Complement of Set A: { ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}	
	cout<<"}";
}
void dOr(){
	int a[100],b[100],temp[100];
	int x,y,z,count=0;
	
	cout<<"Difference or Relative Complement\n";
	cout<<"Number of Elements in Set A: ";
	cin>>x;
	cout<<"Enter an element in a Set A:\n";
	
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Set B size: ";
	cin>>y;
	cout<<"Enter Set B:\n";
	for(int i=0;i<y;i++){
		cin>>b[i];	
	}		
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(a[i]==b[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=a[i];
			count++;
		}
	}	
	cout<<"A-B: ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}	
	count=0;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(b[i]==a[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=b[i];
			count++;
		}
	}	
	cout<<"\nB-A: { ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}
	cout<<"}";	
}
void sd(){
	int a[100],b[100],temp[100];
	int x,y,z,count=0;
	cout<<"Symmetric Difference\n";
	cout<<"Set A size: ";
	cin>>x;
	cout<<"Enter Set A:\n";
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Set B size: ";
	cin>>y;
	cout<<"Enter Set B:\n";
	for(int i=0;i<y;i++){
		cin>>b[i];	
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(a[i]==b[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=a[i];
			count++;
		}
	}	
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(b[i]==a[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=b[i];
			count++;
		}
	}
	cout<<"Symmetric Difference: { ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}
	cout<<"}";
}
