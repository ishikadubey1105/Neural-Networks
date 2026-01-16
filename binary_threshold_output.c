/*
 * Exercise 10:
 * Implement a neural network in C that outputs 0 or 1 based on
 * a threshold value.
 */

#include <stdio.h>

// Neural network that outputs 0 or 1 based on threshold
int thresholdNetwork(float x1, float x2, float w1, float w2, float bias,
                     float threshold) {
  float net = (x1 * w1) + (x2 * w2) + bias;
  return (net >= threshold) ? 1 : 0;
}

int main() {
  float x1, x2;
  float w1, w2;
  float bias;
  float threshold;
  int output;
  float net;

  printf("=== Binary Output Neural Network ===\n");

  printf("Enter input x1: ");
  scanf("%f", &x1);
  printf("Enter input x2: ");
  scanf("%f", &x2);

  printf("Enter weight w1: ");
  scanf("%f", &w1);
  printf("Enter weight w2: ");
  scanf("%f", &w2);

  printf("Enter bias: ");
  scanf("%f", &bias);

  printf("Enter threshold value: ");
  scanf("%f", &threshold);

  net = (x1 * w1) + (x2 * w2) + bias;
  output = thresholdNetwork(x1, x2, w1, w2, bias, threshold);

  printf("\n--- Network Output ---\n");
  printf("Net Input = %.2f\n", net);
  printf("Threshold = %.2f\n", threshold);
  printf("Binary Output = %d\n", output);

  if (output == 1)
    printf("(Net >= Threshold: Output is 1)\n");
  else
    printf("(Net < Threshold: Output is 0)\n");

  return 0;
}
