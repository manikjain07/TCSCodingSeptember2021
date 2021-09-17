#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tw_count,fw_count,wheels,vehicles,maximum_tw;
    cin >> vehicles;
    cin >> wheels;
    if (wheels < 2 || wheels % 2 != 0 || vehicles > wheels)
    {
        cout << "INVALID INPUT" << endl;
    }
    else
    {
        maximum_tw = wheels / 2;
        fw_count = maximum_tw - vehicles;
        tw_count = vehicles - fw_count;
        if (vehicles == tw_count + fw_count)
        {
            cout << "TW = " << tw_count << " FW = " << fw_count << endl;
        }
        else{
            fw_count = floor(wheels / 4);
            tw_count = vehicles - fw_count;
            if (vehicles == tw_count + fw_count)
            {
                cout << "TW = " << tw_count << " FW = " << fw_count << endl; 
            }
        }

    }

    return 0;

}