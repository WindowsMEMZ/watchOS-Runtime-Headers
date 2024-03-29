//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRCryptoPairingMessage_h
#define MRCryptoPairingMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@class NSData;

@interface MRCryptoPairingMessage : MRProtocolMessage

@property (readonly, nonatomic) NSData *pairingData;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) BOOL retrying;
@property (readonly, nonatomic) BOOL usingSystemPairing;
@property (readonly, nonatomic) unsigned long long state;

/* instance methods */
- (id)initWithPairingData:(id)data status:(int)status;
- (id)initWithPairingData:(id)data status:(int)status isRetrying:(BOOL)retrying isUsingSystemPairing:(BOOL)pairing state:(unsigned long long)state;
- (BOOL)isRetrying;
- (BOOL)isUsingSystemPairing;
- (unsigned long long)encryptionType;
- (unsigned long long)type;
@end

#endif /* MRCryptoPairingMessage_h */
