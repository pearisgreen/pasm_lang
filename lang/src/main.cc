#include <iostream>

#include "compiler.h"

int main(int argc, char **argv) {

  std::cout << "+----------------------------------+" << std::endl
            << "|          PASM COMPILER           |" << std::endl
            << "+----------------------------------+" << std::endl
            << "| Version: 0.0.1                   |" << std::endl
            << "| Author:  Gerrit Proessl          |" << std::endl
            << "| mail:    grproessl@web.de        |" << std::endl
            << "+----------------------------------+" << std::endl;

  comp::comp c;
  c.start();

  return 0;
}
