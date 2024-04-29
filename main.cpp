/* https://github.com/ND33333/zybooks28.14
Team: Nikoloz Baramidze */
#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

void PrintMenu() {
   /* Type your code here */
   
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   
}

int main() {
   /* Type your code here */
   string name;
   string date;
   cout<<"Enter customer's name:"<<endl;
   getline(cin, name);
   cout<<"Enter today's date:"<<endl;
   getline(cin, date);
   cout<<endl;
   cout<<"Customer name: "<<name<<endl;
   cout<<"Today's date: "<<date<<endl;
   ShoppingCart cart=ShoppingCart(name, date);
   
   return 0;
}