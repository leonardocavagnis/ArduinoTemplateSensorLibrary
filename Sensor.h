/**
  ******************************************************************************
  * @file    Sensor.h
  * @author  Leonardo Cavagnis
  * @version V1.0.0
  * @brief   Template library for sensor
  *
  ******************************************************************************
  */

#ifndef SENSOR_H
#define SENSOR_H

#include "Arduino.h"

class Sensor
{
  public:
    Sensor(int pin);
    void begin();
    void end();
    int sensorRead();
  private:
    int _pin;
};

#endif /* SENSOR_H */

