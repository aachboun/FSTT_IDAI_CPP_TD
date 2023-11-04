#include<iostream>
using namespace std;
class Test{
public:
     static int tableau[];
public:
     static int division(int indice,  int diviseur){
        
        return tableau[indice]/diviseur;
     }
    class xBig{
        public:
       void big(){ 
            cout<< " le nombre choisi est tres grand"<< endl;
        }
        
     };
   class xSmall{
    public:
    void  small(){
         cout<<" le nombre est inferieur c'est impossible!"<<endl;
    }
       
     };
     class yZero{
        public:
        void zero(){
            cout<<" impossible de diviser sur le nombre zero "<<endl;
        }
     };
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main(){
       int x, y;
       Test a;
       try{
        cout << "Entrez l'indice de l'entier à diviser: " << endl;
        cin >> x ;
         if (x>10)
        throw Test::xBig();
        else if (x<0)
        throw Test::xSmall();
        cout << "Entrez le diviseur: " << endl;
        cin >> y ;
         if( y==0)
            throw Test::yZero();
        else {
        cout << "Le resultat de la division est: "<< endl;
        cout <<Test::division(x,y) << endl; 
        }
        
       }
       catch(Test::xBig b){
        b.big();
       }
       catch(Test::xSmall s){
        s.small();
       }
       catch(Test::yZero z ){
        z.zero();
       }
       
 
  return 0;


}

