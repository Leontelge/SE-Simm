#ifndef RAUM_H
#define RAUM_H

#include <QTime>


#include "sensorbox.h"
#include "fenster.h"

class raum
{
public:
    raum();
    sensorbox sensorbox;
    fenster fenster[10];
    bool fenster_aktive[10];
};

#endif // RAUM_H
