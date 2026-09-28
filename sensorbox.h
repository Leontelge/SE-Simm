#ifndef SENSORBOX_H
#define SENSORBOX_H

class sensorbox
{
public:
    sensorbox();
    // in ppm
    int co2;
    // in ppm
    int feuchtigkeit;
    //in grad C
    int temperatur;
    // in lux
    int helligkeit;
};

#endif // SENSORBOX_H
