#include <iostream>
using namespace std;

//Пузырьковая сортировка динамического массива

void sort(int* unsorted_arr, int arr_size) {
    int* sorted_arr = new int[arr_size];
    int temp = 0;
    
    for(int i = 0; i < arr_size; i++) {
        sorted_arr[i] = unsorted_arr[i];
    }

    for(int i = 0; i < arr_size - 1; i++) {
        for(int j = arr_size - 1; j > i; j--) {
            if(sorted_arr[j] < sorted_arr[j - 1]) {
                temp = sorted_arr[j - 1];
                sorted_arr[j - 1] = sorted_arr[j];
                sorted_arr[j] = temp; 
            }
        }
    }

    for(int i = 0; i < arr_size; i++) {
        unsorted_arr[i] = sorted_arr[i];    
    }
    delete sorted_arr;
}

int input() {
    int arr_size = 0;
    cout << "Please enter size of array: " << endl;
    cin >> arr_size;
    return arr_size;
}

void output(int *unsorted_arr, int arr_size) {
    for(int i = 0; i < arr_size; i++) {
        cout << unsorted_arr[i] << " ";
    }
}

int main() {
    int* array;
    int arr_size = input();
    array = new int[arr_size];
    for (int i = 0; i < arr_size; i++) {
        array[i] = rand() % 10;
        cout << array[i] << " ";
    }
    cout << endl;
    sort(array, arr_size);
    output(array, arr_size);
    delete array;
    return 0;
}
