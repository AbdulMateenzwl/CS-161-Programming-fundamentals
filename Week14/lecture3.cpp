#include<iostream>
#include<string>
using namespace std;
struct timetype
{
    int hour;
    double min;
    int seconds;
};
struct tourtype
{
    string cityname;
    int distance;
    timetype traveltime;
};
void input(tourtype dest)
{
    cout<<dest.cityname<<endl;
    cout<<dest.distance<<endl;
    cout<<dest.traveltime.hour<<endl;
    cout<<dest.traveltime.min<<endl;
    cout<<dest.traveltime.seconds<<endl;
}
main()
{
    tourtype dest;
    dest.cityname="Islamabad";
    dest.distance=780;
    dest.traveltime.hour=3;
    dest.traveltime.min=30;
    dest.traveltime.seconds=10;
    input(dest);
}