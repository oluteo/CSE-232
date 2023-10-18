// WRITE YOUR CODE HERE
#include <iostream>
#include<vector>
#include<ostream>
#include<sstream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::istringstream;
using std::ostringstream;
using std::vector;
using std::getline;

int main(){
string name,hp,use_name,use_hp;
int first = 0;
string max;
vector<string> vect1;
vector<string> vect2;
vector<string> vect3;

getline(cin,name);
getline(cin,hp);

istringstream iss_name (name);
istringstream iss_hp (hp);
getline(iss_name,use_name,':');
cout<<use_name<<",";
getline(iss_hp,use_hp,':');
cout<<use_hp<<","<<endl;
while(getline(iss_name,use_name,',')){

vect1.push_back(use_name);

}
  
while(getline(iss_hp,use_hp,',')){

vect2.push_back(use_hp);

}
for(size_t i = 0; i < vect1.size();++i ){
 cout <<vect1[i]<<","<<vect2[i]<<","<<endl;



}
cout<<endl;
    vect3=vect2;
     for(size_t i = 0;i < vect1.size();++i) {
      int changed =  std::stoi(vect3[i]);
        
        if ( changed> first){
          first = changed;
          max = vect1[i];
        }
      
    }

      cout<<"Max:"<<endl;
      cout<<max<<","<<first<<",";





  return 0;
}