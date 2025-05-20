#include <iostream>
using namespace std;
class date
{
private:
  int dd, mm, yy;

public:
  date() {};
  date (int , int ,int ){};
  friend void operator>>(istream &in , date &d);
  friend void operator<<(ostream &out , date &d);

  date operator ++ (int){
    int &d = dd;
    int &m = mm;
    int &y = yy;
   
    if (m<12){
      if ( m == 1 || 3 || 5 || 7 || 8 || 10){
        if (d==31){
          d=1;
          m++;
        }
        else{
          d++;
        }
      }
      else if (m == 2 || 4 || 6 || 9 || 11){
        if ( d== 30){
          d=1;
          m++;
        }
        else{
          d++;
        }
      }
      
    }
    else {
      if (d==31){
      d=1;
      m=1;
      y++;
      }
      else{
        d++;
      }
    }
    return date(d , m , y);
  }
  
};
void operator>>(istream &in , date &d)
{
  cout << " Enter date : " << endl;
  in >> d.dd;
  cout << " Enter month : " << endl;
  in >> d.mm;
  cout << " Enter year : " << endl;
  in >> d.yy;
  if (d.dd >31 || d.mm >12 ){
    cout << " Invalid date " << endl;
    exit(0);
  }
}
void operator<<(ostream &out , date &d)
{
  out << " Date : " << d.dd << " / " << d.mm << " / " << d.yy << endl;
}
int main()
{
  date d1;
  cin >> d1;
  cout << " Today's date : " << endl;
  cout << d1;
  d1++;
  cout << " Incremented date : " << endl;
  cout << d1;
  return 0;
}