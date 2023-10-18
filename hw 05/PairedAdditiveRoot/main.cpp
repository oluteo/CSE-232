#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
	int value{0};
	while (std::cin >> value) {
		
// WRITE YOUR CODE HERE

  if (value<0){
    break;
  }
  int num = value;

  if (value <100 ){
    std::cout << value << std::endl;
    continue;
  }

  else{
    while (num >=100){
      int sum = 0;
      while(num >0){
        sum+= num%100;
        num = num/100;


      }
      num = sum;

    }

  }
  value = num;

	std::cout << value << endl;	
	}
  
}