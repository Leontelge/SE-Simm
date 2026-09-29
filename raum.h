#ifndef RAUM_H
#define RAUM_H

#include <QTime>

#include "modus.h"
#include "sensorbox.h"
#include "fenster.h"

#define MAX_FENSTER 10

class raum
{
public:
    raum();

    QString name;
    modus modi;

    sensorbox sensorbox;
    fenster fenster[MAX_FENSTER];
    bool fenster_aktive[MAX_FENSTER];

    void add_fenster();
    class fenster* remove_fenster();
    int positionsermittlung();
    void alle_zu();
    void alle_auf();
    void set_Modi(modus modi);
    QString get_name();
    bool reposition_all();
};

#endif // RAUM_H
