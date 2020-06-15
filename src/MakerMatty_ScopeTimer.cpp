#include "MakerMatty_ScopeTimer.h"

ScopeTimer::ScopeTimer(const char* label, HardwareSerial* serial)
    : label(label)
    , serial(serial)
    , start(esp_timer_get_time())
{
}

ScopeTimer::~ScopeTimer()
{
    int64_t duration_us = esp_timer_get_time() - start;
    int64_t duration_ms = duration_us / (int64_t)1000;
    serial->printf("ScopeTimer %s took: %" PRId64 " ms (%" PRId64 " us)\n", label, duration_ms, duration_us);
}
