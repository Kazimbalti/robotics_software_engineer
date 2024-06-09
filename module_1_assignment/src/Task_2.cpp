#include "Task_2.h"

Robot::Robot(std::string n, double s, double w, double sz, int sensors) 
    : name(n), speed(s), weight(w), size(sz), numberOfSensors(sensors) {}

// Methods for moving
void Robot::moveForward() {
    std::cout << name << " is moving forward at speed " << speed << std::endl;
}

void Robot::moveBackward() {
    std::cout << name << " is moving backward at speed " << speed << std::endl;
}

void Robot::stop() {
    std::cout << name << " is stopping." << std::endl;
}

// Display robot details
void Robot::displayDetails() {
    std::cout << "Robot Name: " << name << std::endl;
    std::cout << "Speed: " << speed << " m/s" << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
    std::cout << "Size: " << size << " m^3" << std::endl;
    std::cout << "Number of Sensors: " << numberOfSensors << std::endl;
}

namespace Robots {
    namespace RobotA {
        Robot robot("TB3", 1.5, 50.0, 1.0, 5);
    }

    namespace RobotB {
        Robot robot("TB4", 2.0, 100.0, 2.5, 10);
    }
}

int main() {
    // Instantiate and simulate actions for RobotA
    Robots::RobotA::robot.displayDetails();
    Robots::RobotA::robot.moveForward();
    Robots::RobotA::robot.stop();
    Robots::RobotA::robot.moveBackward();
    Robots::RobotA::robot.stop();

    std::cout << std::endl;

    // Instantiate and simulate actions for RobotB
    Robots::RobotB::robot.displayDetails();
    Robots::RobotB::robot.moveForward();
    Robots::RobotB::robot.stop();
    Robots::RobotB::robot.moveBackward();
    Robots::RobotB::robot.stop();

    return 0;
}
