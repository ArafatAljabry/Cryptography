//
// Created by Arafat Arif Omar Al-Jabry on 02/11/2026.
//

#ifndef CRYPTOGRAPHY_X25519_H
#define CRYPTOGRAPHY_X25519_H

#define STANDARD_BASEPOINT 9
class x25519 {

    constexpr int p = 7;
public:
    int generatePublicKey(int privateKey){}


    int add(int a, int b ){return a + b % p;}
    int multiply(int a, int b ){return a * b % p;}
    int square(int a ){return multiply(a, a) % p;}
};


#endif //CRYPTOGRAPHY_X25519_H
