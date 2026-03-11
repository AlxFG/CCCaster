#pragma once

#include <cstdint>


namespace DllFrameRate
{

extern double desiredFps;

extern double actualFps;

extern bool isEnabled;

void enable();

void limitFPS();

void mango_limit(bool is_early);

}

extern "C" __attribute__((visibility("default"))) void setDesiredFPS(double desiredFps_);
