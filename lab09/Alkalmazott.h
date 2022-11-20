//
// Created by Szilárd on 11/16/2022.
//

#ifndef FUNCTIONS_H_ALKALMAZOTT_H
#define FUNCTIONS_H_ALKALMAZOTT_H
#include "Szemely.h"

class Alkalmazott:public Szemely {
protected:
    static int Alk_id;
    string munkakor;
private:
    int id;
public:
    string getMunkakor() const {return this->munkakor;}
    Alkalmazott(const string &keresztnev, const string &vezeteknev, int szulEv, const string &munkakor);
    virtual void print(ostream& os=cout) const;
    int getId() const {return this->id;}
};


#endif //FUNCTIONS_H_ALKALMAZOTT_H
