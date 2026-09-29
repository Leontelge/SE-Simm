#ifndef STEUERELEMENT_H
#define STEUERELEMENT_H

#include "drehsensor.h"
#include "profil.h"
#include "raum.h"
#include "wetterstation.h"

#define ANZAHL_RAUME 255

class Steuerelement
{
public:
    Steuerelement();

    Steuerelement* Raumsegmente[ANZAHL_RAUME];
    raum raum;
    wetterstation wetter_station;
    Drehsensor Drehsensoren[2];

    profil profil_erstellen();
    wetterstation get_wetterstation();


};

#endif // STEUERELEMENT_H
