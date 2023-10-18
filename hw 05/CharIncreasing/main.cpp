// WRITE YOUR CODE HERE
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
char c;
char c_pre = '\0';
cin>>std::noskipws;
while (cin>>c){


if (c == '\n'){
   cout<<c; 
   c_pre = '\0';
  }

else  if ( (c > c_pre|| c_pre == '\0')){
  
  cout<<c;
  c_pre = c;
}

else{
  cout<<"_";
}
c_pre = c;
}





}