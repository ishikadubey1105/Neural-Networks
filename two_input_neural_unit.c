/*
 * Exercise 17:
 * Write a C program to simulate a two-input, one-output neural unit.
 */

#include <stdio.h>

// Two-input, one-output neural unit
int neuralUnit(float input1, float input2, float weight1, float weight2,
               float bias) {
  float net = (input1 * weight1) + (input2 * weight2) + bias;
  return (net >= 0) ? 1 : 0;
}

int main() {
  float in1, in2;
  float wt1, wt2;
  float b;
  int out;

  printf("=== Two-Input, One-Output Neural Unit ===\n");

  printf("Enter first input: ");
  scanf("%f", &in1);
  printf("Enter second input: ");
  scanf("%f", &in2);

  printf("Enter first weight: ");
  scanf("%f", &wt1);
  printf("Enter second weight: ");
  scanf("%f", &wt2);

  printf("Enter bias: ");
  scanf("%f", &b);

  out = neuralUnit(in1, in2, wt1, wt2, b);

  printf("\n--- Neural Unit Simulation ---\n");
  printf("Input Layer:  [%.2f, %.2f]\n", in1, in2);
  printf("Weights:      [%.2f, %.2f]\n", wt1, wt2);
  printf("Bias:         %.2f\n", b);
  printf("Net Input:    %.2f\n", (in1 * wt1) + (in2 * wt2) + b);
  printf("Output Layer: %d\n", out);

  return 0;
}
