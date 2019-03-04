#include <string>

class ReplacePlayer_1 {
public:
    // Constructor
    ReplacePlayer_1(const std::string replace, const std::string replaced_by);

    //Destructor
    ~ReplacePlayer_1();

    std::string Play(const std::string& input);

private:
    std::string replace;
    std::string replaced_by;
};