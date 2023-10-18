// WRITE YOUR CODE HERE
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
    int rowstart, rowend, colstart, colend;

    cin >> rowstart >> rowend;
    cin >> colstart >> colend;

    for (int i = colstart; i<=colend; i++){
      for (int j = rowstart; j <= rowend; j++) {
            if (j!=rowend){
            cout << i << "*" << j << "=" << (i * j)<<", ";
            }
            else if (j == rowend) {
                cout << i << "*" << j << "=" << (i * j)<<"\n";
            }


    }
}
}