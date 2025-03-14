#include "UDP.h"
#include "NetworkInterface.h"
#include "ProvidedFunctions.h"
#include "InputOutput.h"
#include <iostream>
#include <cmath>
#include <cstring>

int hexBinToInt(std::string bits) {

    int result = bitToInt(bits[0])*pow(2,15) + bitToInt(bits[1])*pow(2,14) + bitToInt(bits[2])*pow(2,13) + bitToInt(bits[3])*pow(2,12) + bitToInt(bits[4])*pow(2,11) 
            + bitToInt(bits[5])*pow(2,10) + bitToInt(bits[6])*pow(2,9) + bitToInt(bits[7])*pow(2,8) + bitToInt(bits[8])*pow(2,7) + bitToInt(bits[9])*pow(2,6)
            + bitToInt(bits[10])*pow(2,5) + bitToInt(bits[11])*pow(2,4) + bitToInt(bits[12])*pow(2,3) + bitToInt(bits[13])*pow(2,2) + bitToInt(bits[14])*pow(2,1)
            + bitToInt(bits[15])*pow(2,0);
    
    return result;
}

// Function prototype
std::string extractSourcePortBin(std::string UDPPacket) {
    return UDPPacket.substr(0,16);
};

std::string extractDestinationPortBin(std::string UDPPacket){
    //extract destination port
    return UDPPacket.substr(16, 16);
}

std::string extractLengthBin(std::string UDPPacket){
    //extract length
    return UDPPacket.substr(32, 16);
}

std::string extractCheckSumBin(std::string UDPPacket){
    //extract checksum
    return UDPPacket.substr(48, 16);
}

std::string extractDataBin(std::string UDPPacket){
    //extract data
    return UDPPacket.substr(64);
}

int extractSourcePortInt(std::string UDPPacket){
    //extract source port
    return hexBinToInt(extractSourcePortBin(UDPPacket));

}

int extractDestinationPortInt(std::string UDPPacket){
    //exract destination port
    return hexBinToInt(extractDestinationPortBin(UDPPacket));
}

int extractLengthInt(std::string UDPPacket){
    //extract length
    return hexBinToInt(extractLengthBin(UDPPacket));
}

int extractCheckSumInt(std::string UDPPacket){
    //extract check sum
    return hexBinToInt(extractCheckSumBin(UDPPacket));
}

std::string extractDataStr(std::string UDPPacket){
    std::string dataBin = extractDataBin(UDPPacket);
    return binToString(dataBin, 5);
}                                                                                                                     
