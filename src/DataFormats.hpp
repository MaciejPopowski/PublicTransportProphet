#ifndef DATA_FORMATS_HPP
#define DATA_FORMATS_HPP

#include <string>

namespace Data {
    struct SubwayDelay {
        // Month and year for the data entry (e.g. 2015-03-01)
        std::string date;

        // - Numbered Subway Lines are in the 'A' division
        // - Lettered Subway Lines are in the 'B' division
        char division;

        // Subway Route (e.g. '1' train, 'B' train)
        std::string route;

        // False for weekday data, true for weekend data
        bool weekend;

        // The category of delay (e.g. Crew Availability, External Factors, etc.)
        std::string reportingCategory;

        // Futher classification of delay cause (e.g. Train Brake Activation, Inclement Weather, etc.)
        std::string delayCause;
        
        // Number of train delays per the category and time period
        int numDelays;
    };

    struct SubwayWaitAssessment {
        // Month and year for the data entry (e.g. 2015-03-01)
        std::string date;

        // - Numbered Subway Lines are in the 'A' division
        // - Lettered Subway Lines are in the 'B' division
        char division;

        // Subway Route (e.g. '1' train, 'B' train)
        std::string route;

        // False for weekday data, true for weekend data
        bool weekend;

        // False for offpeak hours, true for peak hours
        bool peakHours;

        // ==== Not sure about these datapoints   - Mac ====
        int numTimepointsPassingWaitAssessment;
        int numScheduledTimepoints;
        float waitAssessment;
    };

    struct BusDelay {
        //
    };

    struct BusWaitAssessment {
        //
    };

};

#endif