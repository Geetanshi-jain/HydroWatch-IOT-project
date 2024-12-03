# 💻 Software Setup Guide  

This guide explains how to set up and program the software for HydroWatch.  

---

## 📥 **1. Install Required Tools**  
1️⃣ Download and install the **Arduino IDE** from [Arduino Official Website](https://www.arduino.cc).  
2️⃣ Install the **Blynk App** on your mobile device from the Google Play Store or Apple App Store.  
3️⃣ Add the necessary libraries in the Arduino IDE:  
   - **Blynk Library**  
   - **ESP8266WiFi Library**  

---

## 🖥️ **2. Upload Arduino Code**  
1️⃣ Open the **MainProgram.ino** file in the Arduino IDE.  
2️⃣ Configure your **WiFi credentials** and **Blynk Auth Token** in the code.  
3️⃣ Connect the Arduino Uno to your computer via USB.  
4️⃣ Select the correct board and port in the IDE:  
   - Board: **Arduino Uno**  
   - Port: (Select your connected port)  
5️⃣ Click **Upload** to program the Arduino Uno.  

---

## 🌐 **3. Upload NodeMCU Code**  
1️⃣ Open the **blynk_esp8266.ino** file in the Arduino IDE.  
2️⃣ Configure your WiFi credentials in the code.  
3️⃣ Connect the NodeMCU to your computer.  
4️⃣ Select the correct board and port in the IDE:  
   - Board: **NodeMCU 1.0 (ESP-12E Module)**  
   - Port: (Select your connected port)  
5️⃣ Click **Upload** to program the NodeMCU.  

---

## 💡 Tips:  
- Use the Serial Monitor to debug any connectivity or sensor issues.  
- Ensure the correct libraries are installed for each component.  
- Test cloud connectivity by running the Blynk app and observing sensor readings.  
