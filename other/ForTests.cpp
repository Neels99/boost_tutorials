#include <iostream>
#include <sstream>
#include "config3.h"
#include "A.h"
#include "B.h"
#include <random>
#include <ctime>
#include <boost/random.hpp>
using namespace std;
using namespace boost::random;

enum testEnum{
    One,
    Two = 23,
    Three
};

template <typename T>
void _testEnum(const T& data){
    stringstream ss;
    testEnum a = One, b = Two, c = Three;
    ss << a << b << c;
    ss << data;
    string res;
    ss >> res;
    cout << res << endl;

}

int main(){
    /*_testEnum("123");
    stringstream sss;
    sss << "12345";
    int res;
    sss >> res;
    cout << res;*/
#include <random>
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,6);
    int dice_roll = distribution(generator);  // generates number in the range 1..6
    cout << dice_roll << endl;
    srand( time( NULL ) );
    rand();
    for (int i = 0; i < 20; i++) {
        float r = ((float) rand()) / (float) RAND_MAX;
        srand(time(NULL));
        float r_range = 5 - 1;
        r = (r * r_range) + 0;
        cout << r << endl;
    }
    boost::random::mt19937 rng(std::time(0));         // produces randomness out of thin air
    //rng.seed(static_cast<unsigned int>(std::time(0)));
    // see pseudo-random number generators
    boost::random::uniform_int_distribution<> six(float(0),float(3));

    // distribution that maps to 1..6
    // see random number distributions
    int tes[4] = {0,0,0,0};
    for (int i = 0; i < 1000; i++) {
        int x = six(rng);                   // simulate rolling a die
        tes[x]++;
    }
    cout << tes[0] << "/" << tes[1] << "/" << tes[2] << "/" << tes[3] << endl;

    boost::random::uniform_int_distribution<> fl(0,10000);
    for (int i = 0; i < 5; i++){
        float r = ((float) fl(rng) / float (10000));
        float range = 3 - 0;
        r = (r*range) + 0;
        cout << r << endl;
        if (r < 0.8){
            cout << "RAND!!!" << endl;
        }
    }


    TestC c;
    TESTA::A a;
    TESTB::B b(&a);
    cout << a.value->s << b.value->s;
}