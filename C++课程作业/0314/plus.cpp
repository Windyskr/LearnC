#include "student.cpp"

Box::Box(int h, int w, int len) {
    height = h;
    width = w;
    length = len;
};
int Box::volume() { return height * width * length; }