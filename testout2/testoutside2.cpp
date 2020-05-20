#include "testoutside.h"
#include "testoutside2.h"
#include <iostream>

namespace tt
{
    using namespace std;

    T::T()
    {
        cout << "parent constructor" << endl;
    }

    

    TT::TT()
    {
        cout << "OVERRIDE CONSTRUCTOR" << endl;
    }
    void TT::Test()
    {
        cout << "OVERRIDED" << endl;
    }

    int s;
    void test()
    {
        cout << "TEST22222222222222";
    }
} // namespace tt