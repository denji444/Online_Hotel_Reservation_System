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

// Example usage in the main function
int main() {
    // Create an Admin object
    Admin admin("admin", "admin123");

    // Access and print the username and password
    cout << "Admin Username: " << admin.getUsername() << endl;
    cout << "Admin Password: " << admin.getPassword() << endl;

    return 0;
}
