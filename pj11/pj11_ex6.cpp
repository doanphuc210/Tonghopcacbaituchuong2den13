// This program uses a function to return a structure. This
2 // is a modification of Program 11-2 .
3 #include <iostream>
4 #include <iomanip>
5 #include <cmath> // For the pow function
6 using namespace std;
7
8 // Constant for pi.
9 const double PI = 3.14159;
10
11 // Structure declaration
12 struct Circle
13 {
14 double radius; // A circle's radius
15 double diameter; // A circle's diameter
16 double area; // A circle's area
17 };
18
19 // Function prototype
20 Circle getInfo();
21
22 int main()
23 {
24 Circle c; // Define a structure variable
25
26 // Get data about the circle.
27 c = getInfo();

(program continues)

622 Chapter 11 Structured Data
Program 11-7 (continued)
28
29 // Calculate the circle's area.
30 c.area = PI * pow(c.radius, 2.0);
31
32 // Display the circle data.
33 cout << "The radius and area of the circle are:\n";
34 cout << fixed << setprecision(2);
35 cout << "Radius: " << c.radius << endl;
36 cout << "Area: " << c.area << endl;
37 return 0;
38 }
39
40 //****************************************************************
41 // Definition of function getInfo. This function uses a local *
42 // variable, tempCircle, which is a circle structure. The user *
43 // enters the diameter of the circle, which is stored in *
44 // tempCircle.diameter. The function then calculates the radius *
45 // which is stored in tempCircle.radius. tempCircle is then *
46 // returned from the function. *
47 //****************************************************************
48
49 Circle getInfo()
50 {
51 Circle tempCircle; // Temporary structure variable
52
53 // Store circle data in the temporary variable.
54 cout << "Enter the diameter of a circle: ";
55 cin >> tempCircle.diameter;
56 tempCircle.radius = tempCircle.diameter / 2.0;
57
58 // Return the temporary variable.
59 return tempCircle;
60 }