#ifndef PROFIL_H
#define PROFIL_H

#include <Qobject>
#include <QTimer>
#include <iostream>

#define LOOP_Length 255

class profil : public QObject
{
private:
    std::string Name;
public:
    QTimer* Timer;
    // in 1sekunde/1000
    int looptime;

    int looptimes[LOOP_Length];

    int Zielposition;
    int sollwert_licht;
    int sollwert_co2;
    int sollwert_temp;
    int sollwert_feucht;

    int cmp_licht(int licht);
    int cmp_co2(int co2);
    int cmp_temp(int temp);
    int cmp_feucht(int feucht);

    profil(std::string name);
protected:
    void onTimerTimeout();
    //fügt zu den array looptimes eine zeit hinten an (time in sek)
    void add_time(int time);
    void remove_time(int index);
};

#endif // PROFIL_H
