//
// Created by vasil on 24.03.2020.
//

#ifndef BOOST_LEARN_A_H
#define BOOST_LEARN_A_H
using namespace std;
namespace TESTB {
    class B;
}
#include <string>
#include "B.h"

namespace TESTA {


    class A {
    public:
        TESTB::B *value;
        string s = "A";

        A(TESTB::B *v);

        A();
    };
}

#endif //BOOST_LEARN_A_H
