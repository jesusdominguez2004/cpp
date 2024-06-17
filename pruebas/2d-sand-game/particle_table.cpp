// 2D Sand Game: by "PolarsBear"
#include "particle_table.h"
#include <iostream>

ParticleTable::ParticleTable() = default;

ParticleTable::ParticleTable(int size) {
    for (int x = 0; x != int(size); x++) {
        for (int y = 0; y != int(size); y++) {
            table[std::pair<int, int>(x, y)] = Particle::Air(x, y);
        }
    }
}

Particle ParticleTable::get(int x, int y) {
    return table[std::pair<int, int>(x, y)];
}

void ParticleTable::set(int x, int y, Particle value) {
    value.x = x;
    value.y = y;
    table[std::pair<int, int>(x, y)] = value;
    value.draw();
} 

void ParticleTable::update() {
    for (auto& a : table) {
        auto v = a.second;
        if (v.id != 0) {
            v.update();
        }
    }
}
