#include <iostream>
using namespace std;

// Составить программу, которая будет считывать 
// введённое пятизначное число. После чего, каждую 
// цифру этого числа необходимо вывести в новой строке.

int main(int args, char const *argv[]) {
    int num = 0, dec = 0;
    cin >> num;
    for (int i = 0; i < 5; i++) {
        cout << num % 10 << " " << (i+1) <<"-digit of a number" << "\n";
        num = num / 10;
    }
    return 0;
}