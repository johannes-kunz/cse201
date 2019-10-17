#include <iostream>
#include <cstdlib>

#include "Complex.hpp"

Complex coord_transform(int row, int col, int width, int height)
{
  double x = 4.0 * col / width - 2.5;
  double y = 2.2 * row / height - 1.1;
  return Complex(x, y);
}

const int n_rounds = 1000;

bool in_mandelbrot(const Complex &c)
{
  Complex z = c;
  for (int rnd = 0; rnd < n_rounds; rnd++) {
    z = z * z + c;
    if (z.magnitude() > 2.0)
      return true;
  }
  return false;
}

int main(int argc, char **argv)
{
  int width = 80, height = 40;
  if (argc == 3) {
    width = std::abs(std::atoi(argv[1]));
    height = std::abs(std::atoi(argv[2]));
  }
  for (int r = 0; r < height; r ++) {
    for (int c = 0; c < width; c ++) {
      if (in_mandelbrot(coord_transform(r, c, width, height)))
        std::cout << '#';
      else
        std::cout << ' ';
    }
    std::cout << std::endl;
  }

  Complex c;
  return 0;
}
