#include <iostream>
#include <fstream>                                          // for file functions
#include <string>

int main() {
    std::string str = "Time is a great teacher, but unfortunatly " " it kills all its pupils. Berlioz";

    std::ofstream outfile("TEST.TXT");                      // create file for output
    for (int j = 0; j < str.size(); j++)                    // for each character
            outfile.put(str[j]);                                // write it to file
    std::cout << "File written\n";
    return 0;
}