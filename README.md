# MAX6675-NodeMCU
## NodeMCU dengan MAX6675 (adc) Thermocouple tipe-K


Tambahkan pada library max6675
```
#elif defined(ESP8266)
  #include <pgmspace.h>
  #define _delay_ms(ms) delayMicroseconds((ms) * 1000)
#endif
//#include <util/delay.h>
#ifdef __avr__
  #include <util/delay.h>
#endif
```
