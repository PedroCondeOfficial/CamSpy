#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <unistd.h>

using namespace std;

int main() {
    bool cond = true;
    int n = 1;
    unsigned int sec;
    char cancel;
    string directory, resolution;

    cout << "Enter directory: ";
    cin >> directory;
    cout << "Enter resolution(ex: 1920x1080): ";
    cin >> resolution;
    cout << "Enter interval in seconds: ";
    cin >> sec;

    while(cond == true){
        std::string a = std::to_string(n);
        std::string filename = "snap" + a;
        cout << filename << endl;
        std::string command = "fswebcam -r " + resolution + " --jpeg 85 -D 1 " + directory + filename + ".jpg";
        system(command.c_str());
        cout << command << endl;
        n++;
        sleep(sec);
    }

    return 0;
}