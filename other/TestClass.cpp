#include <iostream>
#include "config.cpp"
#include <string>
using namespace std;

class A{
public:
    virtual string build() = 0;

    int num = 2;
};

class B:public A{
    string c = "BBBBBBBBBBBBB";
public:
    string build() override{
        return c;
    }
};

class C:public A{

public:
    string a = "123123";
    string d = "123";
    string build() override{
        return a;
    }
};


class Type{
public:
    virtual void build(){
        cout << "Build Type" << endl;
    }


};

class TypeA: public Type{
public:
    TypeA(int _i){
        i = _i;
    }

    void build() override {
        cout << "Build TypeA" << endl;
    }

    int i;

};

class TypeB: public Type{
public:
    TypeB(string s){
        S = s;
    }
    void build() override {
        cout << "Build TypeB" << endl;
    }

    string S;

};


int main(){

    B b;
    C c;

    A* a = new B();
    a = &c;
    B ba;
    cout << ((B*)a)->build() << endl;


    cout << b.build() << endl;
    cout << c.build() << endl;
    cout << a->build() << endl;
    a = &c;
    cout << a->build() << endl;

    cout << test::config::t << endl;

    string s = "aaaac2poolb2bbb";
    cout << s << endl;
    string ss = "c2poolb";
    size_t pos = s.find(ss);
    s.replace(pos, 7, "148");
    cout << s << endl;

    A* t = new B();
    t->num = 1488;
    B* tb = (B*)t;
    cout << tb->num << endl;
    cout << "______________" << endl;
//___________________

    Type* typeA =  new TypeA(1488);
    typeA->build();
    TypeA* typeAA = (TypeA*)typeA;
    typeAA->build();
    cout << typeAA->i;
}