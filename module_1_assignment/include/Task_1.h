#ifndef ROBOT_H
#define ROBOT_H

#include <vector>
using namespace std;

class Robot {
private:
    vector<int> temperatureReadings;
    vector<int> distanceReadings;

public:
    Robot();
    void printTemperatureReadings();
    void printDistanceReadings();
};

#endif 