#include<iostream>
using namespace std;
 class nbrcomplex{
 	private:
 		float A, B;
 		public:
 		  nbrcomplex(float a,float b){
 		  		
 		  	A=a;
 		  	B=b;	  	
		   }
		   void operator+(nbrcomplex);
		   void operator*(nbrcomplex);
		   void operator-(nbrcomplex);
		   void operator/(nbrcomplex);
 };
void nbrcomplex::operator+(nbrcomplex a  ){
      float somme=A+a.A;
      float somimg=B+a.B;
       cout<< " la somme de la partie reel  est "<<somme<<endl;  
       cout<<" la somme de la patie imaginaire est "<<somimg<<endl;    
}
void nbrcomplex::operator-(nbrcomplex a){
	float sous=A-a.A;
	float sousimg=B-a.B;
	cout<< " la soustraction de la partie reel est "<<sous<<endl;
	cout<<" la soustraction de la partie imaginaire est "<<sousimg<<endl;
}
void nbrcomplex::operator*(nbrcomplex a){
	float multip=(A*a.A)+(-(a.A*a.B));
	float multipimg=(A*a.B)+(B*a.A);
	cout<< " la multiplication de la partie reel est "<<multip<<endl;
	cout<<" la multiplication de la partie imaginaire est"<<multipimg<<endl;
}
void nbrcomplex::operator/(nbrcomplex a){
	  float denominateur=(a.A*a.A)+(a.B*a.B);
	  float div=((A*a.A)+(B*a.B))/denominateur;
	  float divimg=((B*a.A)-(A*a.B))/denominateur;
	  cout<< "  la partie reel de la division des deux nombres complexes est "<<div<<endl;
	  cout<<"la partie imaginaire de la dividion des deux nombres complexes est"<<divimg<<endl;
}

int  main(){
	float A,B,imgA,imgB;
	int choix;
	cout<< "donnez la valeur de partie reel du premier nombre"<<endl;
	cin>>A;
	cout<<" donnez la valeur de la partie imaginaire du premier nombre "<<endl;
	cin >> imgA ;
	cout<<"donnz la valeur de la partie reel du deuxieme nombre "<<endl;
	cin>>B;
	cout<<" donnez la valeur de la partie imaginaire du deuxieme nombre "<<endl;
	cin>>imgB;
	nbrcomplex a1(A,imgA);
	nbrcomplex a2(B,imgB);
cout<<"-----------------------MENU-------------------------- "<<endl;
	     cout<< " 1 - fair la somme "<<endl;
	 	 cout<< " 2 - faire la division  "<<endl;
	     cout<< " 3 - fair la multiplication "<<endl;
	    cout<< "  4 - fair la soustraction "<<endl;
cout<<"----------------------------------------------------"<<endl;

         cout<< " precisez votre choix s'il vous plais"<<endl;
	     cin>>choix;
	switch(choix){
		case 1:
			a1+a2;
			break;
		case 2: 
		    a1/a2;
		     break;
		case 3:
	 	     a1*a2;
			 break;
		case 4:
		    a1-a2;
			break;
		default:
			cout<< " le choix invalid"<<endl;
			 
	}
	 	
	  
	  
  
	
		 
  return 0;	
}
