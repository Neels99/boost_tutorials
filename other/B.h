//
// Created by vasil on 24.03.2020.
//

#ifndef BOOST_LEARN_B_H
#define BOOST_LEARN_B_H

#include <string>
using namespace std;
namespace TESTA {
    class A;
}
namespace TESTB {


    class B {
    public:
        TESTA::A *value;
        string s = "B";

        B(TESTA::A *v);

        B();
    };
}

#endif //BOOST_LEARN_B_H
