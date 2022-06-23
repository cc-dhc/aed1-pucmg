#include<iostream>

void swap(int *a, int *b) {
  if(*a < *b) {
    int swap = *a;
    *a = *b;
    *b = swap;
  }
}

int main() {
  int n, m;
  std::cin >> n >> m;
  swap(&n, &m);
  std::cout << "n = " << n << std::endl;
  std::cout << "m = " << m << std::endl;
}