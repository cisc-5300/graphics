#include "Simple_window.h"
#include "Graph.h"

using namespace Graph_lib;

int main() {
    Point p {100, 100};
    
    Simple_window win {p, 600, 400, "Canvas"};

    Polygon myPolygon;
    myPolygon.add(Point{300, 200});
    myPolygon.add(Point{350, 100});
    myPolygon.add(Point{400, 200});

    myPolygon.set_color(Color::red);

    win.attach(myPolygon);

    win.wait_for_button();
}