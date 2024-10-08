#include<iostream>
using namespace std;


class Complex {
  private:
    int a, b;
  public:
    void setData(int x, int y) {
      a = x;
      b = y;
    }
    void showData() {
      cout<<"a: "<<a<<" b: "<<b<<endl;
    }
    friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex c1, Complex c2) {
  Complex temp;
  temp.a = c1.a + c2.a;
  temp.b = c1.b + c2.b;
  return temp;
}

int main() {
  Complex c1, c2;
  c1.setData(3, 4);
  c2.setData(5, 6);
  // Complex c3 = c1 + c2; // operator+(c1, c2);
  Complex c3 = c1 + c2;
  c3.showData();

  return 0;
}