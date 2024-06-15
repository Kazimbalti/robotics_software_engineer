#ifndef SENSOR_LIBRARY_HPP
#define SENSOR_LIBRARY_HPP

#include <iostream>
#include <string>

// TemperatureSensor class
class TemperatureSensor{
public:
    void getReading(){
        double temperature = (std::rand() % 5000) / 100.0; 
        std::cout << "Temperature reading: " << temperature << "°C" << std::endl;
    }
};

// DistanceSensor class
class DistanceSensor{
public:
    void getReading(){
        double distance = (std::rand() % 5000) / 100.0; 
        std::cout << "Distance reading: " << distance << "m" << std::endl;
    }
};

// Single class template for multiple sensor types
template <typename T>
class GenericSensor {
public:
    void processData(T data1, T data2) {
        std::cout << "Process data: " << data1 << " and " << data2 << std::endl;
    }
};

#endif // SENSOR_LIBRARY_HPP
