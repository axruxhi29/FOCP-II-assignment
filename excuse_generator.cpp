#include<bits/stdc++.h>
using namespace std;
int main() {
    srand(time(0));
    string name;
    cout << "Enter student name: ";
    getline(cin, name);
    if(name.empty()) {
        cout << "Please enter a valid name.\n";
        return 0;
    }
    vector<string> excuses = {

        "{name} couldn't finish the assignment because the laptop decided to update for hours.",

        "{name} was about to complete the homework when the Wi-Fi suddenly disappeared.",

        "{name} tried finishing the assignment, but the keyboard stopped working mysteriously.",

        "{name} completed the homework mentally but forgot to type it.",

        "{name}'s assignment vanished after the computer restarted unexpectedly.",

        "{name} was ready to submit the homework when the power went out.",

        "{name} accidentally closed the file without saving it.",

        "{name} spent more time fixing formatting than doing the actual assignment.",

        "{name}'s pet sat on the keyboard and deleted the homework.",

        "{name} couldn't complete the assignment because the internet was slower than a turtle."
    };
    int idx = rand() % excuses.size();
    string excuse = excuses[idx];
    size_t pos = excuse.find("{name}");
    while(pos != string::npos) {
        excuse.replace(pos, 6, name);
        pos = excuse.find("{name}", pos + name.length());
    }
    cout << "\n===== EXCUSE GENERATOR =====\n";
    cout << excuse << endl;
    return 0;
}