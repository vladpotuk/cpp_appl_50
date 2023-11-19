#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Rectangle {
    double length;
    double width;
    Point origin;
};

void moveRectangle(Rectangle& rect, double deltaX, double deltaY) {
    rect.origin.x += deltaX;
    rect.origin.y += deltaY;
}

void resizeRectangle(Rectangle& rect, double newLength, double newWidth) {
    rect.length = newLength;
    rect.width = newWidth;
}

void printRectangle(const Rectangle& rect, bool showAxes = false) {
    for (int i = 0; i < rect.origin.y; ++i) {
        cout << endl;
    }

    for (int i = 0; i < rect.width; ++i) {
        for (int j = 0; j < rect.origin.x; ++j) {
            cout << " ";
        }

        if (showAxes && i == rect.width / 2) {
            cout << "\033[32m|";
        }
        else {
            cout << " ";
        }

        for (int j = 0; j < rect.length; ++j) {
            cout << "*";
        }

        if (showAxes && i == rect.width / 2) {
            cout << "|";
        }
        else {
            cout << " ";
        }

        cout << endl;
    }

    if (showAxes) {
        for (int i = 0; i < rect.origin.x; ++i) {
            cout << " ";
        }
        cout << "\033[32m+" << string(rect.length, '-') << "+\033[0m" << endl;
    }

    cout << endl;
}
