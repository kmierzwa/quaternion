#ifndef _QUATERNION_H
#define _QUATERNION_H

class Quaternion {
  private:
    float w, x, y, z;
  public:
    Quaternion();
    Quaternion(float w, float x, float y, float z);
    float getW();
    float getX();
    float getY();
    float getZ();
    Quaternion operator+(Quaternion q);
};

#endif
