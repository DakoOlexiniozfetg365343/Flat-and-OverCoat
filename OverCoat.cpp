#include "OverCoat.h"

OverCoat::OverCoat(const string &type, const double &coatPrice) : coatType(type), price(coatPrice) {}
OverCoat::OverCoat(const string &type) : OverCoat(type, 0) {}
OverCoat::OverCoat() : OverCoat("No Type", 0) {}

void OverCoat::setType(const string &type) {
    coatType = type;
}

void OverCoat::setPrice(const double &coatPrice) {
    price = coatPrice;
}

string OverCoat::getType() const {
    return coatType;
}

double OverCoat::getPrice() const {
    return price;
}

bool OverCoat::operator==(const OverCoat &other) const {
    return coatType == other.coatType;
}

OverCoat &OverCoat::operator=(const OverCoat &other) {
    if (this != &other) {
        coatType = other.coatType;
        price = other.price;
    }
    return *this;
}

bool OverCoat::operator>(const OverCoat &other) const {
    return price > other.price;
}

ostream &operator<<(ostream &os, const OverCoat &coat) {
    os << "Type: " << coat.coatType << " Price: " << coat.price << "$$$";
    return os;
}
