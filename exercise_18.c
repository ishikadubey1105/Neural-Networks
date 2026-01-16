/*
 * Exercise 18:
 * Implement a C program to demonstrate forward computation in a
 * neural network.
 */

#include <stdio.h>

// Forward computation in a neural network
int stepActivation(float net) { return (net >= 0) ? 1 : 0; }

void forwardPass(float x1, float x2, float w1, float w2, float bias) {
  float net;
  int output;

  printf("\n=== Forward Propagation ===\n");
  printf("Step 1: Receive inputs\n");
  printf("        x1 = %.2f, x2 = %.2f\n", x1, x2);

  printf("\nStep 2: Multiply by weights\n");
  printf("        x1 × w1 = %.2f × %.2f = %.2f\n", x1, w1, x1 * w1);
  printf("        x2 × w2 = %.2f × %.2f = %.2f\n", x2, w2, x2 * w2);

  printf("\nStep 3: Sum weighted inputs\n");
  printf("        Sum = %.2f + %.2f = %.2f\n", x1 * w1, x2 * w2,
         (x1 * w1) + (x2 * w2));

  printf("\nStep 4: Add bias\n");
  net = (x1 * w1) + (x2 * w2) + bias;
  printf("        Net = %.2f + %.2f = %.2f\n", (x1 * w1) + (x2 * w2), bias,
         net);

  printf("\nStep 5: Apply activation function\n");
  output = stepActivation(net);
  printf("        Output = step(%.2f) = %d\n", net, output);

  printf("\n=== Forward Pass Complete ===\n");
  printf("Final Output: %d\n", output);
}

int main() {
  float x1, x2;
  float w1, w2;
  float bias;

  printf("=== Forward Computation in Neural Network ===\n");

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

  forwardPass(x1, x2, w1, w2, bias);

  return 0;
}
