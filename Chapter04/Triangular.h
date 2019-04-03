#include <vector>
#include <algorithm>
#include <iostream>
#include "Triangular_iterator.h"

using namespace std;

class Triangular {
    public:
        typedef Triangular_iterator iterator;
        // consturctors
        Triangular();
        Triangular(int len);
        Triangular(int len, int beg_pos);
        Triangular(const Triangular &rhs)
            : _length(rhs._length),
            _beg_pos(rhs._beg_pos), _next(rhs._beg_pos-1){}
        //member functions
        int length() const { return _length; }
        int beg_pos() const { return _beg_pos; }
        int elem(int pos) const;

        bool next (int &val) const;
        void next_reset() const { _next = _beg_pos - 1; }

        Triangular& copy(const Triangular &rhs);

        static bool is_elem(int);
        static void gen_elements(int length);
        static void gen_elems_to_value(int value);
        //static void display(int length, int beg_pos, ostream &os = cout);

        Triangular_iterator begin() const
        {
            return Triangular_iterator(_beg_pos);
        }
        Triangular_iterator end() const
        {
            return Triangular_iterator(_beg_pos + _length);
        }
        friend class Triangular_iterator;
        friend int operator*(const Triangular_iterator &rhs);
        static int elem_size() { return _elems.size(); }
        static int max_elems() { return _max_elems; }

    private:
        int _length;
        int _beg_pos;
        mutable int _next;

        static const int _max_elems = 1024;
        static vector<int> _elems;

};
