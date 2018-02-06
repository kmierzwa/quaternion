#include "Quaternion.h"
#include <iostream>

using namespace std;

int main() {
  Quaternion q1(1, 0, 0, 0), q2(2, 3, 4, 5);
  Quaternion q = q1 + q2;
  cout << q.getW() << " " << q.getX() << " " << q.getY() << " " << q.getZ() << endl;
  return 0;
}

