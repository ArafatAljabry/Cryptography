//
// Created by Arafat Arif Omar Al-Jabry on 02/11/2026.
//

#ifndef CRYPTOGRAPHY_CLIENT_H
#define CRYPTOGRAPHY_CLIENT_H


class client {


     int secretKey;

public:
     long publicKey;
     long sharedKey;
     double basePoint;

    client(double curvePoint);

    void createAuthKey(double otherPublickey);
};
#endif //CRYPTOGRAPHY_CLIENT_H
