//
// Created by vasil on 24.03.2020.
//
#include "A.h"
#include "B.h"

TESTB::B::B(TESTA::A *v) {
    value = v;
    value->value = this;
}

TESTB::B::B() {

}
