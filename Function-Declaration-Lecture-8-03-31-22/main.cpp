#include <iostream>
using namespace std;

//function declaration 

double calculateProfit(double cost, double price);

int main() {

  double itemCost, itemPrice;

  cout << "Enter the cost:";

  cin >> itemCost;

  cout << "Enter the price:";

  cin >> itemPrice;  

  cout << calculateProfit(itemCost, itemPrice);


  return 0;

}

double calculateProfit(double cost, double price){

 return price - cost;

} 

