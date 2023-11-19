#include "box.h"

int main() {
    system("chcp 1251");
    system("cls");
    Rectangle myRectangle;

    cout << "¬вед≥ть довжину : ";
    cin >> myRectangle.length;

    cout << "¬вел≥ть ширину: ";
    cin >> myRectangle.width;

    cout << "¬вед≥ть x: ";
    cin >> myRectangle.origin.x;

    cout << "¬вед≥ть y: ";
    cin >> myRectangle.origin.y;

    printRectangle(myRectangle, true);

    double deltaX, deltaY;
    cout << "¬вед≥ть зсув x: ";
    cin >> deltaX;

    cout << "¬вед≥ть зсув y : ";
    cin >> deltaY;

    moveRectangle(myRectangle, deltaX, deltaY);
    printRectangle(myRectangle, true);

    double newLength, newWidth;
    cout << "¬вед≥ть нову довжину: ";
    cin >> newLength;

    cout << "¬вед≥ть нову ширину: ";
    cin >> newWidth;

    resizeRectangle(myRectangle, newLength, newWidth);
    printRectangle(myRectangle, true);

    return 0;
}