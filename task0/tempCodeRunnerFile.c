#include <stdio.h>
#include <math.h>

int main()
{
  float ra, rb, x, a;
  printf("Outer radius (ra) of pulley = ");
  scanf("%f", &ra);
  printf("Inner radius (rb) of pulley = ");
  scanf("%f", &rb);
  printf("Distance covered by block (x) = ");
  scanf("%f", &x);
  printf("Angular acceleration (a) = ");
  scanf("%f", &a);
  //theta calc
  float theta = ra * x;
  printf("for finding theta, we know the formula: theta = ra * x\n ");
  printf("Theta= %0.2f radians\n", theta); 
  //time calc
  float t = (2 * theta) / a;
  printf("Using kinematics eqn for circular motion, we get : time(t) = [(2 * theta) / a )]\n");
  t = pow(t, 0.5);
  printf("time required for block to move x= %0.2f seconds\n", t);
  //final omega calc
  float w = a * t;
  printf("for calculating angular velocity, we use the formula: w = a * t \n");
  printf("Final angular velocity= %0.2f rad/s\n", w);
  //final va and vb calc
  float va = w * ra;
  float vb = w * rb;
  printf(" for calculating final velocity of Block A and Block B, we use the formula : v = w * r \n");
  printf("Velocity of A = %0.3f rad/s\n", va);
  printf("Velocity of B = %0.3f rad/s\n", vb);
  printf(" Hence we calculated time(t) , velocity of block A (va) and velocity of block B (vb) from the above software solution !");
}



