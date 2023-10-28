#ifndef CAMERA_H
#define CAMERA_H

#include "ray.h"
#include "vector3.h"
#include <typeinfo>
#include <iostream>

class Camera {
    public:
        Camera() {}

        Ray get_ray(float u, float v) const {
            Vector3 lower_left_corner(-2.0, -1.0, -1.0);
            Vector3 horizontal(4.0, 0.0, 0.0);
            Vector3 vertical(0.0, 2.0, 0.0);
            Vector3 origin(0.0, 0.0, 0.0);
            Vector3 direction = lower_left_corner + u * horizontal + v * vertical - origin;
            std::cout << "Type of u: " << typeid(u).name() << std::endl;
            std::cout << "Type of horizontal: " << typeid(horizontal).name() << std::endl;
            std::cout << "Type of v: " << typeid(v).name() << std::endl;
            std::cout << "Type of vertical: " << typeid(vertical).name() << std::endl;

            return Ray(origin, direction);
        }
};

#endif