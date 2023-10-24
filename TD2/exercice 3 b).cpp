#include<iostream>
using namespace std;



int main(){
    int table[10];
    int* pmax,* pmin,* i;
    for(i=table;i<=table+10-1;i++){
       cout<<"saisir case  : ";
       cin>>*i;
    }
    *pmax=0;
    for(i=table;i<=table+10-1;i++){
        if(*i>*pmax){
            *pmax=*i;
        }
        if(*pmin >*i){
            *pmin = *i;
        }
    }
        cout<<"la valeur max est : "<<*pmax<<" sa position est "<<pmax<<endl;
        cout<<"la valeur min est : "<<*pmin <<" sa position est "<<pmin<<endl;
        return 0;
}

