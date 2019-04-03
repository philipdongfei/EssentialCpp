#include <string>

using std::string;

class globalWrapper {
    public:
        static int tests_passed() { return _tests_passed; }
        static int tests_run() { return _tests_run; }
        static int version_number() {return _version_number;}
    private:
        static string _program_name;
        static string _version_stamp;
        static int _version_number;
        static int _tests_run;
        static int _tests_passed;
};
