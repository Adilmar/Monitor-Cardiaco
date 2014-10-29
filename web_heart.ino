 const int analogInPin = A0;  //  pino de entrada analógica que o potenciômetro é ligado
const int analogOutPin = 11; //  pino de saída analógica que o LED está ligado 
const int infra = 12; //  pino de saída analógica que o LED está ligado 

#include <GraphSeries.h>

GraphSeries g_aGraphs[] = {"BATIMENTOS"};


int sensorValue = 0;        //  valor de leitura do potenciômetro
int outputValue = 0;        //  valor de saída para o PWM (saída analógica)


void setup() {
  //  inicializa a comunicação serial a 9600 bps: 
  pinMode(infra, OUTPUT);
  Serial.begin(9600); 
}


void loop() {
  //  ler o analógico em valor:
  digitalWrite(infra, HIGH);
  
  sensorValue = analogRead(analogInPin);            
  //  mapeá-lo para o alcance da saída analógica:
  outputValue = map(sensorValue, 0, 1023, 0, 255);  
  //  mudar o analógico fora valor: 
  analogWrite(analogOutPin, outputValue);           

int nADCInput;

 
    Serial.println(analogRead(nADCInput));
    
    delay(300);



   // espera 10 milissegundos antes do próximo ciclo 
  // para o conversor analógico-digital para resolver 
  // após a última leitura: 
 



  
}


