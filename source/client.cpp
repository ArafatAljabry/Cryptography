//
// Created by Arafat Arif Omar Al-Jabry on 02/11/2026.
//

#include "../header/client.h"

client::client(double curvePoint) {
    publicKey = b * secretKey;
}

void client::createAuthKey(double otherPublickey) {
    sharedKey = otherPublickey * secretKey;
}
