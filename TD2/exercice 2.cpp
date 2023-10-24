#include <iostream>

using namespace std;
int multip_2( int x){

    if (x%2==0){

    cout<< " ce nombre est multiple de 2 "<<endl;
    }
    return 2;

    }

int multip_3( int x ){
    if (x%3==0){
        cout <<"ce nombre est multiple de 3 "<< endl;
    }
    return 3;

}

int main()
{
    int x;

      cout<< " donnez la valeur de x "<<endl;
      cin>>x;
      if(x%2==0&&x%3==0){
            cout<< " ce nombre est pair "<<endl;
            cout<< " ce nombre est divisible par3"<<endl;
          cout << " ce nombre est divisible par 6 "<<endl;
      }
      else{

       multip_2(x);
       multip_3(x);
      }
return 0;
}
