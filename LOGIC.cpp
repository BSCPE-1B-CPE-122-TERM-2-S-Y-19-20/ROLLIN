#include<iostream>
#include<string>

using namespace std;

void conjunction();
void disjunction();
void negation();
void conditional();
void biconditional();

main(){
	
	int num;
	
	cout<<"1 - Conjunction"<<endl;
	cout<<"2 - Disjunction"<<endl;
	cout<<"3 - Negation"<<endl;
	cout<<"4 - Conditional"<<endl;
	cout<<"5 - Biconditional"<<endl;
	cout<<endl;
	cout<<"Choice:";
	cin >> num;
	
	if(num==1){
		conjunction();
	}
	else if(num==2){
		disjunction();
	}
	else if(num==3){
		negation();
	}
	else if(num==4){
		conditional();
	}
	else if(num==5){
		biconditional();
	}
	else {
		cout <<"Error 404.";
	}	
}
	void conjunction(){
		string q,p;
		
		cout<< "\nThe value of p is ";
		cin>>p;
		cout<<"The value of q is ";
		cin>>q;
		
		if( q == "true" && p =="true" ){
			cout<<"p ^ q = true";
		}
		
		else cout<< ("p ^ q = false");	
		}	
	void disjunction(){
		string q,p;
		
		cout<< "\n 	The value of p is ";
		cin>>p;
		cout<<"	The value of q is ";
		cin>>q;
		if( q == "false" && p =="false"){
			cout<<"\np or q = false";
		}
		else cout<< ("\np or q = true");	
		}
	void negation(){
			string q;
			
			cout<<"\nThe value of q is ";
			cin>>q;
			if(q=="true") cout << "\nq= false";
			else cout<<"\nq=true";	
		}
	void conditional(){
			string q,p;
			
			cout<< "\nThe value of p is ";
			cin>>p;
			cout<<"	The value of q is ";
			cin>>q;
			if(p=="true" && q=="false") cout <<"q-->p is false";
			else "q--p is true";
		}
	void biconditional(){
			string q,p;
			
			cout<< "\n 	The value of p is ";
			cin>>p;
			cout<<"	The value of q is";
			cin>>q;
			if((p=="true" && q=="true")||(p=="false" && q=="false"))
			cout << "\nThe Biconditional p<->q is true ";
			else cout << "\nThe Biconditional p<->q is false ";
		}

