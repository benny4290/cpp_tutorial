#include <algorithm>
#include "replace_player_1.h"
#include <sstream>
#include <vector>
#include <iostream>

// Constructor
ReplacePlayer_1::ReplacePlayer_1(std::string replace, std::string replaced_by) :
 replace(replace),
 replaced_by(replaced_by) {}

//Destructor
ReplacePlayer_1::~ReplacePlayer_1() {}

std::string ReplacePlayer_1::Play(const std::string& input) {
    std::string output;

    std::istringstream iss(input);
    std::vector<std::string> results(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>());
    for(auto wort : results){
        if(wort[0] == 'd'){
            output += replaced_by +" ";
        }
        else if(wort[5] == 'i'){
            output += replaced_by +" ";
        }
        else{
            output += wort + " ";
        }
    }

    return output;
}