#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "defines.h"


/* 
    Constructor, initializing members.
*/
template<size_t T_width>
StatsBuffer<T_width>::StatsBuffer() {
    this->cap = 10;
    this->current_size = 0;
    this->averages.fill(0);
    this->std_deviations.fill(0);

}

/* 
    Adds a DataContainer to the Buffer to be analyzed for meand and std dev.
*/
template<size_t T_width>
void StatsBuffer<T_width>::add(DataContainer<T_width>& data)
{   
    this->containers.push_back(data);
    // Calculate the rolling average
    this->averages += data;
    current_size +=1;
    this->averages = averages/current_size;

    // Calculate the standard deviation so far.
    this->std_deviations = (((data - averages).Pow(2))/current_size).Sqrt();
        
}

/* 
    Prints out all the Characteristics, People and Values
*/
template<size_t T_width>
void StatsBuffer<T_width>::printMean(std::string (&str)[3]) 
{   
    std::cout<< "         ";
    //std::cout << setw(7) <<
    for(auto name: str) {
        std::cout << std::setw(7) << std::left;
        std::cout<< name << " ";
    }
    std::cout << std::endl;
    std::cout<< "AVERAGES: ";
    for(auto v: averages) {
        std::cout << std::setw(7);
        std::cout<< v << " ";
    }

    std::cout << std::endl;
    std::cout<< "STD_DEV: ";
    for(auto v: std_deviations) {
        std::cout << std::setw(7);
        std::cout<< v << " ";
    }

}

int main(int argc, char** argv)
{   int people;
    
    std::cout << "Specify how many People/Things you want to compare: " << std::endl;
    std::cin >> people;
    
    std::string names[people];

    for (int i = 0; i < people; i ++) {
            std::cout << "Enter name # " << i+1 << std::endl;
            std::cin >> names[i];
    }


    std::string traitNames[DATAROW_LENGTH];

    for (int i = 0; i < DATAROW_LENGTH; i ++) {
            std::cout << "Enter characteristic # " << i+1 << "of " << DATAROW_LENGTH << std::endl;
            std::cin >> traitNames[i];
    }

    StatsBuffer<DATAROW_LENGTH> buffer;

    for (int i = 0; i < people; i ++) {
        DataRow d;
        for (int j = 0; j < DATAROW_LENGTH; j ++) {
            std::cout << "Enter " << names[i] << "'s " << traitNames[j] << std::endl;
            std::cin >> d[j];
        }

        buffer.add(d);
    }

    buffer.printMean(traitNames);
    return 0;
}
