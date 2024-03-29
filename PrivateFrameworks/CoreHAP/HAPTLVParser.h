//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPTLVParser_h
#define HAPTLVParser_h
@import Foundation;

#include "HMFObject.h"

@class NSData;

@interface HAPTLVParser : HMFObject {
  /* instance variables */
  NSData *_tlvData;
}

/* class methods */
+ (id)parserWithData:(id)data;

/* instance methods */
- (id)initWithData:(id)data;
- (id)parseResponseForData:(unsigned long long)data;
- (id)parseResponseForNumber:(unsigned long long)number;
- (id)parseResponseForUInt8:(unsigned long long)uint8;
- (id)parseResponseForUInt16:(unsigned long long)uint16;
- (id)parseResponseForString:(unsigned long long)string;
- (id)parseResponseForUUID:(unsigned long long)uuid;
- (id)parseResponseForArray:(unsigned long long)array;
@end

#endif /* HAPTLVParser_h */
