#include<iostream>
using namespace std;
 
 class MyClasse {
	public:
		int A,imgA,B,imgB;
		int somme=0, somimg =0,multip,multipimg, div,divimg, sous,sousimg;
		void remplissage(){
			cout<<" donnez la partie reel de A"<<endl;
        	cin>>A;
		    cout<<" donnez la partie imaginaire de A"<<endl;
		    cin>>imgA;
	     	cout<<" donnez la partie reel de B"<<endl;
	     	cin>>B;
	    	cout<<" donnez la partie imaginaire de B"<<endl;
	    	cin>>imgB;
		}
		
		
		int addition(){
			
			somme=A+B;
			somimg=imgA=imgB;
			cout<<" la somme des deux nombres est "<<endl;
			cout<<"la partie reel    "<<somme<<endl;
			cout<<" la partie imaginaire  "<<somimg<<endl;
			return 0;
			}
			
		int egalite(){
		
			if(A==B&&imgA==imgB){
				cout << " les deux nombres sont egales "<<endl;
			}
			else {
				cout<<" les deux nombres ne sont pas egales "<<endl;
			}
			return 0;
		}
		int multiplication(){
			
			multip=(A*B)+(-(imgA*imgB));
			multipimg=(A*imgB)+(B*imgA);
			cout<<" la multiplication des deux nombres est "<<endl;
			cout<<"la partie reel   "<<multip<<endl;
			cout<<" la partie imaginaire  "<<multipimg<<endl;
			return 0;
		}
	/*	int division(){
			
		}*/
		int soustraction(){
		
			sous=A-B;
			sousimg=imgA-imgB;
			cout<<" la soustraction  des deux nombres est "<<endl;
			cout<<"la partie reel   "<<sous<<endl;
			cout<<" la partie imaginaire   "<<sousimg<<endl;
			return 0;
		}
		
		
};

int main(){
	
	int choix ;
	
	MyClasse myobject;
	  
	  myobject.remplissage();
        	
cout<<"-----------------------MENU-------------------------- "<<endl;
	     cout<< " 1 - fair la somme "<<endl;
	 	 cout<< " 2 - tester l'egalite' "<<endl;
	     cout<< " 3 - fair la multiplication "<<endl;
	    cout<< "  4 - fair la soustraction "<<endl;
cout<<"----------------------------------------------------"<<endl;
	 
 cout<< " precisez votre choix s'il vous plais"<<endl;
	 cin>>choix;
	switch(choix){
		case 1:
			myobject.addition();
			break;
		case 2: 
		     myobject.egalite();
		     break;
		case 3:
			 myobject.multiplication();
			 break;
		case 4:
			myobject.soustraction();
			break;
		default:
			cout<< " le choix invalid"<<endl;
			 
	}
	return 0;
}
