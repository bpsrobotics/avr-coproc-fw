#include <Encoder.h>

#define ENC_L_A 2
#define ENC_L_B 3
#define ENC_R_A 5
#define ENC_R_B 6

#define MC_L_PWM 7
#define MC_R_PWM 8

Encoder lQuad(ENC_L_A, ENC_L_B);
Encoder rQuad(ENC_R_A, ENC_R_B);

void setup() {
  pinMode(MC_L_PWM, OUTPUT);
  pinMode(MC_R_PWM, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
