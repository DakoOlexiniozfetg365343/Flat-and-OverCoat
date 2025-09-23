 #ifndef FLAT_H
#define FLAT_H

#include <iostream>
using namespace std;

class Flat {
private:
    double area;
    int price;

public:
    Flat(const double &flatArea, const int &flatPrice);
    explicit Flat(const double &flatArea);
    Flat();

    void setArea(const double &area);
    void setPrice(const int &price);

    double getArea() const;
    int getPrice() const;

    bool operator==(const Flat &other) const;
    Flat &operator=(const Flat &other);
    bool operator>(const Flat &other) const;

    friend ostream &operator<<(ostream &os, const Flat &other);
};

#endif
