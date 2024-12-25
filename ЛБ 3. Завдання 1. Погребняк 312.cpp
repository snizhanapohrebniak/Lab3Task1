#include <iostream>

using namespace std;

int main() {
    // Оголошення змінних
    double A, B, C;

    // Введення значень змінних
    cout << "Vvedite znacheniye A, B, C: ";
    cin >> A >> B >> C;

    // Перевірка умов упорядкованості
    if ((A <= B && B <= C) || (A >= B && B >= C)) {
        // Якщо значення впорядковані за зростанням або зменшенням
        A *= 2;
        B *= 2;
        C *= 2;
    }
    else {
        // Якщо значення не впорядковані
        A = -A;
        B = -B;
        C = -C;
    }

    // Виведення результату
    cout << "Novyye znacheniya: A = " << A << ", B = " << B << ", C = " << C << endl;

    return 0; // Завершення програми
}