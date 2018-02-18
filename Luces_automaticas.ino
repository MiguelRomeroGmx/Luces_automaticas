
const int interruptor = 13;
const int pinSensor = 3;
const int pinfoco = 4;
const int pinfoco2 = 5;
int lectura;
int estado;
int modo;
int activar;
int desactivar;

void setup() {
  Serial.begin(9600);
  pinMode(interruptor, INPUT);
  pinMode(pinSensor, INPUT);
  pinMode(pinfoco, OUTPUT);
  digitalWrite(pinfoco, LOW);
  //lectura = 0;
}

void loop() {

modo = digitalRead(interruptor);

if(modo == 0){
  
  estado = digitalRead(pinSensor);
      if (estado == HIGH) {
          digitalWrite(pinfoco, HIGH);
          lectura = 0;
          delay(200);
      }
     else {
          lectura = lectura + 1;
          delay(200);
              if (lectura >= 50){
                  digitalWrite(pinfoco, LOW);
                  lectura = 0;
                }

          Serial.print("Lectura:");
          Serial.println(lectura);
          delay(200);
      
          }
      }

    else{

        delay(100);
        activar = activar + 1;
        modo = digitalRead(interruptor);
              if (modo == 1){
                    delay(100);
                    activar = activar + 1;
  
                }

        if (activar == 2) {

            do {
                delay(100);
                
                modo = digitalRead(interruptor);
                if (modo == 1){
                    delay(100);
                    digitalWrite(pinfoco2, HIGH);






            }while (activar == 2);


}




}





}



