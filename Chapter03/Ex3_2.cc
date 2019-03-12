#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class LessThan{
    public:
        bool operator()(const string &s1,
                const string &s2)
        { return s1.size() < s2.size(); }
};
//template <typename elemType>
void display_vector( const vector<string> &vec,
                     ostream &os=cout, int len= 8 )
{
	 vector<string>::const_iterator 
               iter = vec.begin(), 
               end_it = vec.end();

    int elem_cnt = 1;
    while ( iter != end_it ) 
		    os << *iter++
               << ( !(elem_cnt++ % len ) ? '\n' : ' ');
    os << endl;
}

/*
template <typename T> 
void display_vector(const vector<T> &vec,
                    ostream &os=cout, int len = 8)
//template <class it>
//void display_vector(const it &iter, const it &end_it,
//        ostream &os = count, int len = 8)
{
    vector<T>::const_iterator 
        iter = vec.begin(), 
        end_it = vec.end();
    int elem_cnt = 1;
    while (iter != end_it)
        os << *iter++
           << (!(elem_cnt++ % len) ? '\n' : ' ');
    os << endl;
}
*/

int main()
{
    ifstream ifile("MooCat.txt");
    ofstream ofile("MooCat.sort");

    if (!ifile || !ofile){
        cerr << "Unable to open file -- bailing out!\n";
        return -1;
    }
    vector<string> text;
    string word;

    while(ifile >> word)
        text.push_back(word);
    //sort(text.begin(), text.end(), LessThan());
    stable_sort(text.begin(), text.end(), LessThan());
    display_vector(text, ofile);
    //display_vector(text.begin(),text.end(), ofile);
}

