#ifndef NFC_H
#define NFC_H

#include <Arduino.h>

typedef enum{
    IDLE,
    READING,
    READ_SUCCESS,
    READ_ERROR,
    WRITING,
    WRITE_SUCCESS,
    WRITE_ERROR
} nfcReaderStateType;

void startNfc();
void scanRfidTask(void * parameter);
void startWriteJsonToTag(const char* payload);

extern TaskHandle_t RfidReaderTask;
extern String nfcJsonData;
extern String spoolId;
extern volatile nfcReaderStateType nfcReaderState;
extern volatile bool pauseBambuMqttTask;



#endif