/*
 * Exercise 14:
 * Implement a C program to simulate binary classification using
 * a perceptron.
 */

#include <stdio.h>

// Binary classification using perceptron
int perceptronClassifier(float x1, float x2, float w1, float w2, float bias) {
  float net = (x1 * w1) + (x2 * w2) + bias;
  return (net >= 0) ? 1 : 0; // Class 1 or Class 0
}

int main() {
  float x1, x2;
  float w1, w2;
  float bias;
  int classification;

  printf("=== Binary Classification using Perceptron ===\n");
  printf("Classes: 0 (Negative) or 1 (Positive)\n\n");

  printf("Enter feature 1 (x1): ");
  scanf("%f", &x1);
  printf("Enter feature 2 (x2): ");
  scanf("%f", &x2);

  printf("Enter weight w1: ");
  scanf("%f", &w1);
  printf("Enter weight w2: ");
  scanf("%f", &w2);

  printf("Enter bias: ");
  scanf("%f", &bias);

  classification = perceptronClassifier(x1, x2, w1, w2, bias);

  printf("\n--- Classification Result ---\n");
  printf("Input features: [%.2f, %.2f]\n", x1, x2);
  printf("Weights: [%.2f, %.2f]\n", w1, w2);
  printf("Bias: %.2f\n", bias);
  printf("Net Input: %.2f\n", (x1 * w1) + (x2 * w2) + bias);
  printf("\nClassification: Class %d ", classification);

  if (classification == 1)
    printf("(Positive)\n");
  else
    printf("(Negative)\n");

  return 0;
}
