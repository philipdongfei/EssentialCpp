#include "num_sequence.h"
#include <vector>

class Fibonacci : public num_sequence {
public: 
    Fibonacci(int len = 1, int beg_pos = 1)
        : _length(len), _beg_pos(beg_pos){}
    virtual int    elem(int pos) const;
    virtual const char* what_am_i() const { return "Fibonacci"; }
    virtual ostream& print(ostream &os = cout) const;
    int     length() const { return _length; }
    int     beg_pos() const { return _beg_pos; }

protected:
    //bool check_integrity(int pos) const;
    virtual void gen_elems(int pos) const;
    int     _length;
    int     _beg_pos;
    static vector<int> _elems;

};
