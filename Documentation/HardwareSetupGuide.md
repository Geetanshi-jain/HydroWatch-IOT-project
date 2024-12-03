# 🛠️ Hardware Setup Guide  

This guide explains how to assemble and connect all the hardware components of HydroWatch.  

---

## 📌 **1. Components Needed**  
- 🌊 **Turbidity Sensor**  
- 🔄 **Water Flow Sensors**  
- 📏 **Water Level Sensors**  
- 🖥️ **Arduino Uno**  
- 🌐 **NodeMCU**  
- 🔧 **Solenoid Valve**  
- 🔊 **Buzzer and LEDs**  
- 🔌 **Power Supply**  

---

## 🔗 **2. Connections**  

### **Arduino Uno Setup:**  
1️⃣ Connect all sensor pins as described in the Sensor Integration Guide.  
2️⃣ Attach the relay module for controlling the solenoid valve.  

### **NodeMCU Setup:**  
1️⃣ Connect the **TX** pin of the Arduino to the **RX** pin of the NodeMCU.  
2️⃣ Connect the **RX** pin of the Arduino to the **TX** pin of the NodeMCU.  
3️⃣ Ensure a common **GND** between the Arduino and NodeMCU.  

### **Solenoid Valve and Motor Connection:**  
1️⃣ Connect the solenoid valve to the relay module.  
2️⃣ Connect the relay module to the motor for automatic control.  

---

## 💡 Tips:  
- Use a breadboard for temporary connections during testing.  
- Secure all connections with jumpers and insulation to avoid short circuits.  
- Test each component individually before assembling the full system.  
