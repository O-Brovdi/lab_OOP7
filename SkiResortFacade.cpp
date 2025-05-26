#include "SkiResortFacade.h"
#include <stdexcept>

SkiRent::RentBoots(int feetSize, int skierLevel) { return 20; }
SkiRent::RentSki(int weight, int skierLevel) { return 40; }
SkiRent::RentPole(int height) { return 5; }

int SkiResortTicketSystem::BuyOneDayTicket() { return 120; }
int SkiResortTicketSystem::BuyHalfDayTicket() { return 60; }

int HotelBookingSystem::BookRoom(int roomQuality) {
    switch (roomQuality) {
        case 3: return 250;
        case 4: return 500;
        case 5: return 900;
        default: throw std::invalid_argument("roomQuality should be in range [3;5]");
    }
}

SkiResortFacade::SkiResortFacade() {
    skiRent = new SkiRent();
    ticketSystem = new SkiResortTicketSystem();
    hotelBooking = new HotelBookingSystem();
}

SkiResortFacade::~SkiResortFacade() {
    delete skiRent;
    delete ticketSystem;
    delete hotelBooking;
}

int SkiResortFacade::HaveGoodRest(int height, int weight, int feetSize, int skierLevel, int roomQuality) {
    int ski = skiRent->RentSki(weight, skierLevel);
    int boots = skiRent->RentBoots(feetSize, skierLevel);
    int pole = skiRent->RentPole(height);
    int ticket = ticketSystem->BuyOneDayTicket();
    int hotel = hotelBooking->BookRoom(roomQuality);
    return ski + boots + pole + ticket + hotel;
}

int SkiResortFacade::HaveRestWithOwnSkis() {
    return ticketSystem->BuyOneDayTicket();
}
