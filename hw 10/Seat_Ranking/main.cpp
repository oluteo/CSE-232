// WRITE YOUR CODE HERE
#include <iostream>
#include<vector>
#include<ostream>
#include<sstream>
#include<string>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::istringstream;
using std::ostringstream;
using std::vector;
using std::getline;
using std::pair;
using std::to_string;
void print_table(vector<vector<int>> vect2, vector<pair<int, int>> coords){



  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 20; ++j) {
        //bool is_ast = false;
        for (int k=0; k<int(coords.size()); k++){
          pair coord = coords[k];
          int x = coord.first;
          int y = coord.second;
         
          if(y==10-i-1 && x==j){
            vect2[i][j] = -1;
            //is_ast = true;
            
          }
        }

       
    }
    
  }

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 20; ++j) {


        if(i-1>=0 ){
              if (vect2[i-1][j] %5 != 0){
            (vect2[i][j]) -= 40;
          }

          }
          if(j-1>=0){
                if (vect2[i][j-1] %5 != 0){
            vect2[i][j] -= 40;
          }

          }
           if(j-1>=0&&i-1>=0){ 

              if (vect2[i-1][j-1] %5 != 0){
            vect2[i][j] -= 20;
          }
           }
          if(i-1>=0&&j+1<20){
            if (vect2[i-1][j+1] %5 != 0){
            vect2[i][j] -= 20;
          }
          }
            if(i+1<10&&j-1>=0){
               if (vect2[i+1][j-1] %5 != 0){
            vect2[i][j] -= 20;
          }
            }
           
            
          if(i+1 <10){
            if (vect2[i+1][j] %5 != 0){
            vect2[i][j] -= 40;
          }
          }
          if(j+1 <20){
          if (vect2[i][j+1] %5 != 0){
            vect2[i][j] -= 40;
          }
          }
          if(i+1<10&&j+1<20){
          if (vect2[i+1][j+1] %5 != 0){
            vect2[i][j] -= 20;
          }
          }
          

          if(i-2>=0 ){
                if (vect2[i-2][j] %5 != 0){
            vect2[i][j] -= 20;
          }

          }
          if(j-2>=0 ){
              if (vect2[i][j-2]%5 != 0){
            vect2[i][j] -= 20;
          }

          }

        

          
          if(i+2 <10){
            if (vect2[i+2][j] %5 != 0){
            vect2[i][j] -= 20;
          }

          }
          if(j+2<20){
            if (vect2[i][j+2] %5 != 0){
            vect2[i][j] -= 20;
          }
          }














    }
  }

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 20; ++j) {


 if ((vect2[i][j] %5) == 0){
          
          std::cout<<" " << std::setw(3) << vect2[i][j]<<",";
        }
          
        else {
          
          std::cout<<" " << std::setw(3) <<"*"<<",";
        }



    }
    cout<<endl;
}
}


int main(){
  vector<int> vect1;
  vector<vector<int>> vect2;
  int start = 55;
  for(int i = 0;i<10;++i ){
    for(int j = 0;j<20;++j ){
      vect1.push_back(start);
    }
    start+=5;
    vect2.push_back(vect1);
    vect1.clear();
  }
  
  

  vector<pair<int, int>> coords;
  string line;
  // Helped by Height
  while(getline(cin, line)){
    istringstream iss(line);
    char openb, comma, closeb;
    int x, y;
    iss >> openb >> x >> comma >> y >> closeb;
    coords.push_back({x, y});
  }

 /* for(int i=0; i < int(coords.size()); i++){
    pair coord = coords[i];
    int x, y;
    x = coord.first;
    y = coord.second;
    cout << x << "," << y << "\n";
  }*/

  print_table(vect2, coords);
  
  return 0;
}