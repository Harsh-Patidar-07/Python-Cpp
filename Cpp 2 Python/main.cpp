#include <iostream>
#include <fstream>
using namespace std;

class Window {
public:
    string cmd;

    // Constructor to initialize command
    Window(string cmd) : cmd(cmd) {}

    void Cast() {
        ofstream file("cmd.txt");  // Open in write mode to overwrite the file
        if (!file.is_open()) {
            cerr << "Error: Could not open cmd.txt" << endl;
            return;
        }
        
        file << cmd << endl;  // Write only the new command
        file.close();
    }
};

int main() {
    while (true) {
        string var;
        cout << "command input >> "; 
        getline(cin, var) ;

        if (var.empty()) {
            break;  // Exit the loop if the input is empty
        }

        Window win(var);
        win.Cast();  // Write the command to file, replacing previous content
    }
    return 0;
}
