int merah1   =4;
int merah2  =5;
int merah3  =10;
int merah4  =13;
int kuning1 =3;
int kuning2 =6;
int kuning3 =9;
int kuning4 =12;
int hijau1   =2;
int hijau2  =7;
int hijau3  =8;
int hijau4  =11;

void setup() {
pinMode(merah1, OUTPUT);
pinMode(merah2,OUTPUT);
pinMode(merah3,OUTPUT);
pinMode(merah4,OUTPUT);
pinMode(kuning1,OUTPUT);
pinMode(kuning2,OUTPUT);
pinMode(kuning3,OUTPUT);
pinMode(kuning4,OUTPUT);
pinMode(hijau1,OUTPUT);
pinMode(hijau2,OUTPUT);
pinMode(hijau3,OUTPUT);
pinMode(hijau4,OUTPUT);

}

void loop() {
 //1

digitalWrite(hijau1,1);
digitalWrite(merah1,0); 
digitalWrite(merah2,1);
digitalWrite(merah3,1);
digitalWrite(merah4,1);
  
delay(5000);

digitalWrite(hijau1,0);
digitalWrite(kuning1,1);
delay(2000);
digitalWrite(kuning1,0);


//2
digitalWrite(hijau2,1);
digitalWrite(merah1,1); 
digitalWrite(merah2,0);
digitalWrite(merah3,1);
digitalWrite(merah4,1);
delay(5000);

digitalWrite(hijau2,0);
digitalWrite(kuning2,1); 
delay(2000);

digitalWrite(kuning2,0);


//3
digitalWrite(hijau4,1);
digitalWrite(merah1,1); 
digitalWrite(merah2,1);
digitalWrite(merah3,1);
digitalWrite(merah4,0); 
delay(5000);

digitalWrite(hijau4,0);
digitalWrite(kuning4,1); 
delay(2000);

digitalWrite(kuning4,0);

//4
digitalWrite(hijau3,1);
digitalWrite(merah1,1); 
digitalWrite(merah2,1);
digitalWrite(merah3,0);
digitalWrite(merah4,1); 
delay(5000);

digitalWrite(hijau3,0);
digitalWrite(kuning3,1); 
delay(2000);

digitalWrite(kuning3,0);


}
