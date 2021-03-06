#include "Order.h"

Order::Order(std::vector<Item> items) 
    : _items{items} { }

void Order::addItem(Item item) { _items.push_back(item); }

double Order::getPrice() {
    double totalPrice = 0;

    for (int i = 0; i < _items.size(); i++) {
        totalPrice += _items[i].getPrice();
    }

    return totalPrice;
}