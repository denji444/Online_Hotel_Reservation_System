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
public:
    User(const string& name) : name(name) {}

    string getName() const {
        return name;
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
      
 
    return 0;
}
