//#include "LibMat.h"

class Magazine : public LibMat {
    public:
        Magazine (const string &title)
            : _title(title)
        {
            cout << "Magazine::Magazine( " << _title
                << ") constructor\n";
        }
        virtual ~Magazine(){
            cout << "Magazine::~Magazine() destructor!\n";
        }
        virtual void print() const {
            cout << "Magazine::print() -- I am a Magazine object!\n"
                << "My title is " << _title << endl;
        }
        const string& title() const { return _title; }

    protected:
        string _title;
};
