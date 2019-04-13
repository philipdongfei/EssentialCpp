//#include "Book.h"

class AudioBook : public Book {
public:
        AudioBook(const string &title,
                const string &author, const string &narrator)
            : Book(title, author),
            _narrator(narrator)
    {
        cout << "AudioBook::AudioBook ( " << _title
            << ", " << _author
            << ", " << _narrator
            << ") constructor\n";
    }
    ~AudioBook()
    {
        cout << "AudioBook::~AudioBook() destructor!\n";
    }
    virtual void print() const {
        cout << "AudioBook::print() -- I am an AudioBook object~\n"
            << "My title is: " << _title << '\n'
            << "My author is: " << _author << '\n'
            << "My narrator is: " << _narrator << endl;
    }
    const string& narrator() const { return _narrator; }
protected:
    string _narrator;

};
