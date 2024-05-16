#include <iostream>
#include "simcard.h"
using namespace std;

class mobile
{
    int price;
    std::string model;
    std::string color;
    simcard sim;

    public:
    mobile();
    mobile(int , std::string,std::string,int,std::string);
    void display();

    int getPrice() const { return price; }
    void setPrice(int price_) { price = price_; }

    std::string getModel() const { return model; }
    void setModel(const std::string &model_) { model = model_; }

    std::string getColor() const { return color; }
    void setColor(const std::string &color_) { color = color_; }



    // simcard getSimcard() const { return simcard; }
    // void setSimcard(const simcard &simcard_) { simcard = simcard_; }
};


