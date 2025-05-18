// #include <bits/stdc++.h>
// using namespace std;

// // Forward declaration of classes
// class Ticket
// {
// public:
//     int ID;
//     std::string event;
//     std::string guest;

// public:
//     // Constructor
//     Ticket(int ID, const std::string &event, const std::string &guest)
//         : ID(ID), event(event), guest(guest) {}

//     // Getters
//     int getID() const
//     {
//         return ID;
//     }

//     std::string getEvent() const
//     {
//         return event;
//     }

//     std::string getGuest() const
//     {
//         return guest;
//     }
// };

// // Base class: Student
// class Student
// {
// public:
//     std::string name;
//     int id;
//     double fees;
//     std::vector<std::string> eventList;

// public:
//     // Constructor
//     Student(const std::string &name, int id, double fees)
//         : name(name), id(id), fees(fees) {}
//     // Member functions
//     void updateDetails(const std::string &newName, double newFees)
//     {
//         name = newName;
//         fees = newFees;
//     }

//     void chooseEvents(const std::vector<std::string> &events)
//     {
//         eventList = events;
//     }
// };

// // Subclass: Participant
// class Participant : public Student
// {
// private:
//     std::string teamName;

// public:
//     // Constructor
//     Participant(const std::string &name, int id, double fees, const std::string &teamName)
//         : Student(name, id, fees), teamName(teamName) {}

//     // Getter for teamNameve
//     std::string getTeamName() const
//     {
//         return teamName;
//     }
// };

// // Subclass: Viewer
// class Viewer : public Student
// {
// public:
//     // Constructor
//     int seats;
//     Viewer(const std::string &name, int id, double fees, int seats)
//         : Student(name, id, fees), seats(seats) {}

//     // Getter for seats
//     int getSeats() const
//     {
//         return seats;
//     }
// };

// // BookingSystem class
// class BookingSystem
// {
// public:
//     std::vector<std::string> eventList;
//     double ticketFees;
//     std::vector<Ticket> bookings;
//     std::vector<Participant> participantList;
//     std::vector<Viewer> viewerList;
// };

// class Schedule
// {
// public:
//     string start, end, day;
// };
// class Venue
// {
// public:
//     string location, building, roomNo;
// };
// class Event
// {
// public:
//     int ID;
//     string name;
//     vector<Participant> ParticipantList;
//     vector<Viewer> viewerList;
//     int capacity;
//     Venue location;
//     string prize;
//     int budget;
//     int day;
//     Schedule timing;
//     void display()
//     {
//         std::cout << "Name: " << name << std::endl;
//         std::cout << "Location: " << location.location << "   Building: " << location.building << "   Room NO: " << location.roomNo << std::endl;
//         std::cout << "Day: " << day << std::endl;
//         std::cout << "Prize: " << prize << std::endl;
//         std::cout << "Start: " << timing.start << "End: " << timing.end << std::endl;
//         cout << "\n\n\n";
//     }
// };
// class Report
// {
// public:
//     Event *event;
//     vector<pair<string, int>> progress;
//     vector<string> issues;
//     void addTask()
//     {
//         cout << "Enter the task: " << endl;
//         string task;
//         cin >> task;
//         progress.push_back({task, 0});
//         cout << "Task added!";
//     }
//     void updateProgress()
//     {
//         int choice = 0;
//         for (int i = 0; i < progress.size(); i++)
//         {
//             cout << "Task : " << progress[i].first << " Status : " << progress[i].second << endl;
//             cout << "Do you want to change its status?(1/0)";
//             cin >> choice;
//             if (choice == 1)
//             {
//                 progress[i].second = 1;
//                 cout << "Status Changed!..." << endl;
//             }
//         }
//     }
//     void displayIssues()
//     {
//         for (int i = 0; i < issues.size(); i++)
//         {
//             cout << " Description = " << issues[i] << endl;
//         }
//     }
// };
// class StaffTeam
// {
// public:
//     vector<string> members;
//     void performTasks()
//     {
//         cout << "Tasks Performed!...";
//     }
// };
// class StaffManager
// {
// public:
//     int maintenance_amt;
//     Event event;
//     string name;
//     StaffTeam staff;
//     Report report;
//     void assignTasks()
//     {
//         report.addTask();
//     }
//     void reportIssue()
//     {
//         string des;
//         cout << "Enter the Issue: ";
//         cin >> des;
//         report.issues.push_back(des);
//         cout << "Issue Reported!" << endl;
//     }
//     void viewTeam()
//     {
//         for (int i = 0; i < staff.members.size(); i++)
//         {
//             cout << "\nName: " << staff.members[i] << endl;
//         }
//         cout << "\n";
//     }
// };
// class Manager
// {
// private:
//     int password = 1234;

// public:
//     int getPass()
//     {
//         return password;
//     }
// };

// class Treasurer
// {
// private:
//     int ticketSold;
//     int amt;

// public:
//     bool approvePayments(int amount, int type, int target)
//     {
//         if (type == 0)
//         {
//             if (amount == target)
//             {
//                 cout << "Approved!" << endl;
//                 return true;
//             }
//             else
//             {
//                 cout << "pay the correct amount" << endl;
//                 return false;
//             }
//         }
//         else
//         {
//             if (amount == 150)
//             {
//                 cout << "Approved!" << endl;
//                 return true;
//             }
//             else
//             {
//                 cout << "Failed! pay the correct amount" << endl;
//                 return false;
//             }
//         }
//     }
//     void earnings()
//     {
//         cout << "\nTickets Sold: " << ticketSold << endl;
//         cout << "\nIncome = " << amt << endl;
//     }
//     void setAmt(int x)
//     {
//         amt = x;
//     }
//     void setTickets(int x)
//     {
//         ticketSold = x;
//     }
//     int getAmt()
//     {
//         return amt;
//     }
//     int getTickets()
//     {
//         return ticketSold;
//     }
// };

// class Sponser
// {
// public:
//     int name;
//     string event;
// };
// class Poster
// {
// public:
//     string details;
//     string event;
//     void edit()
//     {
//         cout << "\n\nEnter the Event: ";
//         cin >> event;
//         cout << "Enter Details";
//         cin >> details;
//     }
// };
// class Promoter
// {
// public:
//     vector<Sponser> sponsorList;
//     Poster poster;
//     void promote()
//     {
//         cout << poster.details << endl;
//     }
// };

// class Admin
// {
// public:
//     vector<pair<string, int>> request;
//     void approve()
//     {
//         int choice = 0;
//         int s = request.size();
//         for (int i = s - 1; i >= 0; i--)
//         {
//             cout << "\nReason: " << request[i].first;
//             cout << "\nAmount = " << request[i].second;
//             cout << "\nApprove?(1/0)";
//             cin >> choice;
//             if (choice == 1)
//             {
//                 cout << "\nBudget approved!\n";
//                 request.pop_back();
//             }
//             else
//             {
//                 cout << "\nDeclined\n";
//             }
//         }
//     }
// };

// class Organiser
// {
// public:
//     int TotalBudget;

//     Promoter marketing;
//     Treasurer treasurer;

//     vector<Event> eventList;
//     BookingSystem system;

//     void addEvent()
//     {
//         cout << "Enter id, name, day" << endl;
//         string name;
//         int id, day;
//         cin >> id >> name >> day;
//         Event event;
//         event.ID = id;
//         event.name = name;
//         event.day = day;
//         eventList.push_back(event);
//     }
//     void manageEvents()
//     {
//         int choice = 0;
//         for (int i = 0; i < eventList.size(); i++)
//         {
//             eventList[i].display();
//             cout << "Do you want to Edit its Details?(1/0)";
//             cin >> choice;
//             if (choice == 1)
//             {
//                 cout << "\nEnter new ID: ";
//                 cin >> eventList[i].ID;
//                 cout << "\nEnter new Name: ";
//                 cin >> eventList[i].name;
//                 cout << "Enter new Start Time: ";
//                 cin >> eventList[i].timing.start;
//                 cout << "Enter new End TIme: ";
//                 cin >> eventList[i].timing.end;
//                 cout << "Changes Saved!...";
//             }
//         }

//         // return
//     }
// };

// // Main function for testing
// int main()
// {
//     Participant participant1("John Doe", 12345, 150.0, "Team A");
//     Participant participantDummy("Arpit", 12346, 150.0, "Team B");
//     Viewer viewer1("Jane Smith", 67890, 150.0, 2);
//     Viewer viewerDummy("Arpit Saikia", 0, 0, 0);
//     Organiser organiser;
//     organiser.TotalBudget = 1000000;
//     organiser.system.participantList.push_back(participant1);
//     organiser.system.viewerList.push_back(viewer1);

//     Schedule schedule1;
//     schedule1.start = "10:00 AM";
//     schedule1.end = "12:00 PM";
//     schedule1.day = "Monday";

//     Schedule schedule2;
//     schedule2.start = "2:00 PM";
//     schedule2.end = "4:00 PM";
//     schedule2.day = "Wednesday";

//     // Create a Venue for the events
//     Venue venue1;
//     venue1.location = "City Hall";
//     venue1.building = "Main Building";
//     venue1.roomNo = "Room 101";

//     Venue venue2;
//     venue2.location = "Community Center";
//     venue2.building = "West Wing";
//     venue2.roomNo = "Room A";

//     // Create two instances of the Event class
//     Event event1;
//     event1.ID = 1;
//     event1.name = "Music Concert";
//     event1.capacity = 200;
//     event1.location = venue1;
//     event1.prize = "First Prize";
//     event1.budget = 5000;
//     event1.day = 1; // Assuming 1 represents Monday
//     event1.timing = schedule1;

//     Event event2;
//     event2.ID = 2;
//     event2.name = "Art Exhibition";
//     event2.capacity = 100;
//     event2.location = venue2;
//     event2.prize = "Art Supplies";
//     event2.budget = 3000;
//     event2.day = 3; // Assuming 3 represents Wednesday
//     event2.timing = schedule2;

//     organiser.eventList.push_back(event1);
//     organiser.eventList.push_back(event2);
//     organiser.eventList[0].viewerList.push_back(viewer1);
//     organiser.eventList[0].ParticipantList.push_back(participant1);

//     organiser.treasurer.setAmt(150);
//     organiser.treasurer.setTickets(1);

//     Admin admin;
//     Manager manager;
//     StaffManager staffM;
//     staffM.name = "Kishibe";
//     staffM.staff.members.push_back("Denji");
//     staffM.staff.members.push_back("Power");
//     int ID, eventID, x, x1;
//     string request, faculty, course, query;
//     int choice_participant = 1, choice_viewer = 1, choice_manager = 1, choice_admin = 1, choice_treasurer = 1, choice_staffM = 1, choice_promoter;
//     string bookName;
//     int code = 0;
//     int choice;
//     do
//     {
//         std::cout << "Choose your Role:" << std::endl;
//         std::cout << "1. Viewer" << std::endl;
//         std::cout << "2. Participant" << std::endl;
//         std::cout << "3. Manager" << std::endl;
//         std::cout << "4. Staff Manager" << std::endl;
//         std::cout << "5. Treasurer" << std::endl;
//         std::cout << "6. Admin" << std::endl;
//         std::cout << "0. Exit" << std::endl;
//         std::cout << "Enter your choice: ";
//         std::cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             // cout << "Enter password to login: \n";
//             // cin >> password;
//             // if (password != passenger1.getPassword())
//             // {
//             //     cout << "Wrong password!";
//             //     break;
//             // }

//             // cin>>choice_passenger;
//             while (choice_viewer)
//             {
//                 std::cout << "\nViewer Menu:" << std::endl;
//                 std::cout << "1. Book Tickets" << std::endl;
//                 std::cout << "2. View Tickets" << std::endl;
//                 std::cout << "Enter your choice: ";
//                 std::cin >> choice_viewer;

//                 switch (choice_viewer)
//                 {
//                 case 1:
//                     // passenger1.feePayment();
//                     cout << "Choose an event from here\n\n" << endl;
//                     for (int i = 0; i < organiser.eventList.size(); i++)
//                     {
//                         organiser.eventList[i].display();
//                         cout << "\n";
//                     }
//                     cout << "\nEnter Event ID: " << endl;
//                     cin >> ID;
//                     for (int i = 0; i < organiser.eventList.size(); i++)
//                     {
//                         if (ID == organiser.eventList[i].ID)
//                         {
//                             eventID = i;
//                             break;
//                         }
//                     }
//                     cout << "\nEnter the number of seats: " << endl;
//                     cin >> ID;
//                     x = ID * 350;
//                     cout << "\nAmount to be paid:" << x << "\nEnter the required amount: " << endl;
//                     cin >> x1;
//                     if (!organiser.treasurer.approvePayments(x1, 0, x))
//                         break;
//                     viewerDummy.seats = ID;
//                     viewerDummy.fees = x1;
//                     organiser.eventList[eventID].viewerList.push_back(viewerDummy);
//                     organiser.system.viewerList.push_back(viewerDummy);
//                     /// organiser.treasurer.amt += x1;
//                     x1 = organiser.treasurer.getAmt() + x1;
//                     organiser.treasurer.setAmt(x1);
//                     x1 = organiser.treasurer.getTickets() + 1;
//                     organiser.treasurer.setTickets(x1);
//                     break;

//                 case 2:
//                     cout << "\nTicket Details: \n"
//                          << endl;
//                     cout << "Event: " << organiser.eventList[eventID].name << endl;
//                     cout << "Seats: " << viewerDummy.seats << endl;
//                     cout << "\nBill: " << viewerDummy.fees;
//                     break;

//                 case 0:
//                     break;
//                 }
//             }
//             choice_viewer = 1;
//             break;
//         case 2:
//             while (choice_participant)
//             {
//                 std::cout << "\nParticipant Menu:" << std::endl;
//                 std::cout << "1. Choose Event" << std::endl;
//                 std::cout << "2. View Pass" << std::endl;
//                 std::cout << "Enter your choice: ";
//                 std::cin >> choice_participant;

//                 switch (choice_participant)
//                 {
//                 case 1:
//                     // passenger1.feePayment();
//                     cout << "Choose an event from here" << endl;
//                     for (int i = 0; i < organiser.eventList.size(); i++)
//                     {
//                         organiser.eventList[i].display();
//                     }
//                     cout << "\nEnter Event ID: " << endl;
//                     cin >> ID;
//                     for (int i = 0; i < organiser.eventList.size(); i++)
//                     {
//                         if (ID == organiser.eventList[i].ID)
//                         {
//                             eventID = i;
//                             break;
//                         }
//                     }

//                     cout << "Amount to be paid:" << 150 << "\nEnter the required amount: " << endl;
//                     cin >> x1;
//                     if (!organiser.treasurer.approvePayments(x1, 1, 0))
//                         break;
//                     participantDummy.fees = x1;
//                     organiser.eventList[eventID].ParticipantList.push_back(participantDummy);
//                     organiser.system.participantList.push_back(participantDummy);
//                     x1 = organiser.treasurer.getAmt() + x1;
//                     organiser.treasurer.setAmt(x1);
//                     break;

//                 case 2:
//                     cout << "Pass Details: " << endl;
//                     cout << "Event: " << organiser.eventList[eventID].name << endl;
//                     // cout<<"Seats: "<<viewerDummy.seats<<endl;
//                     cout << "Bill: " << x;
//                     break;

//                 case 0:
//                     break;
//                 }
//             }
//             choice_participant = 1;
//             break;

//         case 3:
//             cout << "Enter password to login: \n";
//             cin >> x;

//             if (x != manager.getPass()) // 1234
//             {
//                 cout << "Wrong password!";
//                 break;
//             }

//             // cin>>choice_passenger;
//             while (choice_manager)
//             {
//                 std::cout << "\nManager Menu:" << std::endl;
//                 std::cout << "1. Manage Events" << std::endl;
//                 std::cout << "2. Request Funds" << std::endl;
//                 std::cout << "3. Add Event" << std::endl;
//                 std::cout << "4. View Reports" << std::endl;
//                 std::cout << "5. Go to Promotion" << std::endl;
//                 // std::cout << "5. Show Notifications" << std::endl;
//                 std::cout << "Enter your choice: ";
//                 std::cin >> choice_manager;

//                 switch (choice_manager)
//                 {
//                 case 1:
//                     organiser.manageEvents();
//                     break;
//                 case 2:
//                     cout << "\nEnter the reason: ";
//                     cin >> request;
//                     cout << "\nEnter the amount: ";
//                     cin >> x1;
//                     admin.request.push_back({request, x1});
//                     cout << "\nRequest Registered!..." << endl;
//                     break;
//                 case 3:
//                     organiser.addEvent();
//                     break;
//                 case 4:
//                     staffM.report.displayIssues();
//                     break;

//                 case 5:
//                     while (choice_promoter)
//                     {
//                         choice_promoter = 1;
//                         std::cout << "\nPromoter Menu:" << std::endl;
//                         std::cout << "1. Edit Poster" << std::endl;
//                         std::cout << "2. Advertise" << std::endl;

//                         std::cout << "Enter your choice: ";
//                         std::cin >> choice_promoter;

//                         switch (choice_promoter)
//                         {
//                         case 1:
//                             organiser.marketing.poster.edit();
//                             break;
//                         case 2:
//                             organiser.marketing.promote();
//                             break;
//                         case 0:
//                             break;
//                         }
//                     }

//                 case 0:
//                     break;
//                 }
//             }
//             choice_manager = 1;
//             break;
//         case 4:
//             cout << "Enter password to login: \n";
//             cin >> x1;

//             if (x1 != manager.getPass())
//             {
//                 cout << "Wrong password!";
//                 break;
//             }

//             // cin>>choice_passenger;
//             while (choice_staffM)
//             {
//                 std::cout << "\nStaff Menu:" << std::endl;
//                 std::cout << "1. Add Task" << std::endl;
//                 std::cout << "2. Update Progress" << std::endl;
//                 std::cout << "3. Report Issue" << std::endl;
//                 std::cout << "4. View Team" << std::endl;
//                 std::cout << "Enter your choice: ";
//                 std::cin >> choice_staffM;

//                 switch (choice_staffM)
//                 {
//                 case 1:
//                     staffM.assignTasks();
//                     break;

//                 case 2:
//                     staffM.report.updateProgress();
//                     break;
//                 case 3:
//                     staffM.reportIssue();
//                     break;
//                 case 4:
//                     staffM.viewTeam();
//                 case 0:
//                     break;
//                 }
//             }
//             choice_staffM = 1;
//             break;
//         case 5:
//             cout << "Enter password to login: \n";
//             cin >> x1;

//             if (x1 != manager.getPass())
//             {
//                 cout << "Wrong password!";
//                 break;
//             }
//             cout<<"Press 1 to view Earnings: ";
//             cin >> ID;
//             if (ID == 1)
//             {
//                 organiser.treasurer.earnings();
//             }

//             break;
//         case 6:
//             cout << "Enter password to login: \n";
//             cin >> x1;

//             if (x1 != manager.getPass())
//             {
//                 cout << "Wrong password!";
//                 break;
//             }
//             if (admin.request.size() == 0)
//             {
//                 cout << "You dont have active requests!!\n\n";
//                 break;
//             }
//             else
//             {
//                 cout << "\nPlease Attend to the following Requests: ";
//                 admin.approve();
//                 cout << "That's all for now!!...\n\n";
//             }

//             break;

//         case 0:
//             std::cout << "Exiting..." << std::endl;
//             break;
//         default:
//             std::cout << "Invalid choice. Please enter a valid option." << std::endl;
//         }
//     } while (choice != 0);

//     return 0;
// }