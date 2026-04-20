/**
 **************************************************
 *
 * @file        Relay.h
 * @brief       Header file for simple relay board with easyC comunication
 *
 *
 *
 * @authors     @ soldered.com @Robert Peric
 ***************************************************/

#ifndef __RELAY_SOLDERED__
#define __RELAY_SOLDERED__

#include "Arduino.h"
#include "libs/Generic-easyC/easyC.hpp"

/**
 * Relay chanels
 */
#define CHANNEL1 0
#define CHANNEL2 1
#define CHANNEL3 2
#define CHANNEL4 8


class CH_Relay : public EasyC
{
  public:
    CH_Relay(int _pin1, int _pin2 = -1, int _pin3 = -1, int _pin4 = -1);
    CH_Relay();
    void relayControl(int channel, int mode);
    int getChannelState(int channel);

  protected:
    void initializeNative();

  private:
    int pin1, pin2, pin3, pin4;
    void setChannelState(int channel, int mode);
    int channelState[4] = {0,0,0,0};
};

#endif
