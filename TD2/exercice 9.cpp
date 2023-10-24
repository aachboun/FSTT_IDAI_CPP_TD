#include<iostream>
using namespace std;

class Animal{
	private:
		string nom ;
		int age;
	public:
	void set_value(string Nom,int Age){
		nom=Nom;
		age=Age;
	}
	int get_value1(){
		return age;
	}
	string get_value2(){
		return nom;
	}	
};
 class zebra : public Animal {
	 private:
	 	string lieu;
	public:
	 void set_lieu( string Lieu){
			lieu=Lieu;
		}
	void affichage(){
	
	    cout<< "l'age de l'animal est'' "<<get_value1()<< endl;
	    cout <<" le nom de l'animale est "<<get_value2()<<endl;
		 cout<< " le lieu d'origine est "<<lieu<<endl;
     }
	 
	     
};
class dolphin : public Animal{
	  private:
	 	string lieu;
	public:
	void 	set_lieu( string Lieu){
			lieu=Lieu;
		}
	void affichage(){
	
	    cout<< "l'age de l'animal est'' "<<get_value1()<< endl;
	    cout <<" le nom de l'animale est "<<get_value2()<<endl;
		 cout<< " le lieu d'origine est "<<lieu<<endl;
     }
};
int main(){
	int dpage,zbage;
   string dpnom,zbnom,zblieu,dplieu;

    zebra Myzebra;
    dolphin Mydolphin;
    cout <<"entrer le nom du zebra "<<endl;
    cin >> zbnom;
    cout<<"entrer l'age du zebra "<<endl;
    cin >> zbage;
    cout<<"entrer le liey du zebra "<<endl;
    cin >> zblieu;
    cout<<"entrer le nom du dolphin "<<endl;
    cin >> dpnom;
    cout<<"entrer l'age du dolphin "<<endl;
    cin >> dpage;
	 cout<<"entrer lieu du dolphin"<<endl;
    cin >> dplieu;
    
	Myzebra.set_value(zbnom,zbage);
	Myzebra.set_lieu(zblieu);
	Mydolphin.set_value(dpnom,dpage);
	Mydolphin.set_lieu(dplieu);
	

	
	
	  Myzebra.affichage();
	  Mydolphin.affichage();
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

