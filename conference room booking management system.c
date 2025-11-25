#include <stdio.h>
#include <string.h>

#define MAX_BOOKINGS 100

typedef struct {
    char date[11];       // Format: YYYY-MM-DD
    char startTime[6];   // Format: HH:MM
    char endTime[6];     // Format: HH:MM
} Booking;

typedef struct {
    char roomName[50];
    int capacity;
    Booking bookings[MAX_BOOKINGS];
    int bookingCount;
} ConferenceRoom;

int isAvailable(ConferenceRoom *room, char *date, char *start, char *end) {
    for (int i = 0; i < room->bookingCount; i++) {
        if (strcmp(room->bookings[i].date, date) == 0) {
            if (!(strcmp(end, room->bookings[i].startTime) <= 0 || strcmp(start, room->bookings[i].endTime) >= 0)) {
                return 0; // Conflict
            }
        }
    }
    return 1; // Available
}

void bookRoom(ConferenceRoom *room, char *date, char *start, char *end) {
    if (isAvailable(room, date, start, end)) {
        Booking newBooking;
        strcpy(newBooking.date, date);
        strcpy(newBooking.startTime, start);
        strcpy(newBooking.endTime, end);
        room->bookings[room->bookingCount++] = newBooking;
        printf("Room '%s' booked on %s from %s to %s.\n", room->roomName, date, start, end);
    } else {
        printf("Room '%s' is not available at that time.\n", room->roomName);
    }
}

void showBookings(ConferenceRoom *room) {
    printf("Bookings for room '%s':\n", room->roomName);
    for (int i = 0; i < room->bookingCount; i++) {
        printf(" - %s: %s to %s\n", room->bookings[i].date, room->bookings[i].startTime, room->bookings[i].endTime);
    }
}

int main() {
    ConferenceRoom room = {"Orchid", 10, {}, 0};

    bookRoom(&room, "2025-11-21", "10:00", "11:00");
    bookRoom(&room, "2025-11-21", "10:30", "11:30"); // Conflict
    bookRoom(&room, "2025-11-21", "11:30", "12:30"); // Available

    showBookings(&room);

    return 0;
}