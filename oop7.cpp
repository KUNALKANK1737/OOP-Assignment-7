
#include <iostream>
#include<map>
#include<string>
using namespace std ;
int main() {
 typedef map<string,int>    maptype;
 maptype pop;
 pop.insert(pair<string,int>("Maharashtra",50000));
 pop.insert(pair<string,int>("Gurjrat",6659+0));
  pop.insert(pair<string,int>("Rajasthan",984746));
 pop.insert(pair<string,int>("Goa",65653));
 pop.insert(pair<string,int>("Kerala",50646));
maptype::iterator iter;
string state;
cout<<"Enter the name of the state whos pop is to be finded :";
cin>>state;
iter=pop.find(state);
if(iter!=pop.end()){
    cout<<state<<":"<<iter->second;
    
}
else{
    cout<<"state not found :";
}
 return 0;
}
