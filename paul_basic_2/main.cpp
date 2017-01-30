@@ -6,10 +6,39 @@
//  Copyright © 2017 Tse Jen Lu. All rights reserved.
//

/*
 Line Count Programming Challenge
 
 Line Count Challenge
 
 Here's a simple help free challenge to get you started: write a program that takes a file as an argument and counts the total number of lines. Lines are defined as ending with a newline character. Program usage should be
 
 count filename.txt
 and the output should be the line count.
 */


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
int main() {
    string line;
    int count = 0;
    
    ifstream txt_file ("WarAndPeace.txt");
   
    if (txt_file.is_open()) {
        while ( ! txt_file.eof() ) {
            getline(txt_file, line);
            count++;
        }
        txt_file.close();
    }else {
        cout << "File can't be opened." << endl;
    }
    cout << "Number of line: " << count << endl;
    return 0;
}
