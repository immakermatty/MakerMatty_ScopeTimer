/** 
 * Author	: @makermatty (maker.matejsuchanek.cz)
 * Date		: 15-6-2020
 */

#ifndef _MM_SCOPE_TIMER_h
#define _MM_SCOPE_TIMER_h

#include <Arduino.h>

struct ScopeTimer {
    ScopeTimer(const char* label, HardwareSerial* serial = &Serial);
    ~ScopeTimer();

    const char* const label;
    HardwareSerial* const serial;

    const int64_t start;
};

typedef ScopeTimer MakerMatty_ScopeTimer;

#endif