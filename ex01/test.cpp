#include <iostream>

void    print(int x)
{
    std::cout << x << std::endl;
}

class test
{
    private:
        int x = 66;
    public:
        int y = 77;
        test()
        {
            std::cout << "HERREE" << std::endl;
            print(x);
        }

};

int main()
{
    test obj;

    std::cout << obj.y << std::endl;
    // obj.print();
    // std::cout << obj.x << std::endl;
}