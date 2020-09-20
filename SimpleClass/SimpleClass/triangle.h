#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;

/*This class describes a triangle. It has 3 points on the plane and methods:

1) Setting coordinates for point a, b, c.

2) Method for calculating the distance between coordinates.

3)Method which outputs the distance between coordinates

4) Methods for calculating the area and perimeter.

5)A method that checks whether a triangle exists with the specified coordinates.
*/

class triangle
{
private:
    vector <float> a; // 1 point
    vector <float> b; // 2 point
    vector <float> c; //top
public:
    void set_a(float x, float y);
    void set_b(float x, float y);
    void set_c(float x, float y);
    const double distance(vector <float> p1, vector<float>p2);
    const string disSides();
    const double square();
    const double perimeter();
    const string check();

};

