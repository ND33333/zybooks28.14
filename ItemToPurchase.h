/* Type your code here */
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase{
   private:
      string itemName;
      int itemPrice;
      int itemQuantity;
      string itemDescription;
      
      public:
      ItemToPurchase();
      ItemToPurchase(string name, string description, int price, int quantity);
      void SetName(string newName);
      string GetName();
      void SetPrice(int newPrice);
      int GetPrice();
      void SetQuantity(int newQuantity);
      int GetQuantity();
      void SetDescription(string description);
      string GetDescription();
      void PrintItemCost();
      void PrintItemDescription();
};

#endif