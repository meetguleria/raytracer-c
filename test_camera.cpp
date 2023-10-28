#include "vector3.h"
#include "ray.h"
#include <typeinfo>
#include <iostream>

int main() {
    Vector3 lower_left_corner(-2.0, -1.0, -1.0);
    Vector3 horizontal(4.0, 0.0, 0.0);
    Vector3 vertical(0.0, 2.0, 0.0);
    Vector3 origin(0.0, 0.0, 0.0);
    float u = 0.5; // some example value
    float v = 0.5; // some example value

    Vector3 u_horizontal = horizontal.operator*(u);
    Vector3 v_vertical = vertical.operator*(v);\
    std::cout << "Type of u: " << typeid(u).name() << std::endl;
    std::cout << "Type of horizontal: " << typeid(horizontal).name() << std::endl;
    std::cout << "Type of v: " << typeid(v).name() << std::endl;
    std::cout << "Type of vertical: " << typeid(vertical).name() << std::endl;

    Vector3 sum1 = lower_left_corner + u_horizontal;
    Vector3 sum2 = sum1 + v_vertical;

    Vector3 direction = sum2 - origin;


    // Now print or inspect these intermediate variables to debug further

    return 0;
}
