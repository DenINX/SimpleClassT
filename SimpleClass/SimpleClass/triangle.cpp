#include "triangle.h"

void triangle::set_a(float x, float y)
{
    a = { x,y };
};
void triangle::set_b(float x, float y)
{
    b = { x,y };
}
void triangle::set_c(float x, float y)
{
    c = { x,y };
}
const double triangle::distance(vector <float> p1, vector <float> p2)
{
    double d = sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2));
    return d;
}
const double triangle::square()
{
    double s = (distance(a, b) * (pow(distance(a, c), 2)) - (pow((distance(a, b) / 2), 2))) / 2;
    return s;
}
const double triangle::perimeter()
{
    double p = distance(c, a) + distance(c, b) + distance(a, b);

    return p;
}
const string triangle::disSides()
{
    double ds1 = distance(c, a);
    double ds2 = distance(c, b);
    double ds3 = distance(a, b);
    vector <double> dis = { ds1,ds2,ds3 };
    string s;
    for (int i = 0; i < dis.size(); i++)
        s += to_string(dis[i]) + ' ';

    return s;
}

const string triangle::check()
{
    string o;
    if ((distance(c, a) + distance(c, b) > distance(a, b)) || (distance(c, a) + distance(a, b) > distance(c, b)) || (distance(c, b) + distance(a, b) > distance(c, a)))
    {
        o = "yes";
    }
    else
    {
        o = "no";
    }
    return o;
}