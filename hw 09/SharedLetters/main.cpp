// WRITE YOUR CODE HERE
#include <iostream>
#include <string>
#include <algorithm>
using std::cout;
using std:: cin;
using std::endl;
using std::string;

string SharedLetters(const string &str1, const string str2, const string *str3){
string result;
size_t max1 = std::max(str1.size(), std::max(str2.size(), str3->size()));
size_t min1 = std::min({str1.size(), str2.size(), str3->size()});
for (size_t i = 0; i < max1; i++) {
        
         if (i>=min1 && ((str1.size()<max1 && str2.size()<max1)||(str1.size()<max1 && str3->size()<max1)||(str2.size()<max1 && str3->size()<max1))){
            result += "0,";
            continue;

        }
        
        else if (str1[i] == str2[i] && str2[i] == (*str3)[i]&& str1[i] == (*str3)[i]) {
            result += "3,";
            continue;
        } else if (str1[i] == str2[i] || str2[i] == (*str3)[i] || str1[i] == (*str3)[i]) {
            result += "1,";
        } 
        
        
        else {
            result += "0,";
        }
        

        
    }

   
return result;
}

int main() {
    string word1, word2, word3;

    
    cin >> word1 >> word2 >> word3;

    string ans = SharedLetters(word1, word2, &word3);
   
    cout << ans << endl;

    return 0;
}