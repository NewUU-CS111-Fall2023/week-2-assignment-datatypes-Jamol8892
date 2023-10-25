#include <iostream>
#include <cstdlib>
#include <ctime>

bool EnemySpawn() {
    return rand() % 2 == 1; // done for 50% spawn chance
}

int SpawnPrediction() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int num;
    std::cout << "Enter the number of coordinates: ";
    std::cin >> num;

    int charX = 0;
    int charY = 0;
    bool charAlive = true;

    for (int i = 0; i < num; i++) {
        int newX, newY;
        std::cout << "Enter the coordinates (x, y): ";
        std::cin >> newX >> newY;

        if (charAlive) {
            charX = newX;
            charY = newY;

            if (EnemySpawn()) {
                std::cout << "Character encountered the enemy and died." << std::endl;
                charAlive = false;
            }
        } else {
            std::cout << "Character is already dead. No movements anymore." << std::endl;
        }
    }
    if (charAlive) {
        std::cout << "Character survived at coordinate " << charX << ", " << charY << std::endl;
    }
    return 0;
}
