void setup(){
Serial.begin(115200);
pinMode(1, OUTPUT); pinMode(2, OUTPUT); pinMode(3, OUTPUT);
Serial.println("happy holidays!");
}

// so i dont need to call redundant digital write calls
void togglesnowflake(int pin){
digitalWrite(pin, HIGH);
delay(2000);
digitalWrite(pin, LOW);
delay(2000);
}

void loop(){
togglesnowflake(1);
togglesnowflake(2);
togglesnowflake(3);
}