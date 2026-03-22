#  Rover Distance and Time Calculator (C++)

## Overview

This C++ program calculates:

* Distance between two coordinates
* Final velocity using motion equations
* Time required to reach the destination

It simulates basic **physics-based rover motion** using user input.

---

##  Concepts Used

* Coordinate Geometry (Distance Formula)
* Kinematics Equations
* C++ Input/Output
* Error Handling

---

## Inputs Required

###  Coordinates

* Origin: `(x1, y1)`
* Destination: `(x2, y2)`

###  Motion Parameters

* Initial velocity `u`
* Acceleration `a`
* Maximum velocity `vmax`

---

##  Formulas Used

###  Distance Formula

```
distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)
```

### Final Velocity

```
v^2 = u^2 + 2 * a * distance
v = sqrt(u^2 + 2 * a * distance)
```

### Time Calculation

```
time = (v - u) / a
```

---

## Error Handling

* Distance must be > 0
* Acceleration must be > 0

If invalid input:

```
Invalid inputs
```

---

## How to Run

### 🔹 Compile

```
g++ main.cpp -o rover
```

### 🔹 Execute

```
./rover
```

---

## Example Output

```
Enter the origin coordinates (x1,y1): 0 0
Enter the Destination coordinates (x2,y2): 3 4
Distance to Destination is: 5 meters

Enter the initial Velocity: 2
Enter the Acceleration: 1
Enter the Maximum top speed: 10

Time required: 3 seconds
```

---

## Program Flow

```
Start
 ↓
Input coordinates
 ↓
Calculate distance
 ↓
Input motion parameters
 ↓
Validate inputs
 ↓
Calculate velocity
 ↓
Apply max speed limit
 ↓
Calculate time
 ↓
Display result
 ↓
End
```

---

## Technologies Used

* C++
* `<iostream>`
* `<cmath>`

---

## Learning Outcomes

* Apply distance formula in programming
* Use kinematics equations
* Build structured C++ programs
* Handle user input safely

---

##  Author

Adith P
