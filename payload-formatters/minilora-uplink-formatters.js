/*******************************************************************************
 *
 *  File:         minilora-uplink-formatters.js
 * 
 *  Function:     minilora uplink payload formatter JavaScript function(s).
 * 
 *  Author:       Adam Karacsony
 * 
 *  Description:  These function(s) are for use with The Things Network V3. 
 *                 
 ******************************************************************************/

function decodeUplink(input) {
    var data = {};
    if (input.fPort == 1 && input.bytes.length == 4) {
      data.vcc= ((input.bytes[0]<<8 | input.bytes[1]) / 1000);
      data.temp = ((input.bytes[2]<<24>>16 | input.bytes[3]) / 100);
    }
    return {
    data: data,
    warnings: [],
    errors: []
    };
    }