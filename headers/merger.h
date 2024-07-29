#ifndef MERGER_H
#define MERGER_H

#pragma once

#include <string>
#include <vector>
#include <fstream>

using namespace std;

class FileMerger {
private:
    string base_filename;
    int parts_count;

public:
    FileMerger(int argc, char** argv);
    void check_arguments(int argc, char** argv);
    int get_parts_count(const char* parts_str);
    void open_part_file(ifstream& file, const string& partname);
    void create_output_file(ofstream& file, const string& filename);
    void merge_parts(const string& base_filename, int parts_count);
    void merge();
};

#endif // MERGER_H
