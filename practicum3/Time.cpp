#include <iostream>
using namespace std;

class Time{
    public: 
        Time(){
            hours=0;
            minutes=0;
            seconds=0;
        }
        Time(int hours_in, int minutes_in, int seconds_in){
            hours=hours_in;
            minutes=minutes_in;
            seconds=seconds_in;
        }
        int getHours(){
            return hours;
        }
        void setHours(int hours_in){
            hours=hours_in;
        } 
        int getMinutes(){
            return minutes;
        }
        void setMinutes(int minutes_in){
            minutes=minutes_in;
        }
        int getSeconds(){
            return seconds;
        }
        void setSeconds(int seconds_in){
            seconds=seconds_in;
        }
        int timeInSeconds(){
            int time;
            time=(hours*3600) + (minutes*60) + (seconds);
            return time;
        }
    private:
        int hours;
        int minutes;
        int seconds;
};