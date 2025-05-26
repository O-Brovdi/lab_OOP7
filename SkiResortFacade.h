#ifndef SKIRESORTFACADE_H
#define SKIRESORTFACADE_H

using namespace std;

class SkiRent {
public:
    int RentBoots(int feetSize, int skierLevel);
    int RentSki(int weight, int skierLevel);
    int RentPole(int height);
};

class SkiResortTicketSystem {
public:
    int BuyOneDayTicket();
    int BuyHalfDayTicket();
};

class HotelBookingSystem {
public:
    int BookRoom(int roomQuality);
};

class SkiResortFacade {
private:
    SkiRent* skiRent;
    SkiResortTicketSystem* ticketSystem;
    HotelBookingSystem* hotelBooking;
public:
    SkiResortFacade();
    ~SkiResortFacade();
    int HaveGoodRest(int height, int weight, int feetSize, int skierLevel, int roomQuality);
    int HaveRestWithOwnSkis();
};

#endif