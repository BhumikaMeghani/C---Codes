/*3.		Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following criteria
            Distance                                                          Fuel
            <=1000                                                           500
            more than 1000  and <=2000                          1100
            more than 2000                                              2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number, Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel.
A function SHOWINFO() to allow user to view the content of all the data members.
*/
#include <iostream>
#include <string>
using namespace std;
class airline
{
    int flightno;
    string destination;
    float distance, fuel;
    void calfuel();

public:
    void feedinfo();

    void showinfo();
};
void airline ::feedinfo()
{
    cout << "Enter flight number: ";
    cin >> flightno;
    cout << "Enter destination: ";
    cin >> destination;
    cout << "Enter distance: ";
    cin >> distance;
    calfuel();
}
void airline ::calfuel()
{
    if (distance <= 1000)
    {
        cout << "The quantity of fuel required is: 500 liters";
    }
    else if (distance > 1000 && distance <= 2000)
    {
        cout << "The quantity of fuel required is: 1100 liters";
    }
    else
    {
        cout << "The quantity of fuel required is: 2200 liters";
    }
}
void airline ::showinfo()
{
    cout << endl << "Flight Number: " << flightno << endl;
    cout << "Destination: " << destination << endl;
    cout << "Distance: " << distance << endl;
    calfuel();
}
int main()
{
    airline a1, a2;
    a1.feedinfo();
    a1.showinfo();

    a2.feedinfo();
    a2.showinfo();
    return 0;
}