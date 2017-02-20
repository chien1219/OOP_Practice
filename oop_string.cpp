#include"oop_string.h"
#include<algorithm>
#include<functional>

namespace oop{
  void reverse( std::string &str){
       std::reverse(str.begin(), str.end());
  }

  void toUpperCase( std::string &str){
       for (std::string::iterator i = str.begin(); i != str.end(); i ++) {
            *i = std::toupper(*i);}
  }
  
  void trim(std::string &str){
              str.erase(0, str.find_first_not_of(" "));
        str.erase(str.find_last_not_of(" ") + 1);
  }
};

