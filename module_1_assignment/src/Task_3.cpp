#include "Task_3.h"

int main() {

    // Instantiate sensors
    TemperatureSensor tempSensor;
    DistanceSensor distanceSensor;

    // Get readings from sensors
    tempSensor.getReading();
    distanceSensor.getReading();

    // Use GenericSensor template class
    GenericSensor<double> doubleSensor;
    doubleSensor.processData(5.5, 10.7);

    GenericSensor<std::string> stringSensor;
    stringSensor.processData(std::string("Tempsensor"), std::string("DistanceSensor"));

    GenericSensor<char> charSensor;
    charSensor.processData('A', 'B');

    return 0;
}
