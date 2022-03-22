#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle
{
protected: // for accessing variables in derived classes
    int height, width;

public:
    void display()
    {
        cout << width << " " << height << "\n";
    }
    int getwidth()
    {
        return width;
    }
    int getheight()
    {
        return height;
    }
};

class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin >> width;
        cin >> height;
    }
    void display()
    {
        cout << getheight() * getwidth();
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}