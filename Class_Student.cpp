#include <iostream>
using namespace std;
/*  2.		Define a class student with the following specification
Private members of class student
admno                        integer
sname                        20 character
eng. math, science       float
total                            float
Public member function of class student
ctotal()                        a function to calculate eng + math + science with float return type.
Takedata()                   Function to accept values for admno, sname, eng, science
 Showdata()                   Function to display all the data members on the screen
*/
class student{
int admno;
char sname[20];
float eng , math , sci,total;
public:
float ctotal();
void takedata();
void showdata();
};
void student :: takedata(){
    cout << "Enter Admno: ";
    cin>>admno;
    cout<<"Enter student name: ";
    cin>>sname;
    cout<<"Enter marks of english: ";
    cin>>eng;
    cout<<"Enter marks of maths: ";
    cin>>math;
    cout<<"Enter marks of science: ";
    cin>>sci;
} 
void student :: showdata(){
    cout << "Admno: "<<admno<<endl;
    cout<<"Student name: "<<sname<<endl;
    cout<<" English marks: "<<eng<<endl;
    cout<<" Science marks: "<<sci<<endl;
    cout<<" Maths marks: "<<math<<endl;
    cout << " Total of marks : " <<ctotal();
}
float student :: ctotal(){
    return eng +math+sci;
}
int main(){
    student s;
    s.takedata();
    s.showdata();
   
    return 0;
}