#include <iostream>
#include <string>

using namespace std;

static const int DIM_MAX = 150;
static const int VOL_MAX = 1000000;
static const int MASS_MAX = 20;

string sort(int width, int height, int length, int mass)
{
  bool bulky = width >= DIM_MAX || height >= DIM_MAX || length >= DIM_MAX ||
    width * height * length >= VOL_MAX;
  bool heavy = mass >= MAX_MAX;
  if (bulky + heavy < 1)
    return "STANDARD";
  if (bulky + heavy < 2)
    return "SPECIAL";
  return "REJECTED";
}
