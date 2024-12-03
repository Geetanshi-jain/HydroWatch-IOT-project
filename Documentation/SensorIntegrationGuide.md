# 🔧 Sensor Integration Guide  

This guide explains how to connect and configure the sensors used in the HydroWatch system.  

---

## 🌊 **1. Turbidity Sensor Integration**  
1️⃣ Connect the **VCC pin** of the turbidity sensor to the **5V** pin on the Arduino Uno.  
2️⃣ Connect the **GND pin** of the sensor to the **GND** on the Arduino.  
3️⃣ Connect the **Signal pin** to **A0** (analog input pin) on the Arduino.  
4️⃣ Calibrate the sensor by testing with clean and impure water to set threshold values.  

---

## 🔄 **2. Water Flow Sensor Integration**  
1️⃣ Connect the **VCC wire** (usually red) of the flow sensor to **5V** on the Arduino.  
2️⃣ Connect the **GND wire** (usually black) to the **GND** pin on the Arduino.  
3️⃣ Connect the **Signal wire** (usually yellow) to **D2** (digital input pin).  
4️⃣ Test the flow sensor by running water through it and reading values on the Serial Monitor.  

---

## 📏 **3. Water Level Sensor Integration**  
1️⃣ Place the water level sensor vertically in the tank.  
2️⃣ Connect the **VCC pin** of the sensor to the **5V** pin on the Arduino.  
3️⃣ Connect the **GND pin** to the **GND** pin on the Arduino.  
4️⃣ Connect the **Signal pin** to **A1** (analog input pin).  

---

## 💡 Tips:  
- Always test the sensors individually before integrating them into the system.  
- Ensure secure connections to avoid false readings.  
- Use resistors where needed to protect components.  
