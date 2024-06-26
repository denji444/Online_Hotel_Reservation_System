#include <iostream>
#include <string>

using namespace std;

class Admin {
private:
    string username;
    string password;
public:
    Admin(const string& username, const string& password)
        : username(username), password(password) {}

    string getUsername() const {
        return username;
    }

    string getPassword() const {
        return password;
    }
};

class Inventory {
private:
    int quantity;
    double price;
public:
    Inventory(int quantity, double price) : quantity(quantity), price(price) {}

    int getQuantity() const {
        return quantity;
    }

    double getPrice() const {
        return price;
    }
};

class Room {
private:
    string type;
    double rate;
    bool available;
    vector<Inventory> inventory;
public:
    Room(const string& type, double rate) : type(type), rate(rate), available(true) {}

    void addInventory(const Inventory& inv) {
        inventory.push_back(inv);
    }

    string getName() const {
        return type;
    }

    double getRate() const {
        return rate;
    }
};


class User {
private:
    string name;
    string password;
    vector<string> bookings;
public:
    User(const string& name, const string& password) : name(name), password(password) {}
    
    void displayUserInfo() const {
        cout << "User Name: " << name << endl;
        cout << "Password: " << password << endl;
    }

    void addBooking(const string& booking) {
        bookings.push_back(booking);
    }

    const vector<string>& getBookings() const {
        return bookings;
    }
};

class RoomAssignment {
private:
    Room room;
    User user;
public:
    RoomAssignment(const Room& room, const User& user) : room(room), user(user) {}

    Room getRoom() const {
        return room;
    }

    User getUser() const {
        return user;
    }
};

class RateManager {
private:
    double rate;
public:
    RateManager(double rate) : rate(rate) {}

    void updateRate(double newRate) {
        rate = newRate;
    }

    double getRate() const {
        return rate;
    }
};

class Discount {
private:
    double amount;
public:
    Discount(double amount) : amount(amount) {}

    double getAmount() const {
        return amount;
    }
};

class Promotion {
private:
    string description;
public:
    Promotion(const string& description) : description(description) {}

    string getDescription() const {
        return description;
    }
};

class Report {
private:
    vector<string> data;
public:
    Report(const vector<string>& data) : data(data) {}

    void generateReport() {
        cout << "Generating report..." << endl;
        // Output report data
        for (size_t i = 0; i < data.size(); ++i) {
            cout << data[i] << endl;
        }
        cout << "Report generation complete." << endl;
    }
};

class Payment {
private:
    string paymentMethod;
    double amount;
public:
    Payment(const string& paymentMethod, double amount) : paymentMethod(paymentMethod), amount(amount) {}

    void processPayment() {
        cout << "Processing payment of " << amount << " via " << paymentMethod << endl;
        // Additional payment processing logic here
    }
};

class SearchFilter {
private:
    string type;
public:
    SearchFilter(const string& type) : type(type) {}

    string getType() const { return type; }
};

class Booking {
private:
    string checkInDate;
    string checkOutDate;

public:
    Booking(const string& checkInDate, const string& checkOutDate) 
        : checkInDate(checkInDate), checkOutDate(checkOutDate) {}
    
    string getCheckInDate() const {
        return checkInDate;
    }

    string getCheckOutDate() const {
        return checkOutDate;
    }
};

class Review {
private:
    string comment;
    int rating;
public:
    Review(const string& comment, int rating) : comment(comment), rating(rating) {}
    
    string getComment() const {
        return comment;
    }

    int getRating() const {
        return rating;
    }
};

class CancellationPolicy {
private:
    string policy;
public:
    CancellationPolicy(const string& policy) : policy(policy) {}

    string getPolicy() const {
        return policy;
    }
};

class PaymentSystem {
private:
    string provider;
public:
    PaymentSystem(const string& provider) : provider(provider) {}

    string getProvider() const {
        return provider;
    }
};

class RoomReservation {
private:
    string roomName;
    string user;
    string checkInDate;
    string checkOutDate;
public:
    RoomReservation(const string& roomName, const string& user, const string& checkInDate, const string& checkOutDate)
        : roomName(roomName), user(user), checkInDate(checkInDate), checkOutDate(checkOutDate) {}

    string getRoomName() const {
        return roomName;
    }

    string getUser() const {
        return user;
    }

    string getCheckInDate() const {
        return checkInDate;
    }

    string getCheckOutDate() const {
        return checkOutDate;
    }
};

// Example usage in the main function
int main() {
     // Create an Admin object
            Admin admin("admin", "admin123");

     // Access and print the username and password
            cout << "Admin Username: " << admin.getUsername() << endl;
            cout << "Admin Password: " << admin.getPassword() << endl;

    // Create an Inventory object
            Inventory item(10, 2000);
            cout << "GETTING AVAILABLE ROOMS QUANTITY AND THEIR PRICES..." << endl;
            cout << "Item Quantity: " << item.getQuantity() << endl;
            cout << "Item Price: $" << item.getPrice() << endl;

    // Create a Room object
            cout << "Rooms are available... :" << endl;
            Room room("Luxurious", 3000);
            cout << "Room Name: " << room.getName() << endl;
            cout << "Room Rate: $" << room.getRate() << "/night" << endl;
                     Room room1("Standerd", 1000);
            cout << "Room Name: " << room1.getName() << endl;
            cout << "Room Rate: $" << room1.getRate() << "/night" << endl;
   
    // RoomAssignment
            cout << "BOOKED ROOMS.... " << endl;
            Room room2("Luxurious", 3000); // Corrected typo in room type
    	    User user1("Ahmad"); // Created User instance
    	    RoomAssignment roomAssignment(room2, user1); // Passed Room and User instances
    	    cout << "Assigned Room Type: " << roomAssignment.getRoom().getType() << endl;
    	    cout << "Assigned Room Price: " << roomAssignment.getRoom().getPrice() << endl;
    	    cout << "Assigned User: " << roomAssignment.getUser().getName() << endl;

    // RoomAssignment
            Room rooom1("Standard", 1000); // Corrected typo in room type
            User user2("Ali"); // Created User instance
            RoomAssignment roomAssignment1(rooom1, user2); // Passed Room and User instances
            cout << "Assigned Room Type: " << roomAssignment1.getRoom().getType() << endl;
            cout << "Assigned Room Price: " << roomAssignment1.getRoom().getPrice() << endl;
            cout << "Assigned User: " << roomAssignment1.getUser().getName() << endl;

   // RateManager
            cout << "Managing rates... :" << endl;  
            RateManager rateManager(0.1);
            rateManager.updateRate(3000);
            cout << "Updated Rate: " << rateManager.getRate() << endl;
           
  // Discount
            cout<< endl;
            cout << "GENERATING DISCOUNTS :" << endl;
            Discount discount(2000);
            cout<< endl;
            cout << "Discount amount: " << discount.getAmount() << endl;
    
  // Create a Promotion object with a description
  	    Promotion promotion("Free upgrade to premium package");
            // Access the promotion description and print it
    	    cout << "Promotion description: " << promotion.getDescription() << endl;
            
  // Report
            cout << endl;
            cout << "GENERATING REPORTS... :" << endl;
            vector<string> reportData;
            reportData.push_back("Entry 1");
            reportData.push_back("Entry 2");
            reportData.push_back("Entry 3");
            Report report(reportData);
            report.generateReport();
            cout << endl;
    
  // Create an instance of the Payment class
  	    Payment payment("Credit Card", 1000);
	    // Process the payment
    	    payment.processPayment();
            
  // User login
            User user("Bilal Saleem", "password123");
            user.displayUserInfo();
            
  // SearchFilter
            cout << "Searching for room.... " << endl;
            SearchFilter filter("Standard");
            cout << "Search Filter Type: " << filter.getType() << endl;
            
  // Booking
            cout << "BOOKING ROOM... :" << endl;
            Booking booking("2024-05-12", "2024-05-15");
            cout << "Check-In Date: " << booking.getCheckInDate() << endl;
            cout << "Check-Out Date: " << booking.getCheckOutDate() << endl;
            
  // Review
            cout << "Submitting review... " << endl;
            Review review("Great hotel, excellent service!", 5);
            cout << "Review Comment: " << review.getComment() << endl;
            cout << "Review Rating: " << review.getRating() << " stars" << endl;
            
  // CancellationPolicy
            cout << "Canceling Booking... " << endl;
            CancellationPolicy policy("Free cancellation up to 24 hours before check-in");
            cout << "Cancellation Policy: " << policy.getPolicy() << endl;
           
  // PaymentSystem
            cout << "Payment options... " << endl; 
            PaymentSystem paymentSystem("PayPal");
            cout << "Payment System Provider: " << paymentSystem.getProvider() << endl;
            PaymentSystem paymentSystem1("Bank transfer");
            cout << "Payment System Provider: " << paymentSystem1.getProvider() << endl;          
	    cout << endl;
           
  // RoomReservation
            RoomReservation reservation("Standard Room", "Farhan", "2024-05-15", "2024-05-20");
            cout << "Room Name: " << reservation.getRoomName() << endl;
            cout << "User: " << reservation.getUser() << endl;
            cout << "Check-in Date: " << reservation.getCheckInDate() << endl;
            cout << "Check-out Date: " << reservation.getCheckOutDate() << endl;

      
    return 0;
}
