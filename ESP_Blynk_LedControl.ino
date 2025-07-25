// Blynk credentials
#define BLYNK_TEMPLATE_ID "TMPL2xt59OO3B"
#define BLYNK_TEMPLATE_NAME "Led Control"
#define BLYNK_AUTH_TOKEN "XVCV7ER0_TzLUDT0tAw9aaKlSTL0VwAG"

#ifdef ESP32
  #include <WiFi.h>
  #include <BlynkSimpleEsp32.h>
#elif defined(ESP8266)
  #include <ESP8266WiFi.h>
  #include <BlynkSimpleEsp8266.h>
#else
  #error "Unsupported board! Use ESP32 or ESP8266."
#endif

// Replace with your actual WiFi credentials
#define SSID        "2001"
#define PASSWORD    "19821968"

void setup(){
  // Start Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, SSID, PASSWORD);
}

void loop(){
  Blynk.run();
}
