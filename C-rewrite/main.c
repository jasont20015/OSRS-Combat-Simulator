#include "main.h"
//Twisted bow calculations:
//
// get min of opponent magic damage and 350 in raids, 250 outside raids
// damage calc =
// 250+(10*3*x/10-14)/100-(3*x/10-140)^2/100
//
// accuracy calc =
// 140+(10*3*x/10-10)/100-(3*x/10-100)^2/100

struct Stat {
    uint8_t baseLevel;
    uint8_t visualLevel;
};

struct Player{
    uint8_t attack_cycle;
    Stat attack;
    Stat strength;
    Stat ranged;
    Stat magic;
};

int main() {

    return 0;
}
