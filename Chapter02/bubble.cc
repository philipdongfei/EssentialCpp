#include "NumericSeq.h"

int main(void)
{
    int ia[8] = {8, 34, 3, 13, 1, 21, 5, 2};
    vector<int> vec(ia, ia+8);

    cout << "vector before sort: ";
    display(vec);

    bubble_sort(vec);

    cout << "vector after sort: ";
    display(vec );

    // ok: 
    char path[] = "data.txt";
    ofstream ofil ( path );
    bubble_sort(vec, &ofil);
    display(vec, ofil);
}
void display( const vector<int> &vec , ostream &os )
{
    for (unsigned int ix = 0; ix < vec.size(); ++ix )
        os  << vec[ix] << ' ';
    os << endl;
}

void swap(int &val1, int &val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}
void bubble_sort( vector<int> &vec , ofstream *ofil )
{
    for (unsigned int ix = 0; ix < vec.size(); ++ix)
        for (unsigned int jx = ix+1; jx < vec.size(); ++jx)
            if (vec[ix] > vec[jx])
            {
                if (ofil != 0)
                    (*ofil) << (const char*)"about to call swap! ix: " << ix
                        << (const char*)" jx: " << jx << (const char*)"\tswapping: "
                        << vec[ix] << (const char*)" with " << vec[jx] << endl;
                swap(vec[ix], vec[jx]);

            }

}
