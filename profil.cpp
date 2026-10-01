#include "profil.h"

profil::profil(std::string name) {
    looptime = 1000;
    Name = name;
    Timer = new QTimer(this);

    connect(Timer, &QTimer::timeout, this, &profil::onTimerTimeout);

    Timer->start(looptime);
}

void profil::onTimerTimeout() {
    std::cout << "Timer Expired in Profil"<< Name << std::endl;
    //beispiel!!!!
}
