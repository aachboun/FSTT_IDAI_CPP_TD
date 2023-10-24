
#include<iostream>
using namespace std;
 

int main(){
   int i, j, tmp,size,k=0;
   int tab[100]; //allocation dynamique du tableau

   cout << "entrer la taille du tableau";
   cin >> size;
    for(i=0;i<size;i++){
       cout<<"saisir case "<<i+1<<": ";
       cin>>tab[i];
   } 


    //afficher les �l�ments du tableau
   for (i=0; i < size; ++i)
   {
      cout<<"    "<< tab[i];
   }
 
   //trie par bulles
  for (i=0 ; i < size-1; i++)
   {
    for (j=0 ; j < size-i-1; j++)
    {

      if (tab[j] > tab[j+1]) 
      {
        tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
        k++;
      }
    }
   }
 
   cout <<"\n*****\n";
 
    
   for (i=0; i < size; ++i)
   {
      cout <<"    "<< tab[i];
   }
   cout<<endl;
   cout<<" le nombre d'echange est "<<k<<endl;
 
   return 0;
}
