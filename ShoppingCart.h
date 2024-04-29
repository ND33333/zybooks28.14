/* Type your code here */
#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <vector>
#include <string>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
class ShoppingCart{
   private:
      string customerName;
      string currentDate;
      vector<ItemToPurchase> cartItems;
      
      public:
      ShoppingCart();
      ShoppingCart(string name, string date);
      string GetCustomerName();
      string GetDate();
      void AddItem(ItemToPurchase item);
      void RemoveItem(string name);
      void ModifyItem(ItemToPurchase item);
      int GetNumItemsInCart();
      int GetCostOfCart();
      void PrintTotal();
      void PrintDescriptions();

      
};

#endif