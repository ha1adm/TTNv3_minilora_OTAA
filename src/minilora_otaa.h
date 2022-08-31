/*******************************************************************************
 *
 *  File:         minilora-node.h
 * 
 *  Function:     minilora-node main header file.
 * 
 *  Copyright:    Copyright (c) 2021 Adam Karacsony
 *                Portions Copyright (c) 2021 Leonel Lopes Parente
 *                Portions Copyright (c) 2018 Terry Moore, MCCI
 *
 *                Permission is hereby granted, free of charge, to anyone 
 *                obtaining a copy of this document and accompanying files to do, 
 *                whatever they want with them without any restriction, including,
 *                but not limited to, copying, modification and redistribution.
 *                The above copyright notice and this permission notice shall be 
 *                included in all copies or substantial portions of the Software.
 * 
 *                THE SOFTWARE IS PROVIDED "AS IS", WITHOUT ANY WARRANTY.
 * 
 *  License:      MIT License. See accompanying LICENSE file.
 * 
 *  Author:       Adam Karacsony
 *                 
 ******************************************************************************/

#pragma once

#include <Arduino.h>
#include <lmic.h>
#include <hal/hal.h>
#include <SPI.h>
#include <Wire.h> 
#include "DS18B20.h"
#include "LowPower.h"
#include "../keyfiles/lorawan-keys.h"

// Forward declarations
static void do_send(osjob_t* j);