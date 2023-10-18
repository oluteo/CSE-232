// WRITE YOUR CODE HERE
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

double Centrifuge(int &time, int &ore, double *u_238 ){
   //int cycles_time = time/12;
   //int cycles_ore = ore/10;
  double u_235 = 0;
  
  
    while (time >= 12 && ore >= 10) {
        time -= 12;
        ore -= 10;
        u_235 += 0.007;
        *u_238 += 0.993;
    }

    return u_235;
}

  
  




