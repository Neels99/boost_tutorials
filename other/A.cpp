//
// Created by vasil on 24.03.2020.
//

#include "A.h"
#include "B.h"

TESTA::A::A(TESTB::B *v) {
    value = v;
    value->value = this;
}

TESTA::A::A() {

}
