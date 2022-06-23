#include<iostream>

int fib(int n) {
  if(n <= 1) return 1;
  else return fib(n-1) + fib(n-2);
}

int main() {
  int l;
  std::cin >> l;
  for(int i = 0; i < l; i++)
    std::cout << fib(i) << std::endl;
}