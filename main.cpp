#include "Simple_window.h"
#include "Graph.h"

using namespace Graph_lib;



int main() {
    Point p {100, 100};
    Simple_window win {p, 600, 400, "Canvas"};

    Line x = {Point {100,100}, Point{200, 200}};
    x.set_color(Color::red);
    win.attach(x);
    win.wait_for_button();
}