#include<iostream>
using namespace std;
 
 int main(){
 	int a,*P_a;
 	int &ref_a=a;
 	P_a=&a;
 	cout <<" donnez la valeur de la variable a "<<endl;
 	cin>>a;
 	cout<< "l'adress de la valeur est                    "<<P_a<<endl;
 	cout<< " la valeur est                               "<<a<<endl;
    cout<<" Affichage d'apres la reference              " <<ref_a<<endl;
    cout<<" Affichage d'apres le pointeur               " <<*P_a<<endl;
	
 }
