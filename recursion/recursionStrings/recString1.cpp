#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void recString(string& str, int i , int j){
    if(i>j)
    return;
    swap(str[i],str[j]);
    i++;
    j--;
    recString(str,i,j);
}
int main(){
    string str= "abcde";
    int len= str.length();
    recString(str,0, str.length()-1);
    cout<<str;
}

// #include<iostream>
// #include<string>
// using namespace std;

// string recString(string str, int length) {
//     // Base case: if length is 0, return an empty string
//     if (length == 0)
//         return "";
//     // Recursively call the function, reducing the length by 1
//     // Add the current character at the end of the string being formed
//     return str[length - 1] + recString(str, length - 1);
// }

// int main() {
//     string str = "abcde";
//     int len = str.length();
//     string rev = recString(str,str.length());
//     cout << rev;
//     return 0;
// }
