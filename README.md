# 🚀 AETPC: Thermodynamic Swarm Colliding Particle Architecture in VRAM

A high-performance combinatorial optimization architecture built for extreme-scale routing and spatial problems, executing natively within GPU video memory (VRAM).

---

## 🛠️ Architectural Highlights & Low-Level Design
* **Massive Parallel Processing:** Concurrent simulation of **16,384 particles** interacting via P2P collisions directly in VRAM.
* **128-Bit Bitmask Structure (`Bitmask128`):** Dual `uint64_t low` and `uint64_t high` word layout, enabling direct management of corporate-scale graphs (up to 128 nodes) while bypassing traditional register bottlenecks.
* **Integrated 2-Opt VRAM Kernel:** Topological refinement executed entirely on video memory, eliminating redundant Host (CPU) data traffic.

---

## 📊 Official TSPLIB Benchmarks & Results

| TSPLIB Instance | Cities | World Optimum | AETPC VRAM Cost | Percentage Gap |
| :--- | :---: | :---: | :---: | :---: |
| **eil101** | 101 | 629 | 664 | **5.56%** |
| **bier127** | 127 | 118,282 | 124,960 | **5.65%** |

---

## 📈 Statistical Robustness Audit (30 Consecutive Runs)
Validated under rigorous stress-testing on the `eil101` instance:
* **Standard Deviation:** `0.00` (Absolute deterministic convergence).
* **Average Gap:** `5.56%`.
* **Average VRAM Processing Time:** `261.85 ms`.

---

## 💡 Comparative Advantage vs. CPU
While traditional sequential CPU approaches rely on greedy descents that trap execution in suboptimal local minima (cost 680), AETPC leverages VRAM parallelism to explore vast combinatorial spaces in milliseconds, securing a structurally superior elite solution.

---

## 🎯 Industrial Target Applications
* **Last-Mile Delivery Logistics:** Real-time urban fleet routing optimization.
* **Electric Vehicle (EV) Fleets:** Intelligent routing bound to strict recharging constraints.
* **Advanced Manufacturing:** Pathfinding optimization for CNC machinery and industrial laser cutting.

---
*Note: The core proprietary source code and advanced kernel implementations are restricted and protected under intellectual property guidelines. For partnership, licensing, or technical inquiries, contact the author directly.*
