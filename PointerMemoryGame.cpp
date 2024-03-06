#include <iostream>
#include <typeinfo>
#include <vector>
#include <algorithm>  
#include <random> 

using namespace std;

int main()
{
    int x;
    int* xp = &x;

    int y;
    int* yp = &y;

    int z;
    int* zp = &z;

    int zs;
    int* zsp = &zs;

    int a;
    int* ap = &a;

    vector<int*> memoryPacket;
    memoryPacket.push_back(&x);
    memoryPacket.push_back(xp);
    memoryPacket.push_back(&y);
    memoryPacket.push_back(yp);
    memoryPacket.push_back(&z);
    memoryPacket.push_back(zp);
    memoryPacket.push_back(&zs);
    memoryPacket.push_back(zsp);
    memoryPacket.push_back(&a);
    memoryPacket.push_back(ap);

    random_device rd;
    mt19937 g(rd());
    shuffle(memoryPacket.begin(), memoryPacket.end(), g);


    int firstTip;
    cout << "Adjon meg egy szamot 1 es " << memoryPacket.size() << " kozot: " << endl;
    cin >> firstTip;

    int secondTip;
    cout << "Adjon meg egy szamot 1 es " << memoryPacket.size() << " kozott: " << endl;
    cin >> secondTip;

    while (memoryPacket.size() != 0)
    {
        if (memoryPacket[firstTip - 1] == memoryPacket[secondTip - 1]) {
            memoryPacket.erase(memoryPacket.begin() + (secondTip - 1));
            memoryPacket.erase(memoryPacket.begin() + (firstTip - 1));
            cout << "Ez egy par" << endl;

            if (memoryPacket.size() == 0) {
                break;
            }

            cout << "Adjon meg egy szamot 1 es " << memoryPacket.size() << " kozott: " << endl;
            cin >> firstTip;
            cout << "Adjon meg egy szamot 1 es " << memoryPacket.size() << " kozott: " << endl;
            cin >> secondTip;

        }
        else {
            cout << "Sajnos nem talalt" << endl;

            cout << memoryPacket[firstTip - 1] << endl;
            cout << memoryPacket[secondTip - 1] << endl;

            cout << "Adjon meg egy szamot 1 es " << memoryPacket.size() << " kozott: " << endl;
            cin >> firstTip;

            cout << "Adjon meg egy szamot 1 es " << memoryPacket.size() << " kozott: " << endl;
            cin >> secondTip;
        }
    }

    cout << "A jatek veget ert" << endl;

    return 0;
}


