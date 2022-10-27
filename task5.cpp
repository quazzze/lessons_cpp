#include <iostream>
using namespace std;

//Преобразовать строки двумерного массива в столбцы. 

class matrix{
    int** matrix_class;
public:
    void SetMatrix(int RowAmount, int ColumnAmount);
    void ReplaceRowsnColumns(int RowAmount, int ColumnAmount);
    void MatrixOut(int RowAmount, int ColumnAmount);
};


void matrix::SetMatrix(int RowAmount, int ColumnAmount) {
    matrix_class = new int*[RowAmount];
    for(int i = 0; i < RowAmount; i++) {
        matrix_class[i] = new int[ColumnAmount];
    }

    for(int i = 0; i < RowAmount; i++) {
        cout << " | ";
        for(int j = 0; j < ColumnAmount; j++) {
            matrix_class[i][j] = rand() % 10;
            cout << matrix_class[i][j] << " ";
        }
        cout << " | " << endl;
    }
}


void matrix::ReplaceRowsnColumns(int RowAmount, int ColumnAmount) {
    int** matrix_temp = new int*[ColumnAmount];
    for(int i = 0; i < ColumnAmount; i++) {
        matrix_temp[i] = new int[RowAmount];
    }

    for(int i = 0; i < ColumnAmount; i++) {
        for(int j = 0; j < RowAmount; j++) {
            matrix_temp[i][j] = matrix_class[j][i];
        }
    }

    for(int i = 0; i < RowAmount; i++) {
        delete[] matrix_class[i];
    }
    delete[] matrix_class;

    matrix_class = new int*[ColumnAmount];
    for(int i = 0; i < ColumnAmount; i++) {
        matrix_class[i] = new int[RowAmount];
    }

    for(int i = 0; i < ColumnAmount; i++) {
        for(int j = 0; j < RowAmount; j++) {
            matrix_class[i][j] = matrix_temp[i][j];
        }
    }

    for(int i = 0; i < RowAmount; i++) {
        delete[] matrix_temp[i];
    }
    delete[] matrix_temp;
}


void matrix::MatrixOut(int RowAmount, int ColumnAmount) {
    cout << endl;
    for(int i = 0; i < ColumnAmount; i++) {
        cout << " | ";
        for(int j = 0; j < RowAmount; j++) {
            cout << matrix_class[i][j] << " ";
        }
        cout << " | " << endl;
    }
}


int main() {
    matrix matrix;
    int rows = 0;
    int cols = 0;
    cin >> rows;
    cin >> cols;
    matrix.SetMatrix(rows, cols);
    matrix.ReplaceRowsnColumns(rows, cols);
    matrix.MatrixOut(rows, cols);

    return 0;
}
