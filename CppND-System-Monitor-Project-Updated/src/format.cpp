#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
    std::string time;
    int hour = seconds / (60*60) ;
    double remSeconds = seconds - hour*60*60;
    int  min = remSeconds / 60 ;
    remSeconds = remSeconds - min*60;
    int second = remSeconds;
    time = std::to_string(hour)+":"+std::to_string(min)+":"+std::to_string(second);
    return time;
}