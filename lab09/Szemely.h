//
// Created by Szilárd on 11/16/2022.
//

#ifndef FUNCTIONS_H_SZEMELY_H
#define FUNCTIONS_H_SZEMELY_H


#include <string>
#include <iostream>

using namespace std;

class Szemely {
protected:
    string vezeteknev;
    string keresztnev;
    int szuletesiEv;
public:
    virtual void print(ostream& os = cout) const;
    Szemely(const string& keresztnev, const string& vezeteknev, int szulEv);

};
ostream& operator<<(ostream& os, const Szemely& sz);

#endif //FUNCTIONS_H_SZEMELY_H
