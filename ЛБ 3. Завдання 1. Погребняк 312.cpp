#include <iostream>

using namespace std;

int main() {
    // ���������� ������
    double A, B, C;

    // �������� ������� ������
    cout << "Vvedite znacheniye A, B, C: ";
    cin >> A >> B >> C;

    // �������� ���� ��������������
    if ((A <= B && B <= C) || (A >= B && B >= C)) {
        // ���� �������� ����������� �� ���������� ��� ����������
        A *= 2;
        B *= 2;
        C *= 2;
    }
    else {
        // ���� �������� �� �����������
        A = -A;
        B = -B;
        C = -C;
    }

    // ��������� ����������
    cout << "Novyye znacheniya: A = " << A << ", B = " << B << ", C = " << C << endl;

    return 0; // ���������� ��������
}