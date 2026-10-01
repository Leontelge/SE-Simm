#include "steuerelement.h"

Steuerelement::Steuerelement() {
    Timer = new QTimer(this);

    connect(Timer, &QTimer::timeout, this, &Steuerelement::onTimerTimeout);
}

void Steuerelement::onTimerTimeout() {
    time =raum.modi.aktives_profil.looptimes[0];//ersten enhmen und alten nach hinten packen
    //-- Noch implementieren dies ist nur ein übergangsbeispiel
    //wenn ich Zentralsegment (Raum.name == Spezial)
    //wetter_station.aktualisieren();
    //wenn ich raumsegent (Raum.name != Spezial)
    //Sensorbox.aktualisire();
    //raum.positionsermittlung()
    //raum.reposition();

}
