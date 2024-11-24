#include <iostream>
#include <string>

using namespace std;

class Transport {
public:

    Transport() {
        type = "Транспортний засіб";
    }
      
    void show() {
        cout << "Тип: " << type << endl;
    }

protected:
    string type;
};

class Car : public Transport {
public:
    Car() {
        type = "Автомобіль";
    }

    void show() {
        cout << "Тип: " << type << endl;
    }

};

class Train : public Transport {
public:
    Train() {
        type = "Потяг";
    }

    void show() {
        cout << "Тип: " << type << endl;
    }

};

class Express : public Train {
public:
    Express() {
        type = "експрес Потяг";
    }

    void show() {
        cout << "Тип: " << type << endl;
    }
};



int main()
{
    setlocale(LC_ALL, "ukr");

    Transport tr;
    Car car;
    Train train;
    Express expr;

    tr.show();
    car.show();
    train.show();
    expr.show();
}

