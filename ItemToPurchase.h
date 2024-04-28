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
      
      public:
      ItemToPurchase();
      void SetName(string newName);
      string GetName();
      void SetPrice(int newPrice);
      int GetPrice();
      void SetQuantity(int newQuantity);
      int GetQuantity();
};

#endif