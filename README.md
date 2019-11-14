# **PID Controller**

---
## Overview
The goals / steps of this project are the following:

In following project, we build PID controller and tune the hyperparameters to successfully drive a vehicle in simulator. Both steering angle and throttle of the vehicle will be controlled by the PID controller.

## PID controller
PID controller has three components which are:
- Proportional controller provides output that is proportional to current error. It tries to  go towards the center line, but it tends to overshoots the center line.
- Integral controller provides output to eliminate the steady state error.
- Differential anticipates future behavior of error, by using current and previous cross track error. It counteracts the proportional controller that tends to overshoot the target line by smoothen out the approach towards target.

## Hyperparameter Tuning
In following project, trial and error had  been done to choose final hyperparameters. First, setting Kp to 0.1, 0.2, 0.5, 1.0, 3.0 and other Ki, Kd were set to 0. Then, behavior of car has been observed for each case. Same procedure were done to Ki and Kd. Afterwards, best approximate values were combined to create best steering control. As a final result, initial Kp,Ki, and Kp value for steering PID controller has been set to 0.15, 0.00025, and 2.5.

After setting PID controller for steering, another PID controller has been set up for throttle control. Same procedure has been done for throttle controller and as a result, initial Kp,Ki, and Kp values were chosen to be 0.3, 0.0, and 0.02.

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`.

---
## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

Fellow students have put together a guide to Windows set-up for the project [here](https://s3-us-west-1.amazonaws.com/udacity-selfdrivingcar/files/Kidnapped_Vehicle_Windows_Setup.pdf) if the environment you have set up for the Sensor Fusion projects does not work for this project. There's also an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3).


Tips for setting up your environment can be found [here](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/0949fca6-b379-42af-a919-ee50aa304e6a/lessons/f758c44c-5e40-4e01-93b5-1a82aa4e044f/concepts/23d376c7-0195-4276-bdf0-e02f1f3c665d)
