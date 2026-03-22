#  ROS 2 Distance Publisher–Subscriber (C++)

##  Project Overview

This project demonstrates a basic **Publisher–Subscriber communication** in ROS 2 using C++.
A publisher node sends distance data, and a subscriber node receives and processes it.

---

## Concepts Used

* ROS 2 Nodes
* Publisher & Subscriber
* Topics
* Messages (`std_msgs`)
* C++ (`rclcpp`)

---

##  Project Structure

```
ros2_ws/
├── src/
│   └── distance_pkg_cpp/
│       ├── src/
│       │   ├── distance_publisher.cpp
│       │   └── distance_subscriber.cpp
│       ├── CMakeLists.txt
│       └── package.xml
├── build/
├── install/
└── log/
```
## Ubuntu installation
Link : ![alt text](<Screenshot from 2026-03-22 23-01-45.png>)
---
## Ros2 installation 
Link : ![alt text](<Screenshot from 2026-03-22 23-02-58.png>)
---
## Working of Publisher
Link : ![alt text](<Screenshot from 2026-03-22 23-27-56.png>)
---
## Working of Subscriber
Link : ![alt text](<Screenshot from 2026-03-22 23-29-21.png>)
##  Requirements

* ROS 2 (e.g., Humble / Foxy)
* Ubuntu
* colcon build system

---

##  How to Build the Package

```bash
cd ~/ros2_ws
colcon build
```

After building, source the workspace:

```bash
source install/setup.bash
```

---

##  How to Run

### Run Publisher

```bash
ros2 run distance_pkg_cpp distance_publisher
```

### Run Subscriber

```bash
ros2 run distance_pkg_cpp distance_subscriber
```

---

## How It Works

* The **publisher node** sends distance values on a topic (e.g., `/distance`)
* The **subscriber node** listens to that topic and prints the received data

---

##  Example Output

### Publisher Output

```
Publishing: Distance = 10.5
Publishing: Distance = 12.3
```

### Subscriber Output

```
Received Distance: 10.5
Received Distance: 12.3
```

---

## Important Files

### `distance_publisher.cpp`

* Creates a ROS 2 node
* Publishes distance values periodically

### `distance_subscriber.cpp`

* Subscribes to the same topic
* Receives and displays data

---

## Common Errors & Fix

### Package not found

```
Package 'distance_pkg_cpp' not found
```

### Solution

```bash
source install/setup.bash
```

---

##  Useful Commands

### List all packages

```bash
ros2 pkg list
```

### Check active topics

```bash
ros2 topic list
```

### Echo topic data

```bash
ros2 topic echo /distance
```

---

##  Future Improvements

* Add sensor integration
* Visualize data using `rqt_graph`
* Convert to Python version
* Add custom message types

---

