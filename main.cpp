#include "noise.h"
#include <iostream>

int main() {
    Noise noise;
    noise.init();

    for (double x = 0; x < 0.5; x += 0.05) {
        for (double y = 0; y < 0.5; y += 0.05) {
            for (double z = 0; z < 0.5; z += 0.05) {
		double value = noise.noise(x,y,z);

                std::cout << "\33[0;34m[Coords]:\33[0m {" << x << ", " << y << ", " << z << "} ";
		std::cout << "\33[0;32m" << value << "\33[0m\n";
            }
        }
    }

    return 0;
}
