#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
    this->Kp = Kp_;
    this->Ki = Ki_;
    this->Kd = Kd_;
    
    kp_err = 0.0;
    ki_err = 0.0;
    kd_err = 0.0;
    
    prev_cte = 0.0;
    
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
    kp_err = cte;
    ki_err += cte;
    kd_err = cte-prev_cte;
    prev_cte = cte;
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
    
    return -Kp*kp_err - Ki*ki_err - Kd*kd_err;  // TODO: Add your total error calc here!
}
