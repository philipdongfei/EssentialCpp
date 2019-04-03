#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


class Stack {

    public:
        bool push(const string&);
        bool pop(string &elem);
        bool peek(string &elem);
        bool find(const string &elem) const;
        int count(const string &elem) const;

        inline bool empty();
        bool full();

        int size() { return _stack.size(); }

    private:
        vector<string> _stack;
};
