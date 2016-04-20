#ifndef CALENDER_H
#define CALENDER_H
#include "Soft.h"
#include "event.h"
#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

class calender{


    friend class newSleepTimeChang;

    public:
        calender(int size);
        virtual ~calender();
        void showCalender(vector<Event>& eventList,vector<Soft>& softEvent,int month,int day);
        void getTimeFrameHardEvent(vector<Event>& eventList,char** calenderChar,bool* calenderBool,int day,int index);
        void getTimeFrameSoftEvent(vector<Soft>& softEvent,int day);
        void isFitInSchedule(vector<Soft>& softEvent,int day,int index,bool* schedule);
        void fitSoftTask(vector<Soft>& softEvent,int startTimeFrame,int endTimeFrame,int index);
        void findEarliestTimeFrame(int due,int duration,int& startTimeFrame,int& endTimeFrame,bool* schedule,int&consec,int& maxConsec);
        void fintBestFit(int due,int duration,int& startTimeFrame,int& endTimeFrame,bool* schedule,int&consec,int& maxConsec);
        bool hasEnoughTime(bool* schedule);

        void placeSoft(vector<Soft>& softEvent,int index,int soft_count);

        int get_counter();
        void increment_counter();
        bool getcaleCderChar(int a);
        void setcaleCderChar(int a,char* b);
        bool getCalenderBool(int a);
        bool setCalenderBool(int a);
        bool setCalenderBoolToTrue(int a);///taken
        bool setCalenderBoolToFalse(int a);///false

    protected:
    private:

        char** calenderChar;
        int counter;///keep track of softwork

        ///true = space taken
        ///false = space avalible
        bool* calenderBool;
};

#endif // CALENDER_H
