// 2D Sand Game: by "PolarsBear"
#include "particle.h"

Particle::Particle(int x, int y, Color3 color, std::string name, int id, int density) {
    this -> x = x;
    this -> y = y;
    this -> color = color;
    this -> name = name;
    this -> id = id;
    this -> density = density;
}

Particle::Particle() = default;

Particle Particle::Air(int x, int y) {
    return *new Particle(x, y, *new Color3(0.0, 0.0, 0.0), std::string("air"), 0, 0);
}

Particle Particle::Sand(int x, int y) {
    return *new Particle(x, y, *new Color3(1.0, 1.0, 0.0), std::string("sand"), 1, 2);
}

Particle Particle::Water(int x, int y) {
    return *new Particle(x, y, *new Color3(0.0, 0.0, 1.0), std::string("water"), 2, 1);
}
