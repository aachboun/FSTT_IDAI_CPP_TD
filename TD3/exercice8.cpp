#include<iostream>
using namespace std;

template<class T> T square_by_temp( T X){
    T resultat;
    resultat=X*X;
      return resultat;
      
}
int main(){
    int X ;
    cout<<" donnez le nombre que vous vloulez calculer son carre"<<endl;
    cin>>X;
    cout<< " le carre de la valeur saisi est "<<square_by_temp(X)<<endl;
return 0;
}