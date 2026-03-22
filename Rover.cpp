// It is used for Input and Output
#include <iostream>
// It is used to mathematical functions
#include <cmath>
using namespace std;
int main()
{
    //initialize variables for coordinates
    int x1,y1,x2,y2;
    //initialize motion parameters variables
    double u,a,vmax;
    //Result variables
    double distance,velocity,time;
    // -----Inupt section for coordinates-----

    //Taking orgin coordinates from users
    cout<<"Enter the orgin coordinates (x1,y1):";
    cin>>x1>>y1;
    //Taking Destination coordinates from users
    cout<<"Enter the Destination coordinates (x2,y2):";
    cin>>x2>>y2;
    //-----Calculations-------
    // Here using Distance formula:sqrt((x2-x1)^2 + (y2-y1)^2)
    distance = sqrt(pow(x2 - x1, 2)+pow(y2 - y1, 2));
    //Display distance
    cout<<"Distance to Destination is: "<< distance << "meters" <<endl;

    //Input Motion Parameters
    
    // initial velocity
    cout <<"Enter the initial Velocity:";
    cin >> u;

    //Acceleration
    cout <<"Enter the Acceleration:";
    cin>> a;

    //Maximum Velocity
    cout <<"Enter the Maximum top speed:";
    cin>> vmax;

    // ------Error Handling-------
    //check invalid inputs from user
    if(distance <= 0 || a <= 0)
    {
        cout<<"Invalid inputs:"<<endl;
        return 0;
    }

    //------Final Velocity-----
    //using equation: v^2=u^2 + 2*a*s
    velocity = sqrt(u * u + 2 * a * distance);

    // ------Speed Limit---
    if(velocity > vmax)
    velocity = vmax;
    // -------Time Calculation----------
    //using formula:time=(v-u)/a
    time = (velocity - u)/a;
    //-----Final Result------
    cout<<"Time required:"<<time<<"seconds"<<endl;
    return 0;

}