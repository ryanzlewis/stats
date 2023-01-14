#pragma once
#include "stddef.h"
#include <array>
#include <math.h>

template<size_t T_width>
class DataContainer : public std::array<double, T_width>
{
public:
  // Overloads our operaters to perform math on entire array at once.
    DataContainer<T_width> operator+(DataContainer<T_width>& container){
        DataContainer<T_width> result;
        for(int i = 0; i < T_width; i++) {
            result[i] = (*this)[i] + container[i];
        }
        return result;
    }

    DataContainer<T_width> operator-(DataContainer<T_width>& container){
        DataContainer<T_width> result;
        for(int i = 0; i < T_width; i++) {
            result[i] = (*this)[i] - container[i];
        }
        return result;
    }

    DataContainer<T_width> operator/(int denominator){
        DataContainer<T_width> result;
        for(int i = 0; i < T_width; i++) {
            result[i] = (*this)[i] / denominator;
        }
        return result;
    }

    void operator+=(DataContainer<T_width>& container){
        for(int i = 0; i < T_width; i++) {
            (*this)[i] += container[i];
        }

    }

    void operator-=(DataContainer<T_width>& container){

        for(int i = 0; i < T_width; i++) {
            (*this)[i] -= container[i];
        }

    }

    DataContainer<T_width> Pow(int power){
        DataContainer<T_width> result;
        for(int i = 0; i < T_width; i++) {
            result[i] = std::pow((*this)[i], power);
        }
        return result;
    }

    
    DataContainer<T_width> Sqrt(){
        DataContainer<T_width> result;
        for(int i = 0; i < T_width; i++) {
            result[i] = std::sqrt((*this)[i]);
        }
        return result;
    }

};

#define DATAROW_LENGTH 3
typedef DataContainer< DATAROW_LENGTH > DataRow;


template<size_t T_width>
class StatsBuffer {
 private:
    int cap;
    int current_size;
    std::vector<DataContainer<T_width>> containers;

    DataContainer<T_width> averages;
    DataContainer<T_width> std_deviations;

 public:
    StatsBuffer();
    StatsBuffer(int maxLength);

    void add( DataContainer<T_width>& data);

    DataContainer<T_width> getMean();

    DataContainer<T_width> getSTDDev();

    void printMean(std::string (&str)[3]);

    void printSTDDev(std::string (&str)[3]);

};
