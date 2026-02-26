# MULTI-RATE-CLOSED-LOOP-PID-CONTROL-SYSTEM

📌 Project Overview

This project implements a multi-rate closed-loop control system simulation in C using a deterministic 1ms scheduling loop.

The system is structured using an RTOS-style task architecture (Control, Communication, Logging), but runs using a time-triggered super-loop instead of a real RTOS kernel.

The project demonstrates core embedded firmware and control system concepts.

# System Architecture

The system runs on a 1ms base loop and executes different tasks at different rates.

Task Structure
Task	Frequency	Function
PID Task	1 ms	Computes control output and updates system position
Logging Task	100 ms	Prints current system state
Communication Task	500 ms	Updates setpoint (simulated command input)

This mimics real embedded systems where high-frequency control loops are separated from lower-frequency communication and monitoring tasks.

# Control Algorithm

A Proportional (P) controller is implemented:

error = setpoint - position
output = error
position += output / 10
Observed Behavior

When the setpoint changes, error increases immediately.

The controller generates a correction output.

The system gradually approaches the target value.

A steady-state error remains (expected in pure P control).

# Example Output
[COMM] New command: 100
[LOG] Position=45 Output=55
[LOG] Position=78 Output=22
[LOG] Position=91 Output=9

This shows the system converging toward the new setpoint.
