#include<iostream>
using namespace std;
void incrementer(){
	int A ,*P;
	P=&A;
     cout <<"donnez la valeur de la variable "<<endl;
     cin>>*P;
     cout<<" la valeur choisi est "<< *P<<endl;
     cout <<" la valeur apres l'incrementation "<<++*P <<endl;
     cout<<" l'adress de la variable est "<<P<<endl;   
	 } 
	 
void permuter(){
	  
	   int A , B ,C;
	   int &a=A;
	   int &b=B;
	   cout<<" donnez la premiere valeur  "<<endl;
	   cin>>A;
	    cout<<" donnez la  deuxieme valeur  "<<endl;
	   cin>>B;
	   cout <<"avant la permutation "<<endl;
	   cout<<"la valeur de A  "<<A<<endl;
	   cout<<" la valeur de B "<<B<<endl;
	   cout<<" la valeur de ref A "<<a<<endl;
	   cout<<" la valeur de ref B  "<<b<<endl;
	   C=A;
	   A=B;
	   B=C;
	   cout<<" ____________----------_____-----____-----____-----_____------______------_____"<<endl;
	    cout <<"apres  la permutation "<<endl;
	   cout<<" la valeur de A  "<<A<<endl;
	   cout<<"la valeur de B  "<<B<<endl;
	   cout<<"la valeur de ref A  "<<a<<endl;
	   cout<<"la valeur de ref B  "<<b<<endl;
	   
	   
	
	
	
	
} 
     int main(){
     	 
     	  incrementer();
     	  permuter();
      return 0;
	 }
     
	
