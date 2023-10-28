---

# Ray Tracing Project in C++

## Overview

This project aims to implement a basic ray tracer in C++ to render 3D scenes. The current implementation supports rendering spheres with Phong shading against a gradient background.

## Features

### Implemented

- **Vector Operations**: Support for basic vector arithmetic (addition, subtraction, dot product).
- **Ray Representation**: Class to represent rays emitted from the camera.
- **Sphere Representation**: Class to represent spheres in the 3D space.
- **Ray-Sphere Intersection**: Algorithm to check if a ray intersects a sphere.
- **Camera Setup**: Class to represent the camera and generate rays based on pixel coordinates.
- **Basic Rendering**: Main loop to render a scene containing a sphere against a gradient background.

### Upcoming

- **Anti-Aliasing**: To smooth out the edges of rendered objects.
- **Shadows and Reflections**: To add more realism to the scene.
  
## Code Structure

- `vector3.h`: Header file for the `Vector3` class, which handles 3D vector operations.
- `ray.h`: Header file for the `Ray` class, representing rays in 3D space.
- `sphere.h`: Header file for the `Sphere` class, representing spheres in the scene.
- `camera.h`: Header file for the `Camera` class, representing the camera in the scene.
- `main.cpp`: The main driver code that sets up the scene and performs the rendering.

## Usage

1. Compile the code using `g++ main.cpp -o main -std=c++11`.
2. Run the executable using `./main`.
3. The rendered image will be saved as `image.ppm`.

## Dependencies

- C++11 or above

---