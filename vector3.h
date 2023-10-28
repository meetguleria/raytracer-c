#ifndef VECTOR3_H
#define VECTOR3_H

#include <cmath>

class Vector3 {
    public:
        float x, y, z;

        Vector3() : x(0), y(0), z(0) {}
        Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

        Vector3 operator-() const {
            return Vector3(-x, -y, -z);
        }

        Vector3& operator+=(const Vector3 &v) {
            x += v.x;
            y += v.y;
            z += v.z;
            return *this;
        }

        Vector3 operator+(const Vector3 &v) const {
            return Vector3(x + v.x, y + v.y, z + v.z);
        }

        Vector3 operator-(const Vector3 &v) const {
            return Vector3(x - v.x, y - v.y, z - v.z);
        }

        Vector3 operator*(float t) const {
            return Vector3(x * t, y * t, z * t);
        }

        float dot (const Vector3 &v) const {
            return x * v.x + y * v.y + z * v.z;
        }

        Vector3 normalized() const {
            float length = std::sqrt(x * x + y * y + z * z);
            return Vector3(x / length, y / length, z / length);
        }
};

inline Vector3 operator*(float t, const Vector3& v) {
    return Vector3(t * v.x, t * v.y, t * v.z);
}

#endif /* VECTOR3_H */