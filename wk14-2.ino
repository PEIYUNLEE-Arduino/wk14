int latchPin = 8;
int clockPin = 12;
int dataPin = 11;
byte colDataMatrix[8] = { 
  B01111111,
  B10111111,
  B11011111,
  B11101111,
  B11110111,
  B11111011,
  B11111101,
  B11111110
  };
                      
byte rowDataMatrixsmile[8] = { 
  B00011000,
  B00111100,
  B01111110,
  B11111111,
  B11111111,
  B11111111,
  B01100110,
  B00000000
  };
  
byte rowDataMatrixlove[8] = { 
  B11111111,
  B11111111,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B11111111,
  B11111111
  };
  
byte rowDataMatrixsad[8] = { 
  B00011000,
  B00100100,
  B01000010,
  B10000001,
  B10000001,
  B10011001,
  B01100110,
  B00000000
  };

 byte rowDataMatrixlove2[8] = { 
  B11111111,
  B11111111,
  B11000011,
  B11000011,
  B11000011,
  B11000011,
  B11000011,
  B11000011
  }; 
  int delay_time = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int j=0;j<10;j++){
  for(int i = 0; i < 8 ; i++){
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
  shiftOut(dataPin, clockPin, MSBFIRST, rowDataMatrixsmile[i]);
  digitalWrite(latchPin,HIGH);
  delay(20);
  }}

for(int j=0;j<100;j++){
  for(int i = 0; i < 8  ; i++){
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
  shiftOut(dataPin, clockPin, MSBFIRST, rowDataMatrixlove[i]);
  digitalWrite(latchPin,HIGH);
  delay(delay_time);
  }  }

  for(int j=0;j<100;j++){
  for(int i = 0; i < 8 ; i++){
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
  shiftOut(dataPin, clockPin, MSBFIRST, rowDataMatrixsad[i]);
  digitalWrite(latchPin,HIGH);
  delay(delay_time);
  }}
for(int j=0;j<100;j++){
  for(int i = 0; i < 8  ; i++){
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
  shiftOut(dataPin, clockPin, MSBFIRST, rowDataMatrixlove2[i]);
  digitalWrite(latchPin,HIGH);
  delay(delay_time);
  }  }
}
