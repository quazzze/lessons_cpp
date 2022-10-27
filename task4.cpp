#include <iostream>
using namespace std;

class Children {
public:
    void output();
    void input();

private:
    char name[10];
    char surname[10];
    int age;
};

void Children::input(){
    cout << "Name: ";
    cin.getline(name, 32);
    cout << "Surename: ";
    cin.getline(surname, 32);
    cout << "Age: ";
    cin >> age;
    cin.get();
}

void Children::output(){
    cout << "Name: " << name << " Surename: " << surname << " Age: " << age << endl;
}

int main() {
    Children FirstChild;
    Children SecondChild;

    cout << "Enter Data!" << endl;
    FirstChild.input();
    SecondChild.input();

    FirstChild.output();
    SecondChild.output();
    
    return 0;
}