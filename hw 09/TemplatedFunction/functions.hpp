// WRITE YOUR CODE HERE
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

template <typename tmplt_type>

tmplt_type Increment(tmplt_type x){
return x+1;


}

template <typename tmplt_type>

std::string AddToString(const std::string &s, tmplt_type y){

return s + std::to_string(y);


}