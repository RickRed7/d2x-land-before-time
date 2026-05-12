# README.md: d2x-Land Before Time (Alpha 1.0)
### **Project Overview**
**d2x-Land Before Time** is a high-performance ARPG framework engineered for the **Xemu** (Original Xbox) emulation environment. Developed in a siloed **C++ and Termux** ecosystem, the project features low-level kernel optimizations and a data-driven entity system.
### **Core Architecture**
#### **1. Kernel-Level Physics**
The engine utilizes a custom physics implementation (src/kernel/physics.cpp) designed for hardware-rooted integrity and precise environmental interaction.
 * **Act-Specific Calibration**: Gravity and friction vectors are dynamically adjusted based on the current Act (e.g., Act 4 utilizes a 0.35f gravity constant).
 * **Zero-Stall Memory**: Optimized memory management to prevent execution lag during high-intensity combat simulations.
#### **2. The Amber Trials (Endgame)**
The primary progression loop centers on a thermodynamic scaling protocol.
 * **Scaling Formula**: Difficulty spikes per wave using the following logic:
   
 * **Resource Yield**: Successful waves reward **Amber Shards**, which are the primary currency for character growth.
#### **3. Class System**
Character archetypes are defined by modular state machines and signature abilities:
 * **Rex Warrior**: Specializes in high-durability combat and "Dino-Grip" dual-wielding.
 * **Raptor Hunter**: Focuses on agility and high-damage output, such as the "Bone Javelin" (scaled at Str \times 1.5).
 * **Ptero-Mage**: Utilizes aerial-based elemental logic for crowd control.
### **Data Management**
All entity and item parameters are managed via flat-file parsing to ensure a minimal hardware footprint:
 * **monstats.txt**: Centralized repository for monster HP, speed, and resistances.
 * **loot.txt**: Probability-based drop tables for high-tier assets like the **Obsidian Blade** or the **Heart of Pangaea**.
### **Installation & Deployment**
 1. **Environment**: Ensure **Termux** is configured with g++ and git.
 2. **Clone & Build**:
   ```bash
   git clone [PRIVATE_REPO_URL]
   cd d2x-land-before-time
   g++ -o d2x_engine src/main.cpp src/kernel/*.cpp src/classes/*.cpp
   
   ```
 3. **Emulation**: Load the compiled binary or generated ISO into **Xemu** for visual simulation.
**Status**: ALPHA 1.0 - FEATURE COMPLETE
**Lead Systems Architect**: Richard A. DiMassa Jr.
```

```

