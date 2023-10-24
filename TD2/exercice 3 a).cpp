#include<iostream>
using namespace std;

int main(){

int Tab[10],i=0,max,min;

  cout << "donnez les valeurs du tableau  "<< endl;
  for(i=0;i<=10;i++){
    cin>>Tab[i];
  }
  cout<< " les elements du tableau sont :  "<<endl;
  for(i=0;i<=10;i++){
    cout<< "           "<<Tab[i]<<endl;
  }
  max=min=Tab[0];
  for(i=0;i<=10;i++){
  	if(max<Tab[i]){
  		max=Tab[i];
	  }
  }
  cout<<" le maximum est "<<max<<endl;
  for(i=0;i<=10;i++){
	if(min>Tab[i]){
		min=Tab[i];
	}
 }
	cout << " le minimum est "<<min <<endl;
return 0;
}
