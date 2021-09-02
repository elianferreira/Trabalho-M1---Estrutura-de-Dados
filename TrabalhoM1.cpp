#include <iostream>
#include <vector>
#include <string>
#include <random>

std::vector<std::string> directories = { "Download", "Documents", "ProgramFiles", "User", "ProgramFiles x86", "AppData",
"Images", "Musics", "Jobs" , "Windows" };

enum Month {
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

std::vector<std::string> days = { "Monday", "Tuesday", "Wednesday", "Thurday", "Friday", "Saturday",
"Sunday" };

struct Dir {
    std::string directoryorigin;
    std::string directoryactual;
};


template <typename Type>
struct Arq {
    string nomearq;
    float tam;
    std::string currenttime;
    std::string timecreation;
};

template <typename Type, int max>
struct Disp { // 10 a 100
    string nomedisp;
    string cod.fab;
    Arq arquive;
};

int numbersdisp() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(10, 100);
    int disp = distrib(gen);

    return disp;
}

Dir generateDir() {
    Dir d;
    d.directoryorigin = "C:/ " + directories[0];
    d.directoryactual = "C:/ " + directories[1];

    return d;
}

Arq generateData() {
    std::random_device rd;
    std::mt19937 gend(rd());
    shuffle(days.begin(), days.end(), gend);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 31);
    int day = distrib(gen);

    Arq data;

    return data;
}

void Print(Dir d) {
    std::cout << d.directoryorigin << std::endl;
    std::cout << d.directoryactual << std::endl;
}

int main() {
    Dir dir = generateDir();
    Print(dir);
}