#include <dht.h>

dht DHT; // Cria um objeto da classe dht, para que o sensor saiba que irá ser lido 2 dados
uint32_t timer = 0;
void setup()
{
    Serial.begin(9600); // Inicializa a serial, a captação de dados em 9600 bouds
  }
  void loop()
  {
    if(millis() - timer >= 2000)// executa 1 vez a cada 1 segundos (2000)
    {
    
    DHT.read11(A1); // chama o método de leitura da classe dht,
     //com pino de transmissão ligado no A1

    Serial.print(DHT.humidity);// exibe na serial o valor de umidade
    Serial.println(" %");

    Serial.print(DHT.temperature); // inicia na serial o valor da temperatura
    Serial.println(" Celsius");

    timer = millis(); // atualiza a referencia
    }
    }
