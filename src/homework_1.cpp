#include <iostream>

using namespace std;

unsigned get_build_number()
{
    return PATCH_VERSION;
}

int main(int argc, char* argv[])
{
    unsigned build_number { get_build_number() };
    cout << "build " << build_number << endl;
    cout << "Hello world\n";
}