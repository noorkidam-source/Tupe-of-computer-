#include <iostream>
using namespace std;

class computer
{
private:
    string brand;
    string processor;

public:
    computer(string b, string p)
    {
        brand = b;
        processor = p;
    }

    void display()
    {
        cout << "brand: " << brand << endl;
        cout << "processor: " << processor << endl;
    }
};

int main()
{
    computer mypc("Dell", "core i7");
    mypc.display(); // استدعاء الدالة لعرض القيم
    return 0;
}