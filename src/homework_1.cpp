#include <iostream>
#include "version_config.h"

using namespace std;

// unable  using  #HOMEWORK1_VERSION directly in source
// since the syntax #*** is only valid for macro parameters.
#define STRINGIFY_(x) #x
#define STRINGIFY(x) STRINGIFY_(x)

int main(int argc, char* argv[])
{
    cout << "build " << STRINGIFY(HOMEWORK1_VERSION) << endl;
    cout << "Hello world\n";
}