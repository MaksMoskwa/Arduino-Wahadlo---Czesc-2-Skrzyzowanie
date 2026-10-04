# 🚦 Szalka Intersection in Kraków by the Vistula River

Welcome to the **Szalka Intersection in Kraków by the Vistula River**! 🌉

This is a simple **Arduino / Tinkercad** project that simulates a traffic-light system for a four-direction intersection.

The project uses **8 LEDs** — one green and one red LED for each direction.

## 📍 Location

**Szalka Intersection**
📌 Kraków, by the Vistula River 🇵🇱

The name of the intersection is fictional and was created specifically for this project.

## 🚦 How Does It Work?

The traffic lights cycle through four directions:

```text
             🟢 TOP
                ↑
                │
🟢 LEFT ←───────┼───────→ 🟢 RIGHT
                │
                ↓
             🟢 BOTTOM
```

Each direction receives a green light for **4 seconds**.

### Traffic Light Sequence

1. 🟢 **LEFT** — 4 seconds
2. 🟢 **TOP** — 4 seconds
3. 🟢 **RIGHT** — 4 seconds
4. 🟢 **BOTTOM** — 4 seconds
5. 🔄 The cycle starts again

At any given moment, only one direction has a green light. The other three directions have red lights.

## 💡 Components

The project uses:

* Arduino
* 4 × green LEDs
* 4 × red LEDs
* Resistors for the LEDs
* Jumper wires
* Breadboard
* Tinkercad Circuits

## 🔌 Pin Configuration

| Direction | Green LED | Red LED |
| --------- | --------- | ------- |
| ➡️ RIGHT  | Pin 6     | Pin 7   |
| ⬆️ TOP    | Pin 8     | Pin 9   |
| ⬇️ BOTTOM | Pin 10    | Pin 11  |
| ⬅️ LEFT   | Pin 12    | Pin 13  |

## ⏱️ Traffic Light Cycle

The complete cycle lasts **16 seconds**:

```text
0s ───── 4s ───── 8s ───── 12s ───── 16s
│         │         │          │          │
LEFT      TOP       RIGHT      BOTTOM     ↻
🟢        🟢        🟢         🟢
```

### Detailed Sequence

**0–4 seconds — LEFT**

```text
LEFT       🟢
TOP        🔴
RIGHT      🔴
BOTTOM     🔴
```

**4–8 seconds — TOP**

```text
LEFT       🔴
TOP        🟢
RIGHT      🔴
BOTTOM     🔴
```

**8–12 seconds — RIGHT**

```text
LEFT       🔴
TOP        🔴
RIGHT      🟢
BOTTOM     🔴
```

**12–16 seconds — BOTTOM**

```text
LEFT       🔴
TOP        🔴
RIGHT      🔴
BOTTOM     🟢
```

After 16 seconds, the sequence starts again.

## 🧠 How Does the Code Work?

The program uses the Arduino `millis()` function to measure time.

At the beginning of each cycle, the current time is stored:

```cpp
int now = millis();
```

The program then checks how much time has passed since the beginning of the cycle:

```cpp
while(millis() < now + 4000)
```

The following time intervals are used:

```cpp
4000 ms    // 4 seconds
8000 ms    // 8 seconds
12000 ms   // 12 seconds
16000 ms   // 16 seconds
```

This allows each direction to have a green light for 4 seconds.

## 🔄 Program Loop

The entire sequence runs inside:

```cpp
while(true)
```

This makes the traffic-light cycle repeat indefinitely:

```text
LEFT
 ↓
TOP
 ↓
RIGHT
 ↓
BOTTOM
 ↓
LEFT
 ↓
TOP
 ↓
...
```

## 🎯 Project Goal

The goal of this project is to create a simple simulation of a **traffic-light-controlled intersection** using Arduino.

The project demonstrates:

* Controlling LEDs
* Using `digitalWrite()`
* Configuring Arduino pins as `OUTPUT`
* Using `millis()` for timing
* Creating a repeating control system
* Basic Arduino/C++ programming

## 🏗️ Project Information

**Project name:** Szalka Intersection
**City:** Kraków
**Location:** By the Vistula River
**Platform:** Arduino / Tinkercad
**Programming language:** C++
**Project type:** Traffic light simulation 🚦

---

## 👨‍💻 Author

**Szalka**

> "Every proper intersection needs a proper name." 😎

## 🚦 Project Status

**WORKING™**

🟢 LEFT → 🟢 TOP → 🟢 RIGHT → 🟢 BOTTOM → 🔄

---

**© Szalka — Szalka Intersection in Kraków by the Vistula River**
