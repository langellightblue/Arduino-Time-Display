/* La broche 13 est la LED interne */

// Broche LED

int LedInternal = 13;
int LedA = 17;
int LedB = 18;
int LedC = 29;
int LedD = 31;
int LedE = 33;
int LedF = 35;
int LedG = 37;
int LedH = 47;
int LedI = 48;

// Broche DIGIT

int Digit1 = 53;
int Digit2 = 52;
int Digit3 = 51;
int Digit4 = 50;
int Digit5 = 49;

// Nombres

int Nb1 = 10;
int Nb2 = 10;
int Nb3 = 10;
int Nb4 = 10;

int NoByteNb1 = 0;
int NoByteNb2 = 0;
int NoByteNb3 = 0;
int NoByteNb4 = 0;


void setup() {                

    Serial.begin(9600);
    establishContact();
  // initialisation de la broche en sortie
  pinMode(LedA, OUTPUT);
  pinMode(LedB, OUTPUT);
  pinMode(LedC, OUTPUT);
  pinMode(LedD, OUTPUT);
  pinMode(LedE, OUTPUT);
  pinMode(LedF, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(LedH, OUTPUT);
  pinMode(LedI, OUTPUT);
  pinMode(Digit1, OUTPUT);
  pinMode(Digit2, OUTPUT);
  pinMode(Digit3, OUTPUT);
  pinMode(Digit4, OUTPUT);
  pinMode(Digit5, OUTPUT);
  
  digitalWrite(Digit1, LOW);
  digitalWrite(Digit2, LOW);
  digitalWrite(Digit3, LOW);
  digitalWrite(Digit4, LOW);
  digitalWrite(Digit5, LOW);
  digitalWrite(LedA, HIGH);   // LED a Allumee
  digitalWrite(LedB, HIGH);  // LED b Allumee
  digitalWrite(LedC, HIGH); // LED c Allumee
  digitalWrite(LedD, HIGH); // LED d Allumee
  digitalWrite(LedE, HIGH); // LED e Allumee
  digitalWrite(LedF, HIGH); // LED f Allumee
  digitalWrite(LedG, HIGH); // LED g Allumee
  digitalWrite(LedH, HIGH); // Led h Allumee
  digitalWrite(LedI, HIGH); // LED i Allumee
  
  delay(5);
}


void loop() {
  
  if (Serial.available() > 0) {
    NoByteNb1 = Serial.read();
      //Serial.println(NoByteNb1);
      Serial.println("Nombre 1 :");
      if (NoByteNb1 == 49){
        Nb1 = 1;
       }
       else if (NoByteNb1 == 50) {
         Nb1 = 2;
        }
       else if (NoByteNb1 == 51) {
         Nb1 = 3;
        }
       else if (NoByteNb1 == 52) {
         Nb1 = 4;
        }
       else if (NoByteNb1 == 53) {
         Nb1 = 5;
        }
       else if (NoByteNb1 == 54) {
         Nb1 = 6;
        }
       else if (NoByteNb1 == 55) {
         Nb1 = 7;
        }
       else if (NoByteNb1 == 56) {
         Nb1 = 8;
        }
       else if (NoByteNb1 == 57) {
         Nb1 = 9;
        }
       else {
         Nb1 = 10;
        }
      //Nb1 = byte(NoByteNb1);
      Serial.println(Nb1);
      delay(300);
      Serial.println("Nombre 2 :");
      NoByteNb2 = Serial.read();
      if (NoByteNb2 == 49){
        Nb2 = 1;
       }
       else if (NoByteNb2 == 50) {
         Nb2 = 2;
        }
       else if (NoByteNb2 == 51) {
         Nb2 = 3;
        }
       else if (NoByteNb2 == 52) {
         Nb2 = 4;
        }
       else if (NoByteNb2 == 53) {
         Nb2 = 5;
        }
       else if (NoByteNb2 == 54) {
         Nb2 = 6;
        }
       else if (NoByteNb2 == 55) {
         Nb2 = 7;
        }
       else if (NoByteNb2 == 56) {
         Nb2 = 8;
        }
       else if (NoByteNb2 == 57) {
         Nb2 = 9;
        }
       else {
         Nb2 = 10;
        }
        Serial.println(Nb2);
        delay(300);
      Serial.println("Nombre 3 :");
      NoByteNb3 = Serial.read();
      if (NoByteNb3 == 49){
        Nb3 = 1;
       }
       else if (NoByteNb3 == 50) {
         Nb3 = 2;
        }
       else if (NoByteNb3 == 51) {
         Nb3 = 3;
        }
       else if (NoByteNb3 == 52) {
         Nb3 = 4;
        }
       else if (NoByteNb3 == 53) {
         Nb3 = 5;
        }
       else if (NoByteNb3 == 54) {
         Nb3 = 6;
        }
       else if (NoByteNb3 == 55) {
         Nb3 = 7;
        }
       else if (NoByteNb3 == 56) {
         Nb3 = 8;
        }
       else if (NoByteNb3 == 57) {
         Nb3 = 9;
        }
       else {
         Nb3 = 10;
        }
        Serial.println(Nb3);
        delay(300);
      Serial.println("Nombre 4 :");
      NoByteNb4 = Serial.read();
      if (NoByteNb4 == 49){
        Nb4 = 1;
       }
       else if (NoByteNb4 == 50) {
         Nb4 = 2;
        }
       else if (NoByteNb4 == 51) {
         Nb4 = 3;
        }
       else if (NoByteNb4 == 52) {
         Nb4 = 4;
        }
       else if (NoByteNb4 == 53) {
         Nb4 = 5;
        }
       else if (NoByteNb4 == 54) {
         Nb4 = 6;
        }
       else if (NoByteNb4 == 55) {
         Nb4 = 7;
        }
       else if (NoByteNb4 == 56) {
         Nb4 = 8;
        }
       else if (NoByteNb4 == 57) {
         Nb4 = 9;
        }
       else {
         Nb4 = 10;
        }
        Serial.println(Nb4);
      
      }
  
  
  
  digitalWrite(Digit1, HIGH);
  digitalWrite(Digit2, LOW);
  digitalWrite(Digit3, HIGH);
  digitalWrite(Digit4, HIGH);
  digitalWrite(Digit5, HIGH);
  
  digitalWrite(LedH, LOW);
  digitalWrite(LedI, LOW);
  
  // DIGIT 2
  if (Nb1 == 0) {
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 0
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, LOW);
    }
  else if (Nb1 == 1) {
    
      digitalWrite(LedA, LOW);   // LED a Eteinte
      digitalWrite(LedB, HIGH);  // LED b Allum√©e
      digitalWrite(LedC, HIGH); // LED c Allum√©e
      digitalWrite(LedD, LOW); // LED d Eteinte POUR UN 1
      digitalWrite(LedE, LOW); // LED e Eteinte
      digitalWrite(LedF, LOW); // LED f Eteinte
      digitalWrite(LedG, LOW); // LED g Eteinte
      digitalWrite(LedH, LOW);  //LED h Eteinte
      digitalWrite(LedI, LOW); //LED i Eteinte
   }
   
    else if (Nb1 == 2) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH); // POUR UN 2
      digitalWrite(LedC, LOW);
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb1 == 3) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH); // POUR UN 3
      digitalWrite(LedC, HIGH);
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb1 == 4) {
    
      digitalWrite(LedA, LOW);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 4
      digitalWrite(LedD, LOW);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb1 == 5) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, LOW);
      digitalWrite(LedC, HIGH); // POUR UN 5
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb1 == 6) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, LOW);
      digitalWrite(LedC, HIGH); // POUR UN 6
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb1 == 7) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 7
      digitalWrite(LedD, LOW);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, LOW);
    }
    
    else if (Nb1 == 8) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 8
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb1 == 9) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 9
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 0
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, LOW);
  }
     delay(1);
  
  // DIGIT 3
  digitalWrite(Digit2, HIGH);
  digitalWrite(Digit3, LOW);
  
  if (Nb2 == 0) {
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 0
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, LOW);
    }
  else if (Nb2 == 1) {
    
      digitalWrite(LedA, LOW);   // LED a Eteinte
      digitalWrite(LedB, HIGH);  // LED b Allum√©e
      digitalWrite(LedC, HIGH); // LED c Allum√©e
      digitalWrite(LedD, LOW); // LED d Eteinte POUR UN 1
      digitalWrite(LedE, LOW); // LED e Eteinte
      digitalWrite(LedF, LOW); // LED f Eteinte
      digitalWrite(LedG, LOW); // LED g Eteinte
      digitalWrite(LedH, LOW);  //LED h Eteinte
      digitalWrite(LedI, LOW); //LED i Eteinte
   }
   
    else if (Nb2 == 2) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH); // POUR UN 2
      digitalWrite(LedC, LOW);
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb2 == 3) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH); // POUR UN 3
      digitalWrite(LedC, HIGH);
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb2 == 4) {
    
      digitalWrite(LedA, LOW);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 4
      digitalWrite(LedD, LOW);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb2 == 5) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, LOW);
      digitalWrite(LedC, HIGH); // POUR UN 5
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb2 == 6) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, LOW);
      digitalWrite(LedC, HIGH); // POUR UN 6
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb2 == 7) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 7
      digitalWrite(LedD, LOW);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, LOW);
    }
    
    else if (Nb2 == 8) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 8
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb2 == 9) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 9
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 0
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, LOW);
  }
     delay(1);
  
  // DIGIT 4
     digitalWrite(Digit3, HIGH);
     digitalWrite(Digit4, LOW);
     
     if (Nb3 == 0) {
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 0
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, LOW);
    }
  else if (Nb3 == 1) {
    
      digitalWrite(LedA, LOW);   // LED a Eteinte
      digitalWrite(LedB, HIGH);  // LED b Allum√©e
      digitalWrite(LedC, HIGH); // LED c Allum√©e
      digitalWrite(LedD, LOW); // LED d Eteinte POUR UN 1
      digitalWrite(LedE, LOW); // LED e Eteinte
      digitalWrite(LedF, LOW); // LED f Eteinte
      digitalWrite(LedG, LOW); // LED g Eteinte
      digitalWrite(LedH, LOW);  //LED h Eteinte
      digitalWrite(LedI, LOW); //LED i Eteinte
   }
   
    else if (Nb3 == 2) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH); // POUR UN 2
      digitalWrite(LedC, LOW);
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb3 == 3) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH); // POUR UN 3
      digitalWrite(LedC, HIGH);
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb3 == 4) {
    
      digitalWrite(LedA, LOW);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 4
      digitalWrite(LedD, LOW);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb3 == 5) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, LOW);
      digitalWrite(LedC, HIGH); // POUR UN 5
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb3 == 6) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, LOW);
      digitalWrite(LedC, HIGH); // POUR UN 6
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb3 == 7) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 7
      digitalWrite(LedD, LOW);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, LOW);
    }
    
    else if (Nb3 == 8) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 8
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb3 == 9) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 9
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 0
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, LOW);
  }
     delay(1);
     
     // DIGIT 5
     
     digitalWrite(Digit4, HIGH);
     digitalWrite(Digit5, LOW);
  
     if (Nb4 == 0) {
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 0
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, LOW);
    }
  else if (Nb4 == 1) {
    
      digitalWrite(LedA, LOW);   // LED a Eteinte
      digitalWrite(LedB, HIGH);  // LED b Allum√©e
      digitalWrite(LedC, HIGH); // LED c Allum√©e
      digitalWrite(LedD, LOW); // LED d Eteinte POUR UN 1
      digitalWrite(LedE, LOW); // LED e Eteinte
      digitalWrite(LedF, LOW); // LED f Eteinte
      digitalWrite(LedG, LOW); // LED g Eteinte
      digitalWrite(LedH, LOW);  //LED h Eteinte
      digitalWrite(LedI, LOW); //LED i Eteinte
   }
   
    else if (Nb4 == 2) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH); // POUR UN 2
      digitalWrite(LedC, LOW);
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb4 == 3) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH); // POUR UN 3
      digitalWrite(LedC, HIGH);
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb4 == 4) {
    
      digitalWrite(LedA, LOW);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 4
      digitalWrite(LedD, LOW);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb4 == 5) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, LOW);
      digitalWrite(LedC, HIGH); // POUR UN 5
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb4 == 6) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, LOW);
      digitalWrite(LedC, HIGH); // POUR UN 6
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb4 == 7) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 7
      digitalWrite(LedD, LOW);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, LOW);
      digitalWrite(LedG, LOW);
    }
    
    else if (Nb4 == 8) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 8
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else if (Nb4 == 9) {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 9
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, LOW);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, HIGH);
    }
    
    else {
    
      digitalWrite(LedA, HIGH);
      digitalWrite(LedB, HIGH);
      digitalWrite(LedC, HIGH); // POUR UN 0
      digitalWrite(LedD, HIGH);
      digitalWrite(LedE, HIGH);
      digitalWrite(LedF, HIGH);
      digitalWrite(LedG, LOW);
  }
  
     delay(1);
    
}

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.println("Waiting for you...");   // send an initial string
    //Serial.println("Nombre n1\n");
    delay(300);
    }
  }

