#include <iostream>
using namespace std;

class Box {
   public:
    Box(int, int, int);
    int volume();

   private:
    int height;
    int width;
    int length;
};