//#include <iostream>
#include "Triangular.h"

//using namespace std;

vector<int> Triangular::_elems;

Triangular::Triangular()
{
    _length = 1;
    _beg_pos = 1;
    _next = 0;
}

Triangular::Triangular(int len)
{
    _length = len > 0 ? len : 1;
    _beg_pos = 1;
    _next = 0;
}

Triangular::Triangular(int len, int bp)
    : _length(len > 0 ? len : 1),
    _beg_pos( bp > 0 ? bp : 1 )
{
    _next = _beg_pos - 1;
    int elem_cnt = _beg_pos + _length - 1;

    if (Triangular::_elems.size() < elem_cnt)
        gen_elements(elem_cnt);
}

int Triangular::elem(int pos) const
{ 
    return Triangular::_elems[pos-1]; 
}

bool Triangular::next(int &value) const
{
    if (_next < _beg_pos + _length - 1)
    {
        value = Triangular::_elems[_next++];
        return true;
    }
    return false;
}

Triangular& Triangular::
copy(const Triangular &rhs)
{
    if (this != &rhs)
    {
        _length = rhs._length;
        _beg_pos = rhs._beg_pos;
        _next = rhs._beg_pos - 1;

    }
    return *this;
}

bool Triangular::
is_elem(int value)
{
    if (!Triangular::_elems.size() ||
            Triangular::_elems[Triangular::_elems.size()-1] < value)
        gen_elems_to_value(value);

    vector<int>::iterator found_it;
    vector<int>::iterator end_it = Triangular::_elems.end();

    found_it = find(Triangular::_elems.begin(), end_it, value);
    return found_it != end_it;
}

void Triangular::
gen_elems_to_value(int value)
{
    int ix = Triangular::_elems.size();
    if (!ix) {
        Triangular::_elems.push_back(1);
        ix = 1;
    }
    while (Triangular::_elems[ix-1] < value && ix < _max_elems)
    {
        // cout << "elems to values: " << ix*(ix+1)/2 << endl;
        ++ix;
        Triangular::_elems.push_back(ix*(ix+1)/2);
    }
    if (ix == _max_elems)
        cerr << "Triangular Sequence: oops: value too large "
             << value << " -- exceeds max size of "
             << _max_elems << endl;
}

void Triangular::
gen_elements(int length)
{
    if (length < 0 || length > _max_elems){
        return;
    }
    if (Triangular::_elems.size() < length)
    {
        int ix = Triangular::_elems.size() ? Triangular::_elems.size()+1 : 1;
        for (; ix <= length; ++ix)
            Triangular::_elems.push_back(ix*(ix+1)/2);
    }
}



int sum(const Triangular &trian)
{
    if (!trian.length())
        return 0;
    int val, sum = 0;
    trian.next_reset();
    while (trian.next(val))
        sum += val;
    return sum;
}

istream&
operator>>(istream &is, Triangular &rhs)
{
    char ch1, ch2;
    int bp, len;

    is >> ch1 >> bp
        >> ch2 >> len;

    rhs.beg_pos(bp);
    rhs.length(len);
    rhs.next_rest();

    return is;
}


int main()
{
    /*
    Triangular tri(4);
    cout << tri << " - sum of elements: "
        << sum(tri) << endl;

    Triangular tri2(4, 3);
    cout << tri2 << " - sum of elements: "
        << sum(tri2) << endl;

    tri1.copy(tr2);
    cout << tri << " - sum of elements: "
        << sum(tri) << endl;


    Triangular tri3(4, 8);
    cout << tri3 << " - sum of elements: "
        << sum(tri3) << endl;
        */
    /////////////////
    /*
    char ch;
    bool more = true;

    while (more)
    {
        cout << "Enter value: ";
        int ival;
        cin >> ival;

        bool is_elem = Triangular::is_elem(ival);
        cout << ival
             << (is_elem ? " is " : " is not ")
             << "an element in the Triangular series.\n"
             << "Another value?(y/n)";

        cin >> ch;
        if (ch == 'n' || ch == 'N')
            more = false;
    }


    Triangular trian(1, 8);
    Triangular::iterator
        it = trian.begin(),
        end_it = trian.end();

    while (it != end_it)
    {
        cout << *it << ' ';
        ++it;
    }
    */
    ///////////////
    /*
    
    Triangular tri(20,12);
    Triangular::iterator it = tri.begin();
    Triangular::iterator end_it = tri.end();

    cout << "Triangular Series of " << tri.length() << " elements\n";
    cout << tri << endl;
    while (it != end_it)
    {
        cout << *it << ' ';
        ++it;
    }
    cout << endl;
    */
    Triangular tri2;
    cin >> tri2;

    cout << tri2;
    
    return 0;
}
