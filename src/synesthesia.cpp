// (C) Avi Glozman, 2020
// This file is the driver file for Synesthesia

#include <iostream>
#include <string>
#include "decoder_h.h"

using namespace std;

void decoderHandler(string fname){
    cout << "Recieved file\n";
    decode(fname);
}

void usageMsg(){
    cout << "Synesthesia [ERROR]\nUsage: synesthesia [input file]\n";
}
bool checkIsValidType(string ftype){
   string validTypes[] = {"wav"};
    for (string t : validTypes)
        if (t == ftype)
            return true;
    return false;
}
void argparse(char* argv[]){
    string f(argv[1]);
        size_t pos = f.find(".");
        if (pos != -1)
            if (checkIsValidType(f.substr(pos + 1))){
                decoderHandler(f);
                return;
            }
        cout << "Synesthesia [ERROR]\nInvalid file name.\n";
}

int main(int argc, char* argv[]){
    (argc == 2) ? argparse(argv) : usageMsg();
    return 0;
}
