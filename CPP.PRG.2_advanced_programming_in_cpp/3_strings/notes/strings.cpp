#include<iostream>
#include<string>
using namespace std;

int main(){
  string userName; //str
  int ind;

  cout<<"Please enter weigth in kilograms"<<endl;
  // cin>>str; //space-separated input gets (first item)
  // getline(cin, str); // to get the whole line from user
  getline(cin,userName);

  for (ind = userName.length(); ind>=0; ind--){
    cout<<userName[ind];
  }
  cout<<endl;

  //substrings:
  // str.substr(2,3); //(index, length)

  //length
  // str.length();

  //searching
  // index of first occurance = str.find(substring) 
  // or str.find(substring,startIndex)
  // if not found returns -> string::npos 
  // can do:
  /*
    string str = "abcdefg";
    if (str.find("xyz")== string::npos) 
      cout<<"Not found"<<endl;
  */



  return 0;
}

int practice(){
  string word1, word2, word3;

  cout<<"Please enter 3 workds sparated by a space:"<<endl;
  cin>>word1>>word2>>word3; //get three space-separated words from user


  
}