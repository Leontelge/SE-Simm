#ifndef HAUS_H
#define HAUS_H

#include "etage.h"
#include "wetterstation.h"

class haus
{
public:
    haus();
    etage etagen[3];
    wetterstation wetter;
    //
};

#endif // HAUS_H
