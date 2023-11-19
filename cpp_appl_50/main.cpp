#include "box.h"

int main() {
    system("chcp 1251");
    system("cls");
    Rectangle myRectangle;

    cout << "������ ������� : ";
    cin >> myRectangle.length;

    cout << "������ ������: ";
    cin >> myRectangle.width;

    cout << "������ x: ";
    cin >> myRectangle.origin.x;

    cout << "������ y: ";
    cin >> myRectangle.origin.y;

    printRectangle(myRectangle, true);

    double deltaX, deltaY;
    cout << "������ ���� x: ";
    cin >> deltaX;

    cout << "������ ���� y : ";
    cin >> deltaY;

    moveRectangle(myRectangle, deltaX, deltaY);
    printRectangle(myRectangle, true);

    double newLength, newWidth;
    cout << "������ ���� �������: ";
    cin >> newLength;

    cout << "������ ���� ������: ";
    cin >> newWidth;

    resizeRectangle(myRectangle, newLength, newWidth);
    printRectangle(myRectangle, true);

    return 0;
}