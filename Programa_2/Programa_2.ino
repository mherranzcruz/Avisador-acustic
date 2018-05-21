/*****************************************************************
**                                                              **
**                        Títol:                                **
**          Posar nom representatiu del programa                **
**                                                              **
** NOM:Martin Herranz                          Data:21/05/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino

int valLdr0;                 // guardar valor del ldr
int valLdr1;                 // guardar valor del ldr
int valLdr2;                 // guardar valor del ldr  
int freq;                    // freqüència del xiulet

//*****************************SETUP******************************

void setup() {                 //Configura el final de salida

 pinMode(xiulet, OUTPUT);     // definir el pin 9 com una sortida


}





//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa

 valLdr0 = analogRead(ldr0);   // llegir valor ldr
 valLdr1 = analogRead(ldr1);   // llegir valor ldr
 valLdr2 = analogRead(ldr2);   // llegir valor ldr

  freq = map(freq, 0, 1023, 2000, 0);   // mapejar valor de 0-1023 a 2000-10
  
  tone(xiulet, freq, 100);   // xiulet de durada 100ms
  delay(100+100);            // esperar xiulet + silenci


}

//****************************FUNCIONS****************************
