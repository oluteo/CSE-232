// WRITE YOUR CODE HERE
#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
 char x;
 char prev = '\0';
//noskipws
while(cin>>std::noskipws>>x){
  
  if(std::isalpha(x)&& !std::isalpha(prev)){
    cout<<x;
    

  }
  prev = x;
 }

}
