#ifndef STEUERELEMENT_H
#define STEUERELEMENT_H

#include "drehsensor.h"
#include "profil.h"
#include "raum.h"
#include "wetterstation.h"

#define ANZAHL_RAUME 255
#define ANZAHL_PROFILE 128

class Steuerelement : public QObject
{
protected:
    profil* profile[ANZAHL_PROFILE];
public:
    Steuerelement();

    Steuerelement* Raumsegmente[ANZAHL_RAUME];
    raum raum;
    wetterstation wetter_station;
    Drehsensor Drehsensoren[2];

    profil profil_erstellen();
    wetterstation get_wetterstation();

    int time;
    QTimer* Timer;

    void onTimerTimeout();
};

#endif // STEUERELEMENT_H
