// WRITE YOUR CODE HERE
#include <iostream>
using std::cout;
using std::cin;
using std::endl;



int main(){
int x;
cin>>x;
cout<<2*x;




}
int Triple(int x){

cin>>x;
return 3*x;




}

int Closest_Multiple_Of_13(int x){
int up = x;
int up_count = 0;
int down = x;
int down_count=0;
while ((up%13) != 0){
  up+=1;
  up_count++;
}
while ((down%13) != 0){
  down-=1;
  down_count++;


}

if (down_count>up_count){
  return up;
}
else{
  return down;
}
}
