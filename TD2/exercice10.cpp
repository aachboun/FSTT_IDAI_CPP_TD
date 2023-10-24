#include<iostream>
using namespace std;

 
 class personne{
 	private:
 		string nom , prenom;
 		int date_n;
 	public:
 		personne(){
 			nom="";
 			prenom="";
 			date_n=0;
		 }
 	     personne(string Nom,string Prenom,int Date_n){
 	    	nom=Nom;
 	    	prenom=Prenom;
 	    	date_n=Date_n;
 	    	
		 }	
		
		
		void afficher(){
			cout<< " le nom de la personne est "<<nom<<endl;
			cout<< " le prenom de la personne est "<<prenom<<endl;
			cout<< " la date de naissance  de la personne est "<<date_n<<endl;
		}	
 };
 
 class Employe : public personne {
 	private:
 		double salaire;
 	public :
 		Employe(){
 			salaire=0;
		 }
		Employe(string Nom,string Prenom,int Date_n,double Salaire):personne(Nom,Prenom,Date_n){
			salaire=Salaire;
		  }
		void afficher(){
			personne::afficher();
			cout<< " le salaire de l'employe est "<<salaire<<endl;
		}	
	};	 
   class chef : public Employe{
 	private:
 		string service ;
 	public :
 		chef(){
 			service="";
		 }
		chef(string Nom,string Prenom,int Date_n,double Salaire,string Service):Employe( Nom,Prenom,Date_n,Salaire){
			service=Service;
		  }
		void afficher(){
			Employe::afficher();
			cout<< " le service est  "<<service<<endl;
		}	
	};	 
	class Directeur : public chef{
 	private:
 		string societe ;
 	public :
 		Directeur(){
 			societe="";
		 }
		Directeur(string Nom,string Prenom,int Date_n,double Salaire,string Service,string Societe):chef( Nom,Prenom,Date_n,Salaire,Service){
			societe=Societe;
		  }
		void afficher(){
			chef::afficher();
			cout<< " la societe ou travaille le directeur est  "<<societe<<endl;
		}	
	};
	
	int main (){
		personne Mypersonne("Mohammed","Bouazza",2003);
		Employe MyEmploye("Aymane","Rihane",2003,3000);
		chef Mychef("Akram","Eddaibouni",2003,10000,"developpement");
		Directeur MyDirecteur("Aachboun","Redouan",2003,300000,"cyber","Micrososft");
		
		Mypersonne.afficher();
		MyEmploye.afficher();
		Mychef.afficher();
		MyDirecteur.afficher();		
		
	return 0;	
	} 
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 
