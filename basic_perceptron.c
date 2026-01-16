/*
 * Exercise 5:
 * Write a C program to simulate a basic perceptron model.
 */

#include <stdio.h>

// Basic Perceptron Model
int perceptron(float inputs[], float weights[], int size, float bias) {
  float net = bias;

  // Calculate weighted sum
  for (int i = 0; i < size; i++) {
    net += inputs[i] * weights[i];
  }

  // Apply step activation
  return (net >= 0) ? 1 : 0;
}

int main() {
  float x1, x2;
  float w1, w2;
  float bias;
  float inputs[2];
  float weights[2];
  int output;

  printf("=== Basic Perceptron Model ===\n");
  printf("Enter input 1: ");
  scanf("%f", &x1);
  printf("Enter input 2: ");
  scanf("%f", &x2);

  printf("Enter weight 1: ");
  scanf("%f", &w1);
  printf("Enter weight 2: ");
  scanf("%f", &w2);

  printf("Enter bias: ");
  scanf("%f", &bias);

  inputs[0] = x1;
  inputs[1] = x2;
  weights[0] = w1;
  weights[1] = w2;

  output = perceptron(inputs, weights, 2, bias);

  printf("\n--- Perceptron Output ---\n");
  printf("Inputs: [%.2f, %.2f]\n", x1, x2);
  printf("Weights: [%.2f, %.2f]\n", w1, w2);
  printf("Bias: %.2f\n", bias);
  printf("Perceptron Output = %d\n", output);

  return 0;
}
