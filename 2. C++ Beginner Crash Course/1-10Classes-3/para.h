//
// Created by syurskyi on 7/26/2020.
//

#ifndef PARA_H
#define PARA_H
#include <iostream>
#include "rectangle.h"
using namespace std;

class Para
{

public:
    Para(int w, int l, int h):r(w,l),height(h)
    {
        cout << "Para Constructor Called";
    }

    int getVolume()
    {
        return r.getArea() * height;
    }

private:
    Rectangle r;
    int height;

};
#endif // PARA_H
