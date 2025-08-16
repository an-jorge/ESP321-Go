---
description: Traffic Light Simulator with ESP32 v1
icon: traffic-light-stop
---

# IoT Lab 1

## Traffic Light Simulator with ESP32

***

The Traffic Light project aims to simulate the operation of a traffic light using the ESP32 board, exploring concepts from embedded systems and IoT.

Beyond basic LED control (red, yellow, and green), this project can evolve to include smart modes, sensor integration, and even remote control via a network.

### Objectives

Reproduce the cycle of a real traffic light using precise timing\
Demonstrate the use of GPIOs on the ESP32 for LED control\
Enable future IoT expansions (monitoring and remote control)

### Components used

1x ESP32 DevKit (or similar)\
3x LEDs (red, yellow, and green)\
3x Resistors from 100Ω to 220Ω\
Breadboard and jumpers

### Possible expansions

Remote control via Wi-Fi or Bluetooth\
Dynamic timing adjustment of each signal\
Integration with occupancy sensors\
Sending data to an IoT dashboard



<details>

<summary>Code</summary>

{% code overflow="wrap" %}
```arduino
// 2025 Ago

  #define red_light 15
  #define yellow_light 2
  #define green_light 4

void configuration(){
    pinMode(red_light, OUTPUT);
    pinMode(yellow_light, OUTPUT);
    pinMode(green_light, OUTPUT);

  }

  void red(){
    digitalWrite(red_light, HIGH);
    digitalWrite(green_light, LOW);
    digitalWrite(yellow_light, LOW);
    delay(5000);
  }

  void yellow(){
    digitalWrite(red_light, LOW);
    digitalWrite(green_light, LOW);
    digitalWrite(yellow_light, HIGH);
    delay(5000);
  }

  void green(){
    digitalWrite(red_light, LOW);
    digitalWrite(green_light, HIGH);
    digitalWrite(yellow_light, LOW);
    delay(2000);
  }


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

red();
green();
yellow();

}

```
{% endcode %}

</details>

<details>

<summary>Diagram</summary>

<figure><img src="../.gitbook/assets/Traffic light - Diagram.png" alt=""><figcaption></figcaption></figure>

</details>
