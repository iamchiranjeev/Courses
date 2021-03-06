/*
01. Define a class complex to represents a complex number. Declare instance member
    variables to store real and imaginary part of a complex number, also define
    instance member functions to set values of complex number and print values
    of complex number.
*/
#include<iostream>
using namespace std;
class complex
{
    private:
        int a;
        int b;
    public:
        void input(int a, int b)
        {
            this->a= a;
            this->b= b;
        }
        void output()
        {
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        complex add(complex c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};
int main()
{
    complex c1, c2, c3;
    c1.input(5,4);
    c1.output();
    c2.input(2,5);
    c2.output();
    //  c3=add(c1,c2); // 'add' was not declared in this scope|
    c3=c1.add(c2);
    c3.output();
    return 0;
}
