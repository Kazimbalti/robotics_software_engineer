#include "Task_1.h"

#include <iostream>

Robot::Robot() {
    temperatureReadings = {5, 10, 15, 20, 25};
    distanceReadings = {50, 60, 70, 80, 90, 100};
}

void Robot::printTemperatureReadings() {
    cout << "Temperature Sensor Readings:\n";
    for (size_t i = 0; i < temperatureReadings.size(); ++i) {
        cout << "  Reading " << i + 1 << ": " << temperatureReadings[i] << "°C\n";
    }
}

void Robot::printDistanceReadings() {
    std::cout << "Distance Sensor Readings:\n";
    for (size_t i = 0; i < distanceReadings.size(); ++i) {
        cout << "  Reading " << i + 1 << ": " << distanceReadings[i] << "cm\n";
    }
}

int main() {
    Robot robot;
    robot.printTemperatureReadings();
    robot.printDistanceReadings();
    return 0;
}
