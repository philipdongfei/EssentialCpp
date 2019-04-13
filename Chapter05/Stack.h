#include <string>
#include <iostream>
#include <vector>
using namespace std;

typedef string elemType;

class Stack {
public:
    virtual ~Stack(){}
    virtual bool pop(elemType&) = 0;
    virtual bool push(const elemType&) = 0;
    virtual bool peek(int index, elemType&) = 0;

    virtual int top() const = 0;
    virtual int size() const = 0;

    virtual bool empty() const = 0;
    virtual bool full() const = 0;
    virtual void print(ostream& = cout) const = 0;
};


class LIFO_Stack : public Stack {
public: 
    LIFO_Stack(int capacity = 0) : _top(0)
    {
        if (capacity) _stack.reserve(capacity);
    }
    int size() const { return _stack.size(); }
    bool empty() const { return !_top; }
    bool full() const { return size() >= _stack.max_size(); }
    int top() const { return _top; }
    void print(ostream &os = cout) const;

    bool pop(elemType &elem);
    bool push(const elemType &elem);
    bool peek(int, elemType&) { return false; }
private:
    vector<elemType> _stack;
    int _top;
};


class Peekback_Stack: public Stack {
public: 
    Peekback_Stack(int capacity = 0) : _top(0)
    {
        if (capacity) _stack.reserve(capacity);
    }
    int size() const { return _stack.size(); }
    bool empty() const { return !_top; }
    bool full() const { return size() >= _stack.max_size(); }
    int top() const { return _top; }
    void print(ostream &os = cout) const;

    bool pop(elemType &elem);
    bool push(const elemType &elem);
    bool peek(int, elemType&); 
private:
    vector<elemType> _stack;
    int _top;
};
