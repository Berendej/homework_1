#include <iostream>
#include "version_config.h"

using namespace std;

int main(int argc, char* argv[])
{
    cout << "build " << version() << endl;
    cout << "Hello world\n";
}