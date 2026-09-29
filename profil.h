#ifndef PROFIL_H
#define PROFIL_H

#include <QTime>

#define LOOP_DURR 255

class profil
{
public:
    QTime timer;
    QTime Zeitpunkt[LOOP_DURR];
    int Zielposition[LOOP_DURR];
    int sollwert_licht;
    int sollwert_co2;
    int sollwert_temp;
    int sollwert_feucht;

    int cmp_licht(int licht);
    int cmp_co2(int co2);
    int cmp_temp(int temp);
    int cmp_feucht(int feucht);

    profil();
};

#endif // PROFIL_H
