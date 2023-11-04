#include<iostream>
#include <set>
#include<list>
#include<vector>
using namespace std;
// fonction d'affichage selon la question 2
bool recherche( set<int> s1 ,int n){

          if( s1.find(n)==s1.end()){
             return true;
          }
          else{
            return false;
          }
    }
// fonction de recherche selon la question 3
    bool search(set<int>::iterator debut,set<int>::iterator fin,int n){
       for(debut;debut!=fin;++debut ){
         if(n==*debut){
            return true;
         }
         return false;
       }
       
       } 
        template<class T ,class A> T search_by_temp(A debut, A fin, T n){
             for(debut;debut!=fin;++debut){
                if( n==*debut){
                    return false;
                }
             }
            return true;
        }    
int main(){
    set<int> s1;
    vector<string>v1;
    int i,n ,Tab[100];
   
        for(i=1;i<=100;i++){
           s1.insert(i);//remplissage du set
           v1.push_back(to_string(i));//remplissage du vector
           cin>>Tab[i];//remplissage du tableau
        }
        set<int>::iterator itr;
        for(itr=s1.begin();itr!=s1.end();++itr){
            cout<<'\t'<<*itr<<endl;
        }
 cout<<" donnez la valeur a rechercher"<<endl;
 cin>>n;
 // affichage selon la question 2
   if( recherche(s1,n)==true){
    cout<< " le nombre que vous chercher n'existe pas "<<endl;
   }
   else {
    cout<< " le nombre que vous chercher existe"<<endl;
   }
// affichage selon la question 3
    if( search(s1.begin(),s1.end(),n)==true){
            cout<<"le nombre que vous cherchez n'existe plus "<<endl;
    }
    else{
        cout<<" le nombre que vous recherchez est encore  existe "<<endl;
    }
        
    //search by template
    if(search_by_temp(s1.begin(),s1.end(),n)==true){
              cout<<" le nombre que vous cherchez n;existe pas "<<endl;
    }
    else{
        cout<<" le nombre que vous cherchez est exist toujours"<<endl;
    }
    //search by template in a vector
    if( search_by_temp(v1.begin(), v1.end(),n)==true){
            cout<<"le nombre que vous cherchez n'existe plus "<<endl;
    }
    else{
        cout<<" le nombre que vous recherchez est encore  existe "<<endl;
    }
//search by template in a table
if(search_by_temp(Tab,Tab+sizeof(Tab)/sizeof(Tab[0]),n)==true){
        cout<<"l'element existe"<<endl; }
    else{
        cout<<"l'element n'existe pas"<<endl;
     }

    return 0;
    }


