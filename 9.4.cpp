#include<iostream>
#include<ctime>
#include "Time.h"

using namespace std;

class Time
{
     double hour;
     double minute;
     double second;

    Time()
    {
        const time_t Time = time(0);
        const tm *localTime = localtime( &Time );
         setTime( localTime->tm_hour, localTime->tm_min, localTime->tm_sec );

    }
    void setTime( int h, int m, int s )
    {
       hour = ( h >= 0 && h < 24 ) ? h : 0;
       minute = ( m >= 0 && m < 60 ) ? m : 0;
       second = ( s >= 0 && s < 60 ) ? s : 0;
    }
};
