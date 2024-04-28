#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase(){
   itemName="";
   itemPrice=0;
   itemQuantity=0;
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
