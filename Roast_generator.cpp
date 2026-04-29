#include<bits/stdc++.h>
using namespace std;
int main() {
    srand(time(0));
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    if(name.empty()) {
        cout << "Please enter a valid name.\n";
        return 0;
    }
    vector<string> roasts = {
        "{name} writes code slower than internet explorer.",
        "{name} treats deadlines like movie trailers.",
        "{name}'s code works only on special occasions.",
        "{name} debugs code by staring at it dramatically.",
        "{name} opens VS Code just to look productive.",
        "{name}'s typing speed depends on motivation.",
        "{name} spends more time choosing fonts than coding.",
        "{name} thinks Stack Overflow is a life coach.",
        "{name}'s laptop hangs out of fear.",
        "{name} starts assignments at the speed of tomorrow.",
        "{name}'s code has trust issues with semicolons.",
        "{name} writes comments more confidently than code.",
        "{name} and bugs are best friends.",
        "{name} uses Google like a coding superpower.",
        "{name}'s code compiles by pure luck.",
        "{name} says 'easy question' before getting stuck.",
        "{name} watches tutorials more than actually coding.",
        "{name}'s keyboard deserves overtime pay.",
        "{name} writes code like it's a mystery novel.",
        "{name} clicks Run and hopes for the best."
    };
    int idx = rand() % roasts.size();
    string roast = roasts[idx];
    int pos = roast.find("{name}");
    while(pos != string::npos) {
        roast.replace(pos, 6, name);
        pos = roast.find("{name}");
    }
    cout << "\n===== ROAST MACHINE =====\n";
    cout << roast << endl;
    return 0;
}