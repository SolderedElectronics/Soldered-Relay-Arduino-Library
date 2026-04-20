/**
 **************************************************
 *
 * @file        RelayControl4CHQwiic.ino
 * @brief       Relay control example to show how to control 4 channel relay using Qwiic comunication
 *
 *              Product: solde.red/333216
 *
 * @authors     Karlo Leksic for soldered.com
 ***************************************************/

// Include our CH_Relay library
#include "Relays-SOLDERED.h"

#define RELAY_ADDRESS 0x30

CH_Relay Relay;

void setup()
{
    Relay.begin(RELAY_ADDRESS); // Set address on relay hardware switch using provided addresses and here (0x30 - 0x37)
                                // If there are more sensors/breakout boards are connected with same address,
                                // it is needed to change address in order to have normal I2C communication.
                                // Every end device should have unique address on same bus
}

void loop()
{
    // Turn on relay 1
    Relay.relayControl(CHANNEL1, HIGH);
    Serial.println("Current configured state of Channel 1 is: "+String(Relay.getChannelState(CHANNEL1)));
    delay(1500);

    // Turn off relay 1
    Relay.relayControl(CHANNEL1, LOW);
    Serial.println("Current configured state of Channel 1 is: "+String(Relay.getChannelState(CHANNEL1)));
    delay(1500);

    // Turn on relay 2
    Relay.relayControl(CHANNEL2, HIGH);
    Serial.println("Current configured state of Channel 2 is: "+String(Relay.getChannelState(CHANNEL2)));
    delay(1500);

    // Turn off relay 2
    Relay.relayControl(CHANNEL2, LOW);
    Serial.println("Current configured state of Channel 2 is: "+String(Relay.getChannelState(CHANNEL2)));
    delay(1500);

    // Turn on relay 3
    Relay.relayControl(CHANNEL3, HIGH);
    Serial.println("Current configured state of Channel 3 is: "+String(Relay.getChannelState(CHANNEL3)));
    delay(1500);

    // Turn off relay 3
    Relay.relayControl(CHANNEL3, LOW);
    Serial.println("Current configured state of Channel 3 is: "+String(Relay.getChannelState(CHANNEL3)));
    delay(1500);

    // Turn on relay 4
    Relay.relayControl(CHANNEL4, HIGH);
    Serial.println("Current configured state of Channel 4 is: "+String(Relay.getChannelState(CHANNEL4)));
    delay(1500);

    // Turn off relay 4
    Relay.relayControl(CHANNEL4, LOW);
    Serial.println("Current configured state of Channel 4 is: "+String(Relay.getChannelState(CHANNEL4)));
    delay(1500);
}
