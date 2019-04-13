#include "LibMat.h"
#include "Book.h"
#include "AudioBook.h"
#include "Magazine.h"

void print(const LibMat &mat)
{
    cout << "in global print(): about to print mat.print()\n";

    mat.print();
}

int main(void)
{
    /*
    cout << "\n" << "Creating a LibMat object to print()\n";
    LibMat libmat;
    print(libmat);

    cout << "\n" << "Creating a Book object to print()\n";
    Book b("The Castle", "Franz kafka");
    print(b);

    */
    cout << "\n" << "Creating a Magazine object to print()\n";
    Magazine m("The Elle");
    print(m);
    /*
    cout << "\n";
    AudioBook ab("Mason and Dixon",
            "Thomas Pynchon", "Edwin Leonard");
    cout << "The title is " << ab.title() << '\n'
        << "The author is " << ab.author() << '\n'
        << "The narrator is " << ab.narrator() << endl;
        */
}
