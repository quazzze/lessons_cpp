#include <iostream>
#include <string.h>
using namespace std;

// 1. Создать класс Tiles (кафель), который будет содержать поля с открытым доступом: 
// brand, size_h, size_w, price и метод класса getData(). В главной функции объявить 
// пару объектов класса и внести данные в поля. Затем отобразить их, вызвав метод getData().

class Tiles{
public:
    char brand[23];
    int size_h;
    int size_w;
    double price;
    void GetData();
};

int main(){
    Tiles KERAMA_MARAZZI;
    strcpy_s(KERAMA_MARAZZI.brand, "KERAMA MARAZZI");
    KERAMA_MARAZZI.size_h = 10;
    KERAMA_MARAZZI.size_w = 10;
    KERAMA_MARAZZI.price = 30;

    Tiles SaloniCeramica;
    strcpy_s(SaloniCeramica.brand, "Saloni Ceramica");
    SaloniCeramica.size_h = 25;
    SaloniCeramica.size_w = 25;
    SaloniCeramica.price = 50;

    KERAMA_MARAZZI.GetData();
    SaloniCeramica.GetData();

    return 0;    
}

void Tiles::GetData(){
    cout << brand << ": " << size_h << "x" << size_w << " - " << price << "$" << endl; 
};