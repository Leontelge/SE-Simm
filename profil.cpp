#include "profil.h"

profil::profil(std::string name) {
    looptime = 1000;
    Name = name;
    Timer = new QTimer(this);

    connect(Timer, &QTimer::timeout, this, &profil::onTimerTimeout);

    Timer->start(looptime);
}

void profil::onTimerTimeout() {
    Timer->stop();
    std::cout << "Timer Expired in Profil "<< Name << std::endl;
    //beispiel!!!!
}

void profil::add_time(int time) {
    int i = 0;
    while(looptimes[i] != 0 && i <= LOOP_Length-1) {
        i++;
    }
    if(i != LOOP_Length-1) {
        looptimes[i] = time*1000;
    }
}

void profil::remove_time(int index) {
    int i = index;
    while(looptimes[i] != 0 && i < LOOP_Length-1) {
        looptimes[i] = looptimes[i+1];
    }
}
