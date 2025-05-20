/*Write the definition for a class called complex that has floating point data members for storing real and imaginary parts. The class has the following member functions:
void set(float, float) to set the specified value in object
void disp() to display complex number object
complex sum(complex) to sum two complex numbers & return complex number
1. Write the definitions for each of the above member functions.
2. Write main function to create three complex number objects. Set the value in two objects and call sum() to calculate sum and assign it in third object. Display all complex numbers.
*/
#include <iostream>
using namespace std;
class complex{
    float a , b;
    public:

    void set(float x,float y){
        a=x;
        b=y;
    }

    void disp(){
        cout<<"Complex Number is: "<< a <<"+"<< b <<"i"<<endl;
    }

    complex sum(complex &obj){
     complex c;
     c.a=a+obj.a;
     c.b=b+obj.b;
     return c;
    }
};
int main(){
complex c1 , c2 , c3;
c1.set(4,5);
c1.disp();
c2.set(3,2);
c2.disp();
c3 = c1.sum(c2);
c3.disp();
    return 0;
}