#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangles.hpp"

using namespace std;

int main(int argc, char ** argv)
{
    vector<Triangle> triangles;

    // Input jumlah triangle
    int N;
    cin >> N;

    // Input data tiap triangle (3 titik, masing-masing x y z)
    for (int i = 0; i < N; i++) {
        float x1, y1, z1;
        float x2, y2, z2;
        float x3, y3, z3;

        cin >> x1 >> y1 >> z1;
        cin >> x2 >> y2 >> z2;
        cin >> x3 >> y3 >> z3;

        Point2D p1(x1, y1, z1);
        Point2D p2(x2, y2, z2);
        Point2D p3(x3, y3, z3);

        Triangle t(p1, p2, p3);
        triangles.push_back(t);
    }

    // Output hasil klasifikasi
    for (int i = 0; i < triangles.size(); i++) {
        triangles[i].TriangleType();
    }

    return 0;
}