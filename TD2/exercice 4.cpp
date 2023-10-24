#include<iostream>

using namespace std;

int main(){
	int taille,i=0,j=2;
	int *Tab1=new int[taille];
	int *Tab2=new int[taille];
	 cout<< " donnez la taille premier  du tableau "<< endl;
	 cin >>taille;
	 cout<<" donnez les valeurs premier du tableau "<<endl;
	 for(i=0;i<taille;i++){
	 	 cin>>Tab1[i];
	 }
	 cout<<"les valeur du premier tableau sont :"<<endl;
	 for(i=0;i<taille;i++){
	 	cout<<Tab1[i]<<endl;
	 }
	 cout<< "                    "<<endl<<"---------------------------------"<<endl; 
	 cout<< " donnez les valeurs du deuxieme tableau "<<endl;
	 for( i=0;i<taille;i++ ){
	 	
	 	Tab2[i]=Tab1[i]*Tab1[i];
	  }
	  for(i=0;i<taille;i++){
	  	cout<<Tab2[i]<<endl;
	  }
	   delete(Tab1);
	   
	 
return 0;	 
}
