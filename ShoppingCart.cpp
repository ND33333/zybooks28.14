/* Type your code here */
#include <iostream>
using namespace std;


#include "ShoppingCart.h"
#include "ItemToPurchase.h"

ShoppingCart::ShoppingCart(){
   customerName="none";
   currentDate="January 1, 2016";
}
ShoppingCart::ShoppingCart(string name, string date){
   customerName=name;
   currentDate=date;
}
string ShoppingCart::GetCustomerName(){
   return customerName;
}

string ShoppingCart::GetDate(){
   return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item){
   cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string name){
   for(int i=0; i<cartItems.size(); i++){
      if (cartItems.at(i).GetName()==name){
         cartItems.erase(cartItems.begin()+i);
         return;
      }
   }
   cout<<"Item not found in cart. Nothing removed."<<endl;
}
void ShoppingCart::ModifyItem(ItemToPurchase item){
   for(int i=0; i<cartItems.size(); i++){
      if (cartItems.at(i).GetName()==item.GetName()){
         if(item.GetName()!=""){
            cartItems.at(i).GetName()=item.GetName();
         }
         if(item.GetDescription()!="none"){
            cartItems.at(i).SetDescription(item.GetDescription());
         }
         if(item.GetPrice()!=0){
            cartItems.at(i).SetPrice(item.GetPrice());
         }
         if(item.GetQuantity()!=0){
            cartItems.at(i).SetQuantity(item.GetQuantity());
         }
         return;
      }
   }
   cout<<"Item not found in cart. Nothing modified."<<endl;
}

int ShoppingCart::GetNumItemsInCart(){
   return cartItems.size();
}
int ShoppingCart::GetCostOfCart(){
   int cost=0;
   for(int i=0; i<cartItems.size(); i++){
      cost=cost+(cartItems.at(i).GetPrice()*cartItems.at(i).GetQuantity());
   }
   return cost;
}
void ShoppingCart::PrintTotal(){
   int total=0;
   for(int i=0; i<cartItems.size(); i++){
      total=total+cartItems.at(i).GetQuantity();
   }
   
   cout<<customerName<<"'s Shopping Cart - "<<currentDate<<endl;
   cout<<"Number of Items: "<<total<<endl<<endl;
   if(total==0){
      cout<<"SHOPPING CART IS EMPTY"<<endl;
   }
   for(int i=0; i<cartItems.size(); i++){
      cout<<cartItems.at(i).GetName()<<" "<<cartItems.at(i).GetQuantity()<<" @ $"<<cartItems.at(i).GetPrice()<<" = $"<<cartItems.at(i).GetPrice()*cartItems.at(i).GetQuantity()<<endl;
   }
   cout<<endl;
   cout<<"Total: $"<<GetCostOfCart()<<endl<<endl;
}

   
   
void ShoppingCart::PrintDescriptions(){
   cout<<customerName<<"'s Shopping Cart - "<<currentDate<<endl<<endl;
   cout<<"Item Descriptions"<<endl;
   if(cartItems.size()==0){
      cout<<"SHOPPING CART IS EMPTY"<<endl;
   }
   for(int i=0; i<cartItems.size(); i++){
      cout<<cartItems.at(i).GetName()<<": "<<cartItems.at(i).GetDescription()<<endl;
   }
   cout<<endl;
}
   
   