#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Car 
{
private:
    string name;
    int year;
    double price;
public:
    Car(const string& name, int year, double price);
    string getName() const;
    int getYear() const;
    double getPrice() const;
};

