#ifndef BOOST_LEARN_TESTOUT
#define BOOST_LEARN_TESTOUT
#include <iostream>
namespace tt
{
    void test();
#pragma region message

    class T
    {
    public:
        T();

        virtual void Test() = 0;

        template <typename Typ>
        void Out(Typ var)
        {
            std::cout << var << std::endl;
        }
    };
#pragma endregion message
    class TT : public T
    {
    public:
        TT();

        void Test() override;
    };

} // namespace tt

#endif //BOOST_LEARN_TESTOUT