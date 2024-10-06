#include<iostream>
using namespace std;
string projectTimeCalculation(int hours, int  days, int workers);
main()
{
    int hours, days, workers;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that the film has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    projectTimeCalculation(hours, days, workers);

}
string projectTimeCalculation(int hours, int days, int workers)
{
    
    float traindays=days*0.10;
    float remainingdays=days-traindays;
    float workhours=remainingdays*10;
    int finalhours=(workers*workhours);

    if (finalhours > hours)
    {
        cout<<"Yes!"<<finalhours-hours<<" hours left."<<endl;
    }
    if (finalhours < hours)
    {
        cout<<"Not enough time! "<<hours-finalhours<<" hours needed."<<endl;
    }
}