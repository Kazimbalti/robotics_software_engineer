#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

class Robot {
private:
    std::string name;
    double speed;
    double weight;
    double size;
    int numberOfSensors;

public:
    Robot(std::string n, double s, double w, double sz, int sensors);

    void moveForward();
    void moveBackward();
    void stop();
    void displayDetails();

};
#endif