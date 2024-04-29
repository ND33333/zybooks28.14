/* https://github.com/ND33333/zybooks28.14
Team: Nikoloz Baramidze */
#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

void PrintMenu() {
   /* Type your code here */
   cout<<"MENU"<<endl;
   cout<<"a - Add item to cart"<<endl;
   cout<<"d - Remove item from cart"<<endl;
   cout<<"c - Change item quantity"<<endl;
   cout<<"i - Output items' descriptions"<<endl;
   cout<<"o - Output shopping cart"<<endl;
   cout<<"q - Quit"<<endl<<endl;
   
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */

   if(option=='q'){
      return;
   }
   
   else if(option=='a'){
      string name;
      string description;
      int price;
      int quantity;
      cout<<"ADD ITEM TO CART"<<endl;
      cout<<"Enter the item name:"<<endl;
      cin.ignore();
      getline(cin, name);
      cout<<"Enter the item description:"<<endl;
      getline(cin, description);
      cout<<"Enter the item price:"<<endl;
      cin>>price;
      cout<<"Enter the item quantity:"<<endl<<endl;
      cin>>quantity;
      ItemToPurchase item=ItemToPurchase(name, description, price, quantity);
      theCart.AddItem(item);
   }
   else if(option=='d'){
   }
   else if(option=='c'){
   }
   else if(option=='i'){
      cout<<"OUTPUT ITEMS' DESCRIPTIONS"<<endl;
      theCart.PrintDescriptions();
   }
   else if(option=='o'){
      cout<<"OUTPUT SHOPPING CART"<<endl;
      theCart.PrintTotal();
   }
   
}

int main() {
   /* Type your code here */
   string name;
   string date;
   string description;
   char option;
   int price;
   int quantity;
   cout<<"Enter customer's name:"<<endl;
   getline(cin, name);
   cout<<"Enter today's date:"<<endl;
   getline(cin, date);
   cout<<endl;
   cout<<"Customer name: "<<name<<endl;
   cout<<"Today's date: "<<date<<endl;
   cout<<endl;
   ShoppingCart cart=ShoppingCart(name, date);
   do{
      PrintMenu();
      cout<<"Choose an option:"<<endl;
      cin>>option;
      while(option!='a'&&option!='d'&&option!='c'&&option!='i'&&option!='o'&&option!='q'){
         cout<<"Choose an option:"<<endl;
         cin>>option;
      }
      ExecuteMenu(option, cart);
   }while(option!='q');
   
   return 0;
}