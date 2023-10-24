#include<iostream>
#include<cstdlib>
using namespace std;
int throw_dice(int choix ){
    int numde1, numde2, numde;
  if (choix==1){


            numde=rand() % 6+ 1;
		  cout << "  le nombre du  de est     "<< numde<< " "<<endl;
         }
  else if (choix==2){

             numde1=rand()%6+1;
                cout<< " le nombre du premier de est  "<< numde1<<endl;
             numde2=rand()%6+1;
              cout << "  le nombre du deuxieme de est     "<< numde2 << " "<<endl;
              if (numde2!=numde1){
                numde=numde1+numde2;
                cout<<" la somme des deux des "<< numde<<endl;
              }
              else if(numde1==numde2){
                numde= -(numde1+numde2);
                cout<<"les deux des sont egales alors vous aurez une dimunitiom du score de "<< numde <<endl;
              }

    }
    else {
        cout<< " une erreur est produite choisissez le numero 1 ou 2"<< endl;
    }
    return (numde);
}



int player_turn(){
      int choix;
      int score;

      cout<<" vou voulez jouer avec un ou deux des ?"<<endl;
      cin>> choix;
      score=0;
      score=throw_dice(choix);


 return (score);


}

 int main(){
     int score1, score2;
     int i=1;
     score1=score2=0;
     while( score1<30 && score2<30)
     {

          if ( i%2==1){
            cout << " c'est le tour du premier joueur "<<endl;
            score1+=player_turn();
            cout << " le score du premier joueur est arrive a "<<score1<<endl;
            cout << "    "<< endl;
            cout<<" -----------------------------" << endl;
            cout<< "      "<< endl;
         }
         else if (i%2==0){
            cout<<" c'est le tour du deuxieme  joueur"<<endl;
            score2+=player_turn();
            cout<< "le score de deuxieme est arrive a   "<<score2<<endl;
            cout << "  "<<endl;
            cout<<"------------------------------"<<endl;
            cout <<"   "<<endl;

           }
    i++;

     }
     if (score1>=30&&score2>=30){
          cout << " c'est une egalite  le match est nul "<<endl;
     }
     else if( score1>=30&&score2<30){
          cout << " c'est le le joueur 1  qui gagne "<<endl;

     }
     else
        cout << " c'est le joueur 2 qui gagne "<<endl;

     return 0;


 }
