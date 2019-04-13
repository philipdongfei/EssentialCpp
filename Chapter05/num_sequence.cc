#include "num_sequence.h"


bool num_sequence::
check_integrity(int pos, int size) 
{
    if (pos <= 0 || pos > _max_elems)
    {
        cerr << "!! invalid position: " << pos
             << " Cannot honor request\n";
        return false;
    }
    if (pos > size)
        gen_elems(pos);

    return true;
}

ostream& operator<<(ostream &os, const num_sequence &ns)
{ return ns.print(os); }


