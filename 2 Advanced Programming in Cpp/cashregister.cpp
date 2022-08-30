#include<iostream>
#include<string>
using namespace std;

int main(){
  float firstItemPrice, secondItemPrice, taxRate, basePrice, discountedPrice, total;
  string hasClubCard;

  cout<<"Enter price of the first item: "<<endl;
  cin>>firstItemPrice;
  cout<<"Enter price of the second item: "<<endl;
  cin>>secondItemPrice;
  cout<<"Does customer have a club card? (Y/N): "<<endl;
  cin>>hasClubCard;
  cout<<"Enter tax rate, e.g. 5.5 for 5.5"<<"% "<<"tax: "<<endl;
  cin>>taxRate;

  basePrice = firstItemPrice + secondItemPrice;
  
  // Discounts
  if (firstItemPrice > secondItemPrice){
    secondItemPrice *= 0.5;
  } else if (firstItemPrice <= secondItemPrice) {
    firstItemPrice *= 0.5;
  }
  discountedPrice = secondItemPrice + firstItemPrice;
  if (hasClubCard == "y"|| hasClubCard == "Y"){
    discountedPrice *= 0.9;
  }
  
  //Tax
  total = discountedPrice + (discountedPrice*(taxRate/100));

  printf("Base price = %.2f\n",basePrice);
  printf("Price after discounts = %.2f\n",discountedPrice);
  printf("Total price = %.2f\n", total);

  return 0;
}