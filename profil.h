#ifndef PROFIL_H
#define PROFIL_H

#include <Qobject>
#include <QTimer>
#include <iostream>

#define LOOP_DURR 255

class profil : public QObject
{
private:
    int timer_ID;
    std::string Name;
public:
    QTimer* Timer;
    // in 1sekunde/1000
    int looptime;



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
};

#endif // PROFIL_H
