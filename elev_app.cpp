// elev_app.cpp
// client-supplied file

#include "elev.h"      // for class declarations

int main()
{
    building theBuilding;
    while (true)
    {
        theBuilding.master_tick();    // send time tick to all cars
        wait(1000);                   // pause

        theBuilding.record_floor_reqs();    // get floor requests from user
    }
    return 0;
}

