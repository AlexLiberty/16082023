#include "Car.h"

Car::Car(const string& name, int year, double price)
    : name(name), year(year), price(price) {}

string Car::getName() const
{
    return name;
}

int Car::getYear() const
{
    return year;
}

double Car::getPrice() const
{
    return price;
}
