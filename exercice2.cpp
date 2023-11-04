#include<iostream>
#include<list>
#include<iterator>
using namespace std;
 
void showlist(list<int>g){
	list<int>::iterator it;
	for ( it = g.begin(); it !=g.end(); ++it)
	{
		cout<<'\t'<<*it <<endl;
	}
	cout<<'\n'<<endl;
}
void tri_bull(list<int>g){
	  list<int>::iterator it;
	  list<int>::iterator ip=it;
	  for ( it = g.begin() ; it!=g.end() ; ++it)
	  {
		for (ip = it; ip!= g.end(); ++ip)
		{	
		  if(*it>*ip){
			swap(*it,*ip);
		 }
		}
	  }
	  for ( it = g.begin(); it!=g.end() ; ++it)
	  {
		cout<<'\t'<<*it<<endl;
	  }
	  cout<<'\n'<<endl;
}
void tri_selection(list<int>g){
      list<int>::iterator it;
	  list<int>::iterator ip=it;
	  
	  for ( it = g.begin(); it!=g.end() ; ++it)
	  {
		list<int>::iterator min=it;
         for ( ip = it; ip!=g.end() ; ++ip)
		 {
			if (*min>*ip)
			{
				min=ip;
			}	
		 }
		 if (min!=it)
		 {
			swap(*it,*min);
		 }
	  }
	  for ( it = g.begin(); it!=g.end() ; ++it){
		cout<<'\t'<< *it<<endl;
	  }
	  cout<<'\n'<<endl;
}


void tri_insertion(list<int>& g){
  list <int> :: iterator it;
  for(it=next(g.begin());it!=g.end();it++){
    int tmp=*it;
    list <int> :: iterator ip=it;
    while(*prev(ip)>tmp){
      *ip=*prev(ip);
      ip=prev(ip);
    }
    *ip=tmp;
  }
 }


int main(){
     
	 list<int>lst;
	 int n;
	 for (int i = 0; i < 5; i++)
	 {
		cout<<" donez la valeur de la lsite"<<endl;

		cin>>n;
		lst.push_back(n);
	 }
	
	 showlist(lst);
	tri_bull(lst);
	tri_selection(lst);
	 tri_insertion(lst);

  return 0;
}