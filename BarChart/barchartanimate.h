#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <unistd.h>
#include "myrandom.h" // used by graders, do not remove
#include "barchart.h"

using namespace std;

class BarChartAnimate {
private:
    // Private member variables
    BarChart* barcharts;
    int size;
    int capacity;
    map<string, string> colorMap;
    string title;
    string xlabel;
    string source;

public:
    // Constructor: Initialize with a default capacity of 4
    BarChartAnimate(string title, string xlabel, string source) {
        barcharts = new BarChart[4]; // Allocate an array of BarCharts with initial capacity 4
        size = 0;
        capacity = 4;
        this->title = title;
        this->xlabel = xlabel;
        this->source = source;
    }

    // Destructor: Free the allocated memory
    virtual ~BarChartAnimate() {
        delete[] barcharts;
    }

    // Add a new BarChart frame from the file stream
    void addFrame(ifstream &file) {
        if (size == capacity) {
            // If the array is full, double its capacity
            int newCapacity = capacity * 2;
            BarChart* newBarcharts = new BarChart[newCapacity];
            for (int i = 0; i < size; ++i) {
                newBarcharts[i] = barcharts[i];
            }
            delete[] barcharts;
            barcharts = newBarcharts;
            capacity = newCapacity;
        }

        // Read data from the file and create a BarChart
        // You'll need to implement this part based on your file format
        // For example, you can read values and create a BarChart object.

        // Update size after adding a new frame
        size++;
    }

    // Animate the BarCharts
    void animate(ostream &output, int top, int endIter) {
        unsigned int microsecond = 50000;
        for (int i = 0; i < endIter; i++) {
            usleep(3 * microsecond);
            output << "\033[2J\033[1;1H"; // Clear the console
            cout << title << endl;
            cout << "Sources: " << source << endl;
            barcharts[i].graph(output, colorMap, top);
            cout << xlabel << endl;
            cout << "Frame: " << i + 1 << " of " << size << endl;
        }
    }

    // Public member functions to get the size and capacity
    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    // Public member function to access a BarChart by index
    BarChart& operator[](int i) {
        if (i < 0 || i >= size) {
            throw out_of_range("BarChartAnimate: i out of bounds");
        }
        return barcharts[i];
    }
};
