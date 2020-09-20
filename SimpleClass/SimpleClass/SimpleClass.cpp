#include <math.h>
#include <iostream>
#include "triangle.h"
#include <fstream>


int main()
{
    triangle a;
    a.set_a(5, 5);
    a.set_b(6, 1);
    a.set_c(8, 1);

    vector <triangle>* mas = new vector <triangle>;
    mas->push_back(a);


    //the input to a file

    //ofstream file;
    //file.open("File.txt");
    //for (auto e:*mas)    
        //file << e.disSides();
    //file.close();

    //output from a file

    //ifstream file("File.txt");
    //char ch;
    //string str;
    //for (;file;)
    //{
       // file.get(ch);
        //if (file.eof()) break;
        //str += ch;
    //}
   //cout << str;
   //cout << endl;

    cout << a.perimeter();
    cout << endl;
    cout << a.square();
    cout << endl;
    cout << a.disSides();
    cout << endl;
    cout << a.check();
    return 0;



}
