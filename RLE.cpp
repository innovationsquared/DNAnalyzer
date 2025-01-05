#include <fstream>
#include <iostream>
#include <stdint.h>
void read_file_ver1(const char* filename);
int main(void)
{
    printf("%s", "Please enter your filename.\n");
    std::string filename;
    std::cin >> filename;
    read_file_ver1(filename.c_str());
    return 1;
}

/**
 * Simple run length encoding to make sequence files take up less space.
 * Param: filename, string representation of the file name. 
 * O(n), no bueno
 * 
 */
void read_file_ver1(const char* filename)
{
    std::ifstream file;
    std::string line;
    file.open(filename);
    uint32_t counter = 0;
    char nucleotides;
    while(file.get(nucleotides))
    {
        std::cout << nucleotides << " ";
    }
    std::cout << std::endl;
    file.close();
}
