#include<iostream>
#include<string>
using namespace std;

int main() {
  char input;
  int charVal;
  string type;
  cout<<"Enter a character: ";
  cin>>input;

  charVal = (int)input;

  if (charVal >= 48 && charVal <= 57){
    type = "a digit";
  } else if (charVal >= 65 && charVal <= 90){
    type = "an upper case letter";
  } else if (charVal >= 97 && charVal <= 122){
    type = "a lower case letter";
  } else {
    type = "a non-alphanumeric character";
  }

  cout<<input<<" is "<<type<<"."<<endl;

  return 0;
}