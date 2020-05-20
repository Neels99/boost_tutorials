#include <ctime>
#include <iostream>
#include <sstream>
#include <iostream>
#include <boost/random.hpp>
#include <vector>
#include <ctime>
#include <cmath>
#include <map>


namespace random{
    using namespace boost::random;

    boost::random::mt19937 generator(std::time(0));

    ///[min, max)
    int RandomInt(int min, int max){
        boost::random::uniform_int_distribution<> rnd(min, max-1);
        return rnd(generator);
    }

    ///[min, max]
    float RandomFloat(float min, float max){
        float Min = float(min), Max = float(max);
        boost::random::uniform_int_distribution<> rnd(Min,Max);
        float res = ((float) rnd(generator) / Max);
        float range = Max - Min;
        res = (res*range) + Min;
        return res;
    }

    template <typename T>
    T RandomChoice(std::vector<T> list){
        int pos = RandomInt(0, list.size());
        return list[pos];
    }

    float Expovariate(float l){
        return (log(RandomInt(1, RAND_MAX)+1)-log(RAND_MAX))/(-l);
    }

}


class T{
public:
    int t;
    std::string b;

    T(){
        t = std::time(0);
        std::time_t _t = std::time(0);
        b = std::asctime(std::localtime(&_t));
    }

    friend std::ostream& operator<<(std::ostream& v, T t ){
        v << t.t << " " <<  t.b;
        return v;
    }

};

using namespace std;

class Abstr{
public:
    int a;
    string b;
    Abstr(int _a, string _b){
        a = _a;
        b = _b;
    }
};


int main()
{
//    std::time_t result = std::time(nullptr);
//    int t = std::time(0);
//
//    T _t;
//
//    std::cout << _t << std::endl;
//
//    std::cout << t << " seconds since the Epoch\n";

//_____________________
//    std::cout << log(RAND_MAX) << " " << RAND_MAX << " " << log(2.7) << std::endl;
//    float res = 0;
//    for (int i = 0; i < 1000; i++){
//        res += random::Expovariate(1.0/50.0);
//    }
//    std::cout << res/1000;
//    //random::Expovariate(1/50);
//______________________

map<int, Abstr> testMap;
testMap.insert(pair<int, Abstr>(123,Abstr(123, "asd")));


    if (testMap.count(1223) != 0){
        cout << "test";
    }
    cout << testMap.at(123).b;

}