# 🎈 BubblePop Game

BubblePop is a simple **2D arcade-style game** developed in **C++** using **OpenGL**.  
The objective of the game is to pop balloons by interacting with them before they disappear.

This project is part of a **game development learning project** and focuses on graphics rendering, input handling, and basic game logic.

---

## 🕹️ Gameplay Overview

- Balloons appear on the screen at different positions
- Player pops balloons using mouse or keyboard input
- Each popped balloon increases the score
- The game ends when time runs out or all balloons are popped

---

## 🛠️ Technologies Used

- **Language:** C++
- **Graphics:** OpenGL
- **Window & Input:** GLUT
- **Image Loading:** stb_image
- **IDE:** Microsoft Visual Studio
- **Platform:** Windows

---

## 📁 Project Structure

```bash
BubblePop/
│
├── demo/
│ ├── iMain.cpp # Main game loop
│ ├── Balloon.hpp # Balloon class and logic
│ ├── Utils.hpp # Utility functions
│ ├── iGraphics.h # Graphics wrapper
│ ├── bitmap_loader.h # Bitmap loading
│ ├── stb_image.h # Image loading library
│ │
│ ├── Images/ # Game assets
│ │ ├── balloon1.png
│ │ ├── balloon2.png
│ │ └── ...
│ │
│ └── BubblePop Game.vcxproj
│
├── .gitignore
├── README.md

---

## ▶️ How to Run the Game

### Requirements
- Windows OS
- Microsoft Visual Studio
- OpenGL & GLUT libraries configured

### Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/Daiyan-2004/BubblePop.git
2. Open the project file in Visual Studio:
3. Build the project (Ctrl + Shift + B)
4. Run the game (Ctrl + F5)
   
