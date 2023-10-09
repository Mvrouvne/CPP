#include "Fixed.hpp"

class   Test
{
    private:
        int a;
        int b;
    public:
        Test(){}
        Test(int a, int b) : a(a), b(b){}
    Test operator + (Test a2)
    {
        // int b1;
        // int b2;

        this->a = this->a + a2.a;
        this->b = this->b + a2.b;
        return(*this);
    }
    int geta() const {return a;}
    int getb() const {return b;}
};

int main()
{
    Test a1(10, 20);
    Test a2(20, 40);
    Test a3 = a1 + a2;

    std::cout << a3.geta() << std::endl;
    std::cout << a3.getb() << std::endl;
}