#include <iostream>

using namespace std;
// Дано четное число N (> 0) и символы C1 и C2. Сформировать и 
// вывести строку длины N, которая состоит из чередующихся символов C1 и C2, начиная с C1.

int main() {
    setlocale(LC_ALL, "ru");
    int N;
    char C1, C2;

    cout << "Введите чётное число N > 0: ";
    cin >> N;
    if (N % 2 != 0 || N < 0) {
        cout << "Ошибка! N - Чётное и N > 0" << endl;
        return 1;
    }

    cout << "Введите символ C1: ";
    cin >> C1;

    cout << "Введите символ C2: ";
    cin >> C2;

    string result;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            result += C1;
        }
        else {
            result += C2;
        }
    }
    cout << "Получившаяся строка: " << result << endl;
    return 0;
}