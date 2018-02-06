#include "Quaternion.h"

Quaternion::Quaternion()
{
  w = 1.0f;
  x = 1.0f;
  y = 1.0f;
  z = 1.0f; 
}

Quaternion::Quaternion(float w, float x, float y, float z)
{
  this->w = w;
  this->x = x;
  this->y = y;
  this->z = z;
}

Quaternion Quaternion::operator+(Quaternion q)
{
  return Quaternion(w + q.w, x + q.x, y + q.y, z + q.z);
}

float Quaternion::getW()
{
  return this->w;
}

float Quaternion::getX() 
{
  return this->x;
}


float Quaternion::getY() 
{
  return this->y;
}


float Quaternion::getZ() 
{
  return this->z;
}
