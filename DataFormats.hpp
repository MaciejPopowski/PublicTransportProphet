#ifndef DATA_FORMATS_HPP
#define DATA_FORMATS_HPP

#include <string>

namespace Data {

    struct SubwayDelay {
        std::string date;
        std::string division;
        std::string route;
        bool weekend;
        std::string reportingCategory;
        std::string delayCause;
        int numDelays;
    };

    struct BusWaitTime {

    };

};

#endif