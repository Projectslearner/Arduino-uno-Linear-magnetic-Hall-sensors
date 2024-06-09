# Linear Magnetic Hall Sensors with Arduino

#### Project Overview

This project demonstrates how to use an Arduino Uno with a linear magnetic Hall sensor to detect the presence or absence of a magnetic field. When a magnetic field is detected, an LED connected to the Arduino Uno illuminates.

#### Components Needed

1. **Arduino Uno**
2. **Linear Magnetic Hall Sensor**
3. **LED**
4. **220Ω Resistor**
5. **Jumper Wires**

### Block Diagram



#### Instructions

1. **Circuit Setup:**
   - Connect the linear magnetic Hall sensor's signal pin to analog pin A0 on the Arduino Uno.
   - Connect the positive (longer leg) of the LED to digital pin 13 on the Arduino Uno via a 220Ω current-limiting resistor.
   - Connect the negative (shorter leg) of the LED to the ground (GND) pin on the Arduino Uno.

2. **Initialization:**
   - Initialize serial communication at a baud rate of 9600 in the `setup()` function.

3. **Sensor Reading and LED Control:**
   - Read the analog value from the Hall sensor using the `analogRead()` function.
   - Print the sensor value to the Serial Monitor for monitoring.
   - Use an `if` statement to compare the sensor value with a threshold (e.g., 500).
   - If the sensor value is above the threshold, turn on the LED by setting the corresponding pin to `HIGH`.
   - If the sensor value is below the threshold, turn off the LED by setting the corresponding pin to `LOW`.

4. **Testing:**
   - Upload the code to the Arduino Uno and open the Serial Monitor.
   - Observe the sensor value displayed on the Serial Monitor.
   - Bring a magnet close to the Hall sensor to observe the LED turning on when a magnetic field is detected.

5. **Adjustments:**
   - Adjust the threshold value in the code to suit the strength of the magnetic field being detected.
   - Experiment with different magnet strengths and distances to understand the sensor's sensitivity and range.

#### Applications

- **Proximity Detection:** Use Hall sensors for proximity detection applications, such as door/window sensors or proximity switches.
- **Magnetic Field Measurement:** Measure and monitor magnetic fields in various applications, such as automotive, industrial, or scientific instrumentation.
- **Security Systems:** Incorporate Hall sensors into security systems to detect the presence of magnets or magnetic objects.

#### Notes

- Ensure proper orientation and connection of the Hall sensor and LED to the Arduino Uno.
- Adjust the threshold value and experiment with different magnet strengths to optimize the sensitivity and responsiveness of the sensor.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner