#include <iostream>
#include <algorithm>
using namespace std;
 struct Rectangle{
   
   int x; // x coordinate of the top left corner
   int y; // y coordinate of the top left corner
   int w; //width 
   int h; // height
    
    // right side = x  + w; -> w = right side - x
    // bottom side = y + h; -> h = bottom - y;
     
 };


int main (){
    Rectangle rectangle_1,rectangle_2;
    
    cout << "Enter the coordinates (x,y) and dimensions (w,h) of rectangle a: ";
    cin >> rectangle_1.x >> rectangle_1.y >> rectangle_1.w >> rectangle_1.h;
    
    cout << "Enter the coordinates (x,y) and dimensions (w,h) of rectangle b: ";
    cin >> rectangle_2.x >> rectangle_2.y >> rectangle_2.w >> rectangle_2.h;
    
    // triangle1 : (x1,y1,w1,h1)
    // triangle2: (x2,y2,w2,h2)
    
    // right = x + w;
    int right = rectangle_1.x + rectangle_1.w;
    int right2 = rectangle_2.x + rectangle_2.w;
    
    // bottom = y + h;
    int bottom = rectangle_1.y + rectangle_1.h;
    int bottom2 = rectangle_2.y + rectangle_2.h;
    
    //Left Boundary of rectangle or LEFT
    int x_overlap = max(rectangle_1.x, rectangle_2.x);
    // Top boundary of rectangle
    int y_overlap = max(rectangle_1.y, rectangle_2.y);
    
    // right boundary of rectangle right or LEFT  
    int right_overlap = min(right, right2);
    // bottom boundary of rectangle;
    int bottom_overlap = min(bottom, bottom2);
    
    
    int width = right_overlap - x_overlap;
    int height = bottom_overlap - y_overlap;
    
    cout << "Result: (" << x_overlap <<", " << y_overlap << ", " << width << ", " << height << ")" << endl;
    
    // 
    
    return 0;
}