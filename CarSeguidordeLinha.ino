

void setup()
{



  Serial.begin(9600);
//motor
  pinMode(5, OUTPUT); 
  pinMode(0, OUTPUT);
 
  // Motor 2
  pinMode(4, OUTPUT); // saída B-
  pinMode(2, OUTPUT); // saída B+
}

void loop()
{


  // Move o carrinho para frente

  // Aciona motor 1


analogWrite(5, 512);
digitalWrite(0, HIGH);

// Aciona motor 2 na mesma direção

analogWrite(4, 512);
digitalWrite(2, HIGH);


delay(2000);

  analogWrite(5, 1024);
  digitalWrite(0, HIGH);

  analogWrite(4, 0); 
  delay(2000);
 



digitalWrite(0, HIGH);
analogWrite(5, 255); // 255 é a velocidade máxima

// Aciona motor 2 na mesma direção
digitalWrite(2, HIGH);
analogWrite(4, 255); // 255 é a velocidade máxima

// Aguarda por um tempo (você pode ajustar o tempo conforme necessário)
delay(2000);


// Aguarda por um tempo (você pode ajustar o tempo conforme necessário)

delay(2000);
  // Move o carrinho para a esquerda
  // Aciona motor 1

  analogWrite(5, 0); // Desliga o motor 1

  // Aciona motor 2
  analogWrite(4, 1024);
  digitalWrite(2, HIGH);

  // Aguarda por um tempo (você pode ajustar o tempo conforme necessário)
  delay(2000);


  // Move o carrinho para trás

  // Aciona motor 1
// Move o carrinho para trás

// Aciona motor 1
analogWrite(0, 500);
digitalWrite(5, HIGH);

// Aciona motor 2 na mesma direção
analogWrite(2, 500);
digitalWrite(4, HIGH);

// Aguarda por um tempo (você pode ajustar o tempo conforme necessário)
delay(2000);

// Aguarda por um tempo (você pode ajustar o tempo conforme necessário)

delay(2000);

}
