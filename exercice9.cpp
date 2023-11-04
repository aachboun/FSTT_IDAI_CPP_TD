#include<iostream>
using namespace std;
template <class T> class point
{ T x, y ; // coordonnees
public :
point (T abs, T ord) { x = abs ; y = ord ; }
void affiche () ;
} ;
template <class T> void point<T>::affiche ()
{ cout << "Coordonnees : " <<static_cast<int> (x) << " " <<static_cast<int> (y) << "\n" ;
}
/* dans ce cas ona le type dans le main est char alors les nombres declarer se comverti  en code ASCII 
ce qui nous donne :
 cordonnee : < A     
 alors pour que ce programme s'affiche correctement ila faut qu'on declare la fct static_cast dans la fonction template
 pour que dans la prochaine fois peu importe le type des variables declarer dans le main ils seront convertit ene entier 
 une fois qu'on appel la fct template 
 
 */

int main(){
   
     point<char> p(60,65);
     p.affiche () ;
}