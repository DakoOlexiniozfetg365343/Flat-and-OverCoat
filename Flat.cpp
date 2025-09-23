#include "Flat.h"

Flat::Flat(const double &flatArea, const int &flatPrice) : area(flatArea), price(flatPrice) {}
Flat::Flat(const double &flatArea) : Flat(flatArea, 0) {}
Flat::Flat() : Flat(0, 0) {}

void Flat::setArea(const double &area) {
    this->area = area;
}

void Flat::setPrice(const int &price) {
    this->price = price;
}

double Flat::getArea() const {
    return area;
}

int Flat::getPrice() const {
    return price;
}

bool Flat::operator==(const Flat &other) const {
    return this == &other;
}

Flat &Flat::operator=(const Flat &other) {
    if (this != &other) {
        area = other.area;
        price = other.price;
    }
    return *this;
}

bool Flat::operator>(const Flat &other) const {
    return price > other.price;
}

ostream &operator<<(ostream &os, const Flat &other) {
    os << "Area: " << other.area << "m^2 " << " Price: " << other.price << "$$$";
    return os;
}
