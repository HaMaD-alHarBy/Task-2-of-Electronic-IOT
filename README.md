# Task-2-of-Electronic-IOT
Control of Sweep of 6 Servo Motor By Arduino &amp; Humanoid Robot Arm Motion Algorithm

# 1. 6-Servo Motor Control System

## Project Overview
This Arduino-based system controls 6 servo motors simultaneously, demonstrating synchronized motion with a sweep pattern. Ideal for robotic arm.

## Features
- Synchronized control of 6 positional micro servos motors

- Smooth 180° sweeping motion

- Hardware protection with capacitors

- Simple Arduino Uno R3 implementation

## Hardware Requirements / Components List

<img width="1448" height="834" alt="Screenshot 2025-07-11 165030" src="https://github.com/user-attachments/assets/4ae61a25-2e87-4717-9b2d-eb0079e81e46" />

## Installation / Wiring Guide
- Connect servos to specified pins

- Install 100μF capacitors across each servo's power leads

- Upload provided Arduino sketch

- Connect 5V power supply with 1A

<img width="1926" height="1400" alt="Screenshot 2025-07-11 172658" src="https://github.com/user-attachments/assets/9c8bc490-adce-4951-b97c-fa1e5cffbe6c" />

## Arduino Code

<img width="2760" height="1598" alt="Screenshot 2025-07-11 172826" src="https://github.com/user-attachments/assets/e9aff362-e031-4983-bd17-b4f4e44c5ecd" />

## Safety Notes
- Ensure proper power supply capacity

- Never exceed servo voltage limits

# 2. Humanoid Robot Arm Motion Control Algorithm

## Project Overview
Advanced 5-DOF (Degree of Freedom) control algorithm for humanoid robotic arms, featuring natural movement patterns and safety protocols.

## Joint Configuration
### Joint	        | Range	     | Neutral	    | Speed Limit
-   Base          | 0-180°	   | 90°          | 30°/sec
-   Shoulder      | 30-150°	   | 90°	        | 25°/sec
-   Elbow	        | 20-160°	   | 90°	        | 20°/sec
-   Wrist	        | 60-120°	   | 90°	        | 15°/sec
-   Gripper	      | 0-90°	     | 0°	          | N/A

## Motion Algorithms 
### - Handshake Motion
1. INITIATE:
   - Base:      90° → 45°    (45° right)
   - Shoulder:  90° → 60°    (30° upward)
   - Elbow:     90° → 120°   (30° bend)
   - Wrist:     90° → 80°    (10° inward)
   - Gripper:   0° → 50°     (Partial close)

2. SHAKE:
   - Oscillate Wrist: 80° ↔ 100° (3 cycles)
   - Sync Elbow:      120° ↔ 110° 

3. RESET:
   - Return all joints to neutral

### - Point Forward Motion
1. INITIATE:
   - Base:      90° → 90°    (Centered)
   - Shoulder:  90° → 30°    (60° downward)
   - Elbow:     90° → 180°   (Full extend)
   - Wrist:     90° → 60°    (30° downward)
   - Gripper:   0° → 0°      (Open)

2. HOLD:
   - Maintain for 2 seconds

3. RETURN:
   - Smooth transition to neutral

## Example Commands

<img width="986" height="222" alt="Screenshot 2025-07-11 174049" src="https://github.com/user-attachments/assets/493e9267-3b2e-4973-8286-47488d8f9dcf" />












