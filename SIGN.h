#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class SIGN
{
private:
    char *name;
    char *surname;
    char *zodiac_sign;
    int birthday[3];
public:
    SIGN();
    SIGN(char *a, char *b, char  *c, int d, int e, int f);
    SIGN(const SIGN & arg);
    bool show(char *vv);
    friend bool Sort(SIGN, SIGN);
    friend ostream& operator << (ostream&, SIGN&);
    friend istream& operator >> (istream&, SIGN&);
    ~SIGN();
};

#endif
