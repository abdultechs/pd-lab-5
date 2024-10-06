#include<iostream>
using namespace std;

float pyramidVolume(float l,float w,float h, string unit)
{
    if (unit == "kilometers")
    { 
        float volume;
        l=l/1000;
        w=w/1000;
        h=h/1000;
        volume = (l*h*w)/3;
        cout << "volume of pyramid is: "<< volume; 

    }
    if (unit == "meters")
    { 
        float volume;
        volume = (l*h*w)/3;
        cout << "volume of pyramid is: "<< volume; 

    }
    if (unit == "centimeters")
    { 
        float volume;
        l=l*100;
        w=w*100;
        h=h*100;
        volume = (l*h*w)/3;
        cout << "volume of pyramid is: "<< volume; 

    }
    if (unit == "milimeters")
    { 
        float volume;
        l=l*1000;
        w=w*1000;
        h=h*1000;
        volume = (1.0/3.0)*l*h*w;
        cout << "volume of pyramid is: " <<volume; 

    }
}

main()
{
    float l,w,h;
    string unit;
    cout << "Enter length of the pyramid: ";
    cin >> l;
    cout << "Enter width of the pyramid: ";
    cin >> w;
    cout << "Enter height of the pyramid: ";
    cin >> h;
    cout << "enter unit [millimeters, centimeters, meters and kilometers]:    ";
    cin >> unit;


    pyramidVolume(l,w,h,unit);
}

