#include <string>
#include <iostream>

using namespace std;

int main(void) 
{
    string user_name;

    cout << "Please enter your name:";
    cin >> user_name;

    switch (user_name.size()) {
        case 0:
            cout << "Ah, the user with no name."
                << "Well, ok, hi, user with no name.\n";
            break;
        case 1:
            cout << "A 1-character name? Hmm, have you read Kafka?: "
                << "hello, " << user_name << endl;
            break;
        default:
            cout << "Hello, " << user_name
                << " -- happy to make your acquaintance!\n";
            break;
    }
    return 0;
}
