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

    return 0;
}
