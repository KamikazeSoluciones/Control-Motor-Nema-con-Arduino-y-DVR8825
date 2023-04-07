  
/*KAMIKAZE SOLUCIONES ELECTRONICAS presenta:
 Codigo de Arduino Nano, para control de Motor Nema 17 
 */
  
int DIR = 9;     
int enable = 11;
int STEP = 12; 

int PULSADOR_A = 3;//200 pasos
int PULSADOR_B = 4;//400 pasos
int PULSADOR_C = 5;//600 pasos 
int PULSADOR_D = 6;//RETURN = 600 pasos


int modo1=0;  
int modo2=0;
int modo3=0;
int modo4=0;


int PULSADOR_A_pressed = 0;
int PULSADOR_B_pressed = 0;
int PULSADOR_C_pressed = 0;
int PULSADOR_D_pressed = 0;


void setup() {

  pinMode(PULSADOR_A,INPUT);
  pinMode(PULSADOR_B,INPUT);
  pinMode(PULSADOR_C,INPUT);
  pinMode(PULSADOR_D,INPUT);
    
  pinMode(STEP, OUTPUT);  
  pinMode(DIR, OUTPUT);  

  }

void loop(){
//*************************************************************
//MODO 1: 200 pasos de Motor
//************************************************************* 
int modo1 = digitalRead(PULSADOR_A);
  if(modo1==HIGH) {
   PULSADOR_A_pressed  = 1;
  } else if(modo1==LOW && PULSADOR_A_pressed ==1) {
   PULSADOR_A_pressed  = 0;
    
    digitalWrite(enable, HIGH); 
    delay(200);
    digitalWrite(enable, LOW);
    delay(200);
    
    digitalWrite(DIR, HIGH);     // giro en sentido opuesto
    for(int i = 0; i < 200; i++){  //200 PASOS =
    digitalWrite(STEP, HIGH); 
    delay(1);
    digitalWrite(STEP, LOW);
    delay(1);
      }
        }  
//*************************************************************
//MODO 2: 400 pasos de Motor
//*************************************************************
 int modo2 = digitalRead(PULSADOR_B);
  if(modo2==HIGH) {
   PULSADOR_B_pressed  = 1;
  } else if(modo2==LOW && PULSADOR_B_pressed ==1) {
   PULSADOR_B_pressed  = 0;
    
    digitalWrite(enable, HIGH); 
    delay(200);
    digitalWrite(enable, LOW);
    delay(200);
    
    digitalWrite(DIR, HIGH);     // giro en sentido opuesto
    for(int i = 0; i < 400; i++){  //400 PASOS 
    digitalWrite(STEP, HIGH); 
    delay(1);
    digitalWrite(STEP, LOW);
    delay(1);
      }
        }  
//*************************************************************
//MODO 3: 600 pasos de Motor
//*************************************************************
int modo3 = digitalRead(PULSADOR_C);
  if(modo3==HIGH) {
   PULSADOR_C_pressed  = 1;
  } else if(modo3==LOW && PULSADOR_C_pressed ==1) {
   PULSADOR_C_pressed  = 0;
    
    digitalWrite(enable, HIGH); 
    delay(200);
    digitalWrite(enable, LOW);
    delay(200);
    
    digitalWrite(DIR, HIGH);     // giro en sentido opuesto
    for(int i = 0; i < 600; i++){  //600 PASOS 
    digitalWrite(STEP, HIGH); 
    delay(1);
    digitalWrite(STEP, LOW);
    delay(1);
      }
        }  
    //*************************************************************
//MODO 4: MOTOR RETORNA 600 pasos
//*************************************************************
int modo4 = digitalRead(PULSADOR_D);
  if(modo4==HIGH) {
   PULSADOR_D_pressed  = 1;
  } else if(modo4==LOW && PULSADOR_D_pressed ==1) {
   PULSADOR_D_pressed  = 0;
    
    digitalWrite(enable, HIGH); 
    delay(200);
    digitalWrite(enable, LOW);
    delay(200);
    
    digitalWrite(DIR, LOW);     // giro en sentido opuesto
    for(int i = 0; i < 600; i++){  //600 PASOS 
    digitalWrite(STEP, HIGH); 
    delay(1);
    digitalWrite(STEP, LOW);
    delay(1);
      }
        }
    }
 
    
 
 
        
