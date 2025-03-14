#include <string>
#include <iostream>
#include <cmath>
#include <cstring>

#include "UDP.h"
#include "NetworkInterface.h"
#include "ProvidedFunctions.h"
#include "InputOutput.h"

// communication with user

std::string dataSourceRequest = "Please enter the source port: ";

std::string dataDestRequest = "Please enter the destination port: ";

std::string dataDataRequest = "Please enter the message: ";

std::string askUserForSourcePort() {
    int sourcePort = askForIntInput(dataSourceRequest);
    return intToBin(sourcePort, 16);
}

std::string askUserForDestinationPort() {
    int destinationPort = askForIntInput(dataDestRequest);
    return intToBin(destinationPort, 16);
}

std::string askUserForData() {
    std::string data = askForStringInput(dataDataRequest);
    return stringToBin(data, 5);
}

std::string formUDPFromUserInput() {
    std::string sourcePortBin = askUserForSourcePort();
    std::string destinationPortBin = askUserForDestinationPort();
    std::string message = askForStringInput(dataDataRequest);
    std::string data = stringToBin(message, 5);

    int dataLength = message.length() * 5;
    std::string lengthBinary = intToBin(dataLength, 16);

    std::string checksum = "1111111100000000";
    std::string udpPacket = sourcePortBin + destinationPortBin + lengthBinary + checksum + data;
    return udpPacket;
}

void prettyPrint(std::string UDPPacket) {
    std::string sourcePort = UDPPacket.substr(0, 16);
    std::string destinationPort = UDPPacket.substr(16, 16);
    std::string length = UDPPacket.substr(32, 16);
    std::string checksum = UDPPacket.substr(48, 16);
    std::string message = UDPPacket.substr(64);

    std::cout << "Source Port: " << sourcePort << std::endl;
    std::cout << "Destination Port: " << destinationPort << std::endl;
    std::cout << "Length: " << length << std::endl;
    std::cout << "Checksum: " << checksum << std::endl;
    std::cout << "Message: " << message << std::endl;
}

void packetPrint(std::string UDPPacket) {
    std::string sourcePortBin = UDPPacket.substr(0, 16);
    std::string destinationPortBin = UDPPacket.substr(16, 16);
    std::string lengthBin = UDPPacket.substr(32, 16);
    std::string checksumBin = UDPPacket.substr(48, 16);
    std::string messageBin = UDPPacket.substr(48 + 16);

    int sourcePortInt = hexBinToInt(sourcePortBin);
    int destinationPortInt = hexBinToInt(destinationPortBin);
    int lengthInt = hexBinToInt(lengthBin);
    int checksumInt = hexBinToInt(checksumBin);
    std::string messageStr = binToString(messageBin, 5);

    std::cout << "Source Port: " << sourcePortInt << std::endl;
    std::cout << "Destination Port: " << destinationPortInt << std::endl;
    std::cout << "Length: " << lengthInt << std::endl;
    std::cout << "Checksum: " << checksumInt << std::endl;
    std::cout << "Message: " << messageStr << std::endl;
}
