#include <Blynk.h>
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


//you have to enter your token got to your mail
char auth[] = "ncpM9I-qFAFTesgSgdlQnQi6fy9SakKL";

// Your WiFi credentials.
// Set password to for open networks.
char ssid[] = "Dialog 4G";
char pass[] = "F8F7NHJJ2UG";

void setup()
{
  // Debug console
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();

  
if ( ! Blynk.connected() )
{

Blynk.notify("success");

}
  
}
