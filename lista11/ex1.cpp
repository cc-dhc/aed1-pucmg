#include<iostream>
#include<cmath>

class Ponto {
  private:
    float x;
    float y;

  public:
    Ponto(float x, float y): x(x), y(y) { }

    inline float distancia(Ponto p) 
    {
      return sqrt(pow(p.x-x, 2) + pow(p.y-y, 2));
    }
};

int main() {
  Ponto p1(1, 2), p2(3, 4);
  std::cout << p1.distancia(p2) << std::endl;
}