project title:-
conference room booking management system  



 Overview
This project is a simple console-based Conference Room Booking Management System written in C.
It allows users to:
- Add conference rooms with ID, name, and capacity.
- Book rooms for specific dates and times.
- Prevent overlapping bookings (basic conflict detection).
- View all existing bookings.
- Exit the system gracefully.
This is a lightweight program designed for learning and demonstration purposes. It uses arrays and structures to manage rooms and bookings in memory.

 
 Technologies Used
- Language: C
- Libraries:
- <stdio.h> for input/output
- <string.h> for string handling

 How to Compile and Run
- Save the code in a file, e.g., booking_system.c.
- Open a terminal/command prompt.
- Compile the program:
gcc booking_system.c -o booking_system
- Run the program:
./booking_system



 Sample Usage
Adding Rooms
Conference Room Booking System
1. Add Room
2. Book Room
3. View Bookings
4. Exit
Enter choice: 1
Enter Room ID: 1
Enter Room Name: RoomA
Enter Capacity: 10
Room 'RoomA' added successfully!


Booking Rooms
Enter choice: 2
Enter Room ID: 1
Enter Date (YYYY-MM-DD): 2025-12-05
Enter Start Time (HH:MM): 10:00
Enter End Time (HH:MM): 12:00
Enter Organizer: Vinny
Room 1 booked successfully for 2025-12-05 by Vinny.


Conflict Detection
Enter choice: 2
Enter Room ID: 1
Enter Date (YYYY-MM-DD): 2025-12-05
Enter Start Time (HH:MM): 11:00
Enter End Time (HH:MM): 13:00
Enter Organizer: Alice
Booking conflict! Room already booked during this time.


Viewing Bookings
Enter choice: 3
Room ID: 1, Date: 2025-12-05, Time: 10:00-12:00, Organizer: Vinny



 Future Improvements
- Add file storage (save/load bookings to disk).
- Improve time comparison (instead of string-based checks).
- Add room search and cancellation features.
- Build a GUI or web interface for easier interaction.

 Author
Developed by Vinny as a simple demonstration of C programming with structures and arrays.

Would you like me to extend this README with installation instructions for Windows (Dev-C++/MinGW) so it’s beginner-friendly for people who don’t use Linux/macOS terminals?


## abstract

The Conference Room Booking Management System is a simple program that helps users book, view, and cancel conference room reservations. It checks whether a room is available before booking, which prevents double-booking and scheduling conflicts. The project uses basic programming concepts like menu-driven options, validation, and data storage (optional). It is designed to make room scheduling easy and well-organized inside an office or institution.
This program implements a Conference Room Booking System in C. It allows users to manage multiple conference rooms and schedule bookings while preventing conflicts. The system is menu-driven and provides the following core functionalities:
- Room Management
- Users can add new conference rooms with a unique ID, name, and seating capacity.
- A maximum of 10 rooms can be stored.
- Booking Management
- Users can book a room by specifying the room ID, date, start time, end time, and organizer.
- The system checks for scheduling conflicts to ensure that no two bookings overlap for the same room on the same date.
- A maximum of 50 bookings can be stored.
- Conflict Detection
- The program compares the requested booking time with existing bookings to detect overlaps.
- If a conflict is found, the booking is rejected with an appropriate message.
- Viewing Bookings
- Users can view all exis- ting bookings, including room ID, date, time slot, and organizer details.
- If no bookings exist, the system informs the user.
- Interactive Menu
- The program runs in a loop, offering options to add rooms, book rooms, view bookings, or exit.
- Input validation ensures users are guided with appropriate messages for invalid choices.
Features

Add Room: Register a new conference room with unique ID, name, and seating capacity.
Book Room: Reserve a room for a given date and time, with organizer details.
Conflict Detection: Prevents double-booking of the same room at overlapping times.
View Bookings: Displays all confirmed bookings.
Exit: Ends the program.


## Summary

This project allows users to manage conference room bookings in a simple way. Users can see available rooms, book a room for a specific date and time, cancel bookings, and view all reservations. The system ensures that no two people book the same room at the same time. Overall, it provides an easy and effective solution for handling meeting room schedules.
<img width="576" height="241" alt="Screenshot 2025-11-25 100437" src="https://github.com/user-attachments/assets/4e244ef5-ded4-497e-a61c-6f1ca2fdb1d4" />

