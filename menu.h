#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Menu{

private:
  bool flag;
  int option;
  string route;
  void show();
  void execute();
  void showContent();
  

public:
  Menu();
  void start();
};
