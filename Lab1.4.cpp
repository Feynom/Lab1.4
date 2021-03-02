#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    int option;
    double move, width, height;

    do
    {
        cout << endl << endl << endl;
        cout << "        |Choose an option|" << endl << endl;;
        cout << "|[1] - Create a rectangle 1        |" << endl;
        cout << "|[2] - Create a rectangle 2        |" << endl;
        cout << "|[3] - Display a rectangle 1       |" << endl;
        cout << "|[4] - Display a rectangle 2       |" << endl;
        cout << "|[5] - Move(x), rectangle 1        |" << endl;
        cout << "|[6] - Move(y), rectangle 1        |" << endl;
        cout << "|[7] - Move(x), rectangle 2        |" << endl;
        cout << "|[8] - Move(y), rectangle 2        |" << endl;
        cout << "|[9] - Change the width(x), rec. 1 |" << endl;
        cout << "|[10] - Change the height (y),rec.1|" << endl;
        cout << "|[11] - Change the width(x), rec. 2|" << endl;
        cout << "|[12] - Change the height (y),rec.2|" << endl;
        cout << "|[13] - Create the smallest        |" << endl;
        cout << "|      rectangle that includes     |" << endl;
        cout << "|      another 2 rectangles        |" << endl;
        cout << "|[14] - Create the rectangle       |" << endl;
        cout << "|      that is a common part of    |" << endl;
        cout << "|      another 2  rectangles       |" << endl;
        cout << "|[0] - Exit the program            |" << endl;
        cout << " Enter: "; cin >> option;

        switch (option)
        {
        case 1:
            Rectangle A;
            A.ReadRectangle();
            break;
        case 2:
            Rectangle B;
            B.ReadRectangle();
            break;
        case 3:
            A.DisplayRectangle();
            break;
        case 4:
            B.DisplayRectangle();
            break;
        case 5:
            cout << "\nEnter a value: "; cin >> move;
            A.MoveX(move);
            break;
        case 6:
            cout << "\nEnter a value: "; cin >> move;
            A.MoveY(move);
            break;
        case 7:
            cout << "\nEnter a value: "; cin >> move;
            B.MoveX(move);
            break;
        case 8:
            cout << "\nEnter a value: "; cin >> move;
            B.MoveY(move);
            break;
        case 9:
            cout << "\nEnter a value:"; cin >> width;
            A.ChangeWidth(width);
            break;
        case 10:
            cout << "\nEnter a value:"; cin >> height;
            A.ChangeHeight(height);
            break;
        case 11:
            cout << "\nEnter a value:"; cin >> width;
            B.ChangeWidth(width);
            break;
        case 12:
            cout << "\nEnter a value:"; cin >> height;
            B.ChangeHeight(height);
            break;
        case 13:    
            break;
        case 14:
            break;
        default:
            exit(1);
        }
    } while (option != 0);

    return 0;
}