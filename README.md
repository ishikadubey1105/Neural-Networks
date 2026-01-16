# 🧠 Basic Neural Networks in C

A comprehensive collection of **20 C programs** demonstrating fundamental neural network concepts, from basic neurons to perceptrons and logic gates.

## 📋 Table of Contents
- [Overview](#overview)
- [Exercises](#exercises)
- [Getting Started](#getting-started)
- [How to Compile and Run](#how-to-compile-and-run)
- [Concepts Covered](#concepts-covered)
- [File Structure](#file-structure)

---

## 🎯 Overview

This repository contains 20 hands-on exercises that teach the fundamentals of neural networks using C programming. Each exercise builds upon core concepts like weighted sums, activation functions, and forward propagation.

**Key Learning Outcomes:**
- Understanding how artificial neurons process information
- Implementing activation functions (step, threshold, hard-limit)
- Building simple perceptron models
- Creating logic gates (AND, OR, NOT) using neural networks
- Performing binary classification
- Understanding the role of weights and bias

---

## 📚 Exercises

### **Core Concepts** (1-5)
| Exercise | Description | File |
|----------|-------------|------|
| 1 | Simple neural network with step activation | `simple_neural_network.c` |
| 2 | Single artificial neuron (two inputs, one output) | `single_artificial_neuron.c` |
| 3 | Weighted sum calculator | `weighted_sum_calculator.c` |
| 4 | Threshold activation function | `threshold_activation.c` |
| 5 | Basic perceptron model | `basic_perceptron.c` |

### **Logic Gates** (6-8)
| Exercise | Description | File |
|----------|-------------|------|
| 6 | AND gate using neural network | `and_gate.c` |
| 7 | OR gate using neural network | `or_gate.c` |
| 8 | NOT gate using neural network | `not_gate.c` |

### **Neuron Operations** (9-13)
| Exercise | Description | File |
|----------|-------------|------|
| 9 | Compute neuron output from inputs, weights, and bias | `neuron_output_computation.c` |
| 10 | Binary output based on threshold value | `binary_threshold_output.c` |
| 11 | Demonstrate bias effect on neuron output | `bias_effect_demo.c` |
| 12 | Neural network with fixed weights (no training) | `fixed_weights_network.c` |
| 13 | Display intermediate net input of a neuron | `intermediate_net_input.c` |

### **Classification & Advanced** (14-20)
| Exercise | Description | File |
|----------|-------------|------|
| 14 | Binary classification using perceptron | `binary_classification.c` |
| 15 | Hard-limit activation function | `hard_limit_activation.c` |
| 16 | Boolean classifier (true/false) | `boolean_classifier.c` |
| 17 | Two-input, one-output neural unit | `two_input_neural_unit.c` |
| 18 | Forward propagation demonstration | `forward_propagation.c` |
| 19 | Neural network with user-defined inputs (flexible) | `user_defined_network.c` |
| 20 | Display final neuron output after activation | `final_output_display.c` |

---

## 🚀 Getting Started

### **Prerequisites**
- GCC compiler (or any C compiler)
- Basic understanding of C programming
- Terminal/Command Prompt

### **Installation**
Clone or download this repository:
```bash
git clone <repository-url>
cd Neural-Networks
```

---

## ⚙️ How to Compile and Run

### **Method 1: Individual Compilation**
Compile a specific exercise:
```bash
gcc simple_neural_network.c -o simple_neural_network
```

Run the compiled program:
```bash
# On Windows
simple_neural_network.exe

# On Linux/Mac
./simple_neural_network
```

### **Method 2: Compile All at Once**
On **Windows** (PowerShell):
```powershell
foreach ($file in Get-ChildItem -Filter "*.c") { 
    gcc $file.Name -o $file.BaseName.exe 
}
```

On **Linux/Mac** (Bash):
```bash
for file in *.c; do 
    gcc "$file" -o "${file%.c}"
done
```

### **Running an Exercise**
Each program is interactive and will prompt you for inputs:
```bash
./simple_neural_network

# Example interaction:
# Enter input x1: 1.5
# Enter input x2: 2.0
# Enter weight w1: 0.5
# Enter weight w2: 0.3
# Enter bias: -0.2
#
# Weighted Sum (Net Input) = 1.65
# Neuron Output = 1
```

---

## 🧪 Concepts Covered

### **1. Weighted Sum**
```
Net Input = (x₁ × w₁) + (x₂ × w₂) + bias
```

### **2. Step Activation Function**
```c
output = (net >= 0) ? 1 : 0;
```

### **3. Perceptron**
A single-layer neural network that:
1. Accepts inputs
2. Multiplies by weights
3. Adds bias
4. Applies activation function
5. Produces binary output

### **4. Logic Gates as Neural Networks**
- **AND Gate**: Both inputs must be 1 → output 1
- **OR Gate**: At least one input is 1 → output 1
- **NOT Gate**: Inverts the input

### **5. Forward Propagation**
The process of passing inputs through the network to compute output:
```
Input → Weighted Sum → Activation → Output
```

---

## 📁 File Structure

```
Neural-Networks/
├── README.md                        # This file
├── simple_neural_network.c          # Exercise 1: Simple neural network
├── single_artificial_neuron.c       # Exercise 2: Single artificial neuron
├── weighted_sum_calculator.c        # Exercise 3: Weighted sum
├── threshold_activation.c           # Exercise 4: Threshold activation
├── basic_perceptron.c               # Exercise 5: Basic perceptron
├── and_gate.c                       # Exercise 6: AND gate
├── or_gate.c                        # Exercise 7: OR gate
├── not_gate.c                       # Exercise 8: NOT gate
├── neuron_output_computation.c      # Exercise 9: Neuron output computation
├── binary_threshold_output.c        # Exercise 10: Binary output
├── bias_effect_demo.c               # Exercise 11: Bias effect demonstration
├── fixed_weights_network.c          # Exercise 12: Fixed weights network
├── intermediate_net_input.c         # Exercise 13: Intermediate net input
├── binary_classification.c          # Exercise 14: Binary classification
├── hard_limit_activation.c          # Exercise 15: Hard-limit activation
├── boolean_classifier.c             # Exercise 16: Boolean classifier
├── two_input_neural_unit.c          # Exercise 17: Two-input neural unit
├── forward_propagation.c            # Exercise 18: Forward propagation
├── user_defined_network.c           # Exercise 19: User-defined inputs
└── final_output_display.c           # Exercise 20: Final output display
```

---

## 💡 Learning Path

**Recommended Order:**
1. Start with **Exercise 1-5** to understand basic neuron operations
2. Move to **Exercise 6-8** to see practical applications (logic gates)
3. Explore **Exercise 9-13** for deeper understanding of neuron mechanics
4. Complete **Exercise 14-20** for classification and advanced concepts

---

## 📖 Example Output

**Exercise 6: AND Gate**
```
=== AND Gate using Neural Network ===
Fixed weights: w1 = 1.0, w2 = 1.0
Fixed bias: -1.5

Enter first input (0 or 1): 1
Enter second input (0 or 1): 1

--- AND Gate Result ---
1 AND 1 = 1

--- Truth Table ---
A | B | Output
--|---|-------
0 | 0 |   0
0 | 1 |   0
1 | 0 |   0
1 | 1 |   1
```

---

## 🤝 Contributing

Feel free to:
- Report bugs or issues
- Suggest improvements
- Add more exercises
- Enhance documentation

---

## 📝 Notes

- All programs use **step activation function** (threshold at 0)
- Input values can be floating-point numbers
- Outputs are binary (0 or 1)
- Programs are designed for educational purposes
- No external libraries required (only `stdio.h`)

---

## 🎓 Resources

To learn more about neural networks:
- Understanding perceptrons and their limitations
- Exploring multi-layer neural networks
- Learning about backpropagation
- Studying different activation functions (sigmoid, ReLU, tanh)

---

## ✨ Author

Created as a learning resource for understanding basic neural network concepts through hands-on C programming.

---

## 📜 License

This project is open-source and available for educational purposes.

---

**Happy Learning! 🚀**
