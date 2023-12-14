#include "main.h"
#include "colors.h"
string generateKey() {
        random_device rd;
        mt19937 gen(rd());
    uniform_int_distribution<> charDistribution(0, 35);

    const string charset = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    ostringstream keyStream;
    for (int i = 0; i < 5; ++i) {
        keyStream << charset[charDistribution(gen)];
    }
    keyStream << '-';
    for (int i = 0; i < 5; ++i) {
        keyStream << charset[charDistribution(gen)];
    }
    keyStream << "-4";
    for (int i = 0; i < 5; ++i) {
        keyStream << charset[charDistribution(gen)];
    }
    keyStream << "-3";
    for (int i = 0; i < 5; ++i) {
        keyStream << charset[charDistribution(gen)];
    }
    return keyStream.str();
}
int main(){

        system("chcp 65001");
        Colors color;


        string key1 = generateKey();
        string key2 = generateKey();




color.set_color(CL_YELLOW);
    cout
            << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n";

color.set_color(CL_RED);
    cout << "FIRST KEY:";
color.set_color(CL_PURPLE);
    cout << "              " << key1 << endl;
color.set_color(CL_YELLOW);
    cout
            << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n";

color.set_color(CL_RED);
    cout << "SECOND KEY:";
color.set_color(CL_PURPLE);
    cout << "             " << key2 << endl;
color.set_color(CL_YELLOW);
    cout
            << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n";
    return 0;


}
