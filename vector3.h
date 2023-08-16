#ifndef VECTOR3_H
#define VECTOR3_H

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
};

#endif /* VECTOR3_H */