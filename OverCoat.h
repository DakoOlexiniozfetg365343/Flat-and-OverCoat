#ifndef OVERCOAT_H
#define OVERCOAT_H

#include <iostream>
#include <string>
using namespace std;

class OverCoat {
private:
    string coatType;
    double price;

public:
    OverCoat(const string &type, const double &coatPrice);
    explicit OverCoat(const string &type);
    OverCoat();

    void setType(const string &type);
    void setPrice(const double &coatPrice);

    string getType() const;
    double getPrice() const;

    bool operator==(const OverCoat &other) const;
    OverCoat &operator=(const OverCoat &other);
    bool operator>(const OverCoat &other) const;

    friend ostream &operator<<(ostream &os, const OverCoat &coat);
};

#endif
