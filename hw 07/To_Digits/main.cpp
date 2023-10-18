#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


void To_Single_Digits (string &x,string digit_str,string digit) {
string::size_type find_x; 
string conv_x = "";
for (char C:x){
  conv_x += std::tolower(C);

}
find_x = conv_x.find(digit_str);
int count = 0;
int length_str = digit_str.size();
while (find_x !=string::npos){
  x.replace(find_x -(length_str-1)*count,length_str,digit);
 find_x = conv_x.find(digit_str, find_x + 1);
 count++;
}


}
void To_Digits(string &input){
  To_Single_Digits(input,"zero","0");
  To_Single_Digits(input,"one","1");
  To_Single_Digits(input,"two","2");
  To_Single_Digits(input,"three","3");
  To_Single_Digits(input,"four","4");

  To_Single_Digits(input,"five","5");
  To_Single_Digits(input,"six","6");
  To_Single_Digits(input,"seven","7");
  To_Single_Digits(input,"eight","8");
  To_Single_Digits(input,"nine","9");
  
}

