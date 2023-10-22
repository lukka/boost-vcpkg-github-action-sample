// main.cpp
#include <iostream>
#include "boost/filesystem.hpp"
#include <iostream>
using namespace boost::filesystem;

int main(int argc, char *argv[])
{
  path myfile("hello.all");
  std::string extension = boost::filesystem::extension(myfile);
  std::cout << extension << std::endl;
  return 0;
}