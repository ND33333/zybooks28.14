/* Type your code here */
#include <iostream>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase(){
   itemName="";
   itemPrice=0;
   itemQuantity=0;
   itemDescription="none";
}
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity){
   itemName=name;
   itemPrice=price;
   itemQuantity=quantity;
   itemDescription=description;
}
void ItemToPurchase::SetName(string newName){
   itemName=newName;
}
string ItemToPurchase::GetName(){
   return itemName;
}
void ItemToPurchase::SetPrice(int newPrice){
   itemPrice=newPrice;
}
int ItemToPurchase::GetPrice(){
   return itemPrice;
}
void ItemToPurchase::SetQuantity(int newQuantity){
   itemQuantity=newQuantity;
}
int ItemToPurchase::GetQuantity(){
   return itemQuantity;
}
void ItemToPurchase::SetDescription(string description){
   itemDescription=description;
}
string ItemToPurchase::GetDescription(){
   return itemDescription;
}
void ItemToPurchase::PrintItemCost(){
   cout<<itemName<<" "<<itemQuantity<<" @ $"<<itemPrice<<" = $"<<itemQuantity*itemPrice<<endl;
}
void ItemToPurchase::PrintItemDescription(){
   cout<<itemName<<": "<<itemDescription<<endl;
}