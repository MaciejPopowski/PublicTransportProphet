#ifndef DATA_PARSER_HPP
#define DATA_PARSER_HPP

#include <fstream>
#include <iostream>
#include <vector>
#include <string>

//#include <...torch...>   

template <typename DataType>
class DataParser {
public:
    DataParser(const std::string& src);

    DataType get();
private:
    std::vector<DataType> m_Data;
};

#endif
