#include <iostream>
#include <fstream>
#include <vector>
#include "vector3.h"
#include "ray.h"
#include "sphere.h"
#include "camera.h"

//PPM file
void save_to_ppm(const std::string& 
filename, int width, int height, const std::vector<Vector3>& pixels) {
    std::ofstream file(filename);
    file << "P3\n" << width << " " << height << "\n255\n";
    for (const auto& pixel : pixels) {
        file << static_cast<int>(255.99 * pixel.x) << " ";
        file << static_cast<int>(255.99 * pixel.y) << " ";
        file << static_cast<int>(255.99 * pixel.z) << " ";
    }
    file.close();
}

//Function to compute the ray color
Vector3 ray_color(const Ray& r, const Sphere& sphere) {
    float t;
    if (sphere.intersect(r, t)) {
        return Vector3(0.5, 0.5, 0.5);  // gray color for hit
    }
    // Return gradient color for the background (sky)
    Vector3 unit_direction = r.direction.normalized();
    t = 0.5*(unit_direction.y + 1.0);
    return (1.0-t)*Vector3(1.0, 1.0, 1.0) + t*Vector3(0.5, 0.7, 1.0);
}

int main() {
    int width = 200;
    int height = 100;
    std::vector<Vector3> pixels(width * height, Vector3(0, 0, 0));

    Camera camera;
    Sphere sphere(Vector3(0, 0, -1), 0.5);

    for (int j = height-1; j >= 0; --j) {
        for (int i = 0; i < width; ++i) {
            float u = float(i) / float(width);
            float v = float(j) / float(height);
            Ray r = camera.get_ray(u, v);
            pixels[j*width + i] = ray_color(r, sphere);
        }
    }

    save_to_ppm("image.ppm", width, height, pixels);

    std::cout << "Rendering completed!\n";

    return 0;
}