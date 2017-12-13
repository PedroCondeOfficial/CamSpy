#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <unistd.h>

using namespace std;

int main() {
    bool cond = true;
    int n = 1;
    char cancel;
    string directory;

    system("apt install fswebcam");
    cout << "Enter directory: ";
    cin >> directory;

    while(cond == true){
        std::string a = std::to_string(n);
        std::string filename = "snap" + a;
        cout << filename << endl;
        std::string command = "fswebcam -r 640x480 --jpeg 85 -D 1 " + directory + filename + ".jpg";
        system(command.c_str());
        cout << command << endl;
        n++;
        sleep(15);
    }

    return 0;
}