#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int arr[5]; // объявили массив на 5 ячеек

    cout << "Введите 5 чисел для заполнения массива: " << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i]; // читаем элементы в массив
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[j] > arr[j + 1]) {
                int b = arr[j]; // создали доп. переменную
                swap(arr[j], arr[j + 1]); // меняем местами
                arr[j + 1] = b; // значения элементов

            }
            for (int j = 0; j < 5; j++) {
                cout << arr[j]<<" ";
            }
            cout << endl;
        }
    }

    cout << "Массив в отсортированном виде: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // выводим элементы массива
    }
    system("pause");
    return 0;
}