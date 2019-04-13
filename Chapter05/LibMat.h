#include <iostream>

using namespace std;


class LibMat {
public:
    LibMat(){ cout << "LibMat::LibMat() default constructor!\n"; }

    virtual ~LibMat() {cout << "LibMat::~LibMat() destructor!\n";}
    virtual void print() const
    { cout << "LibMat::print() -- I am a LibMat object~\n"; }
};
