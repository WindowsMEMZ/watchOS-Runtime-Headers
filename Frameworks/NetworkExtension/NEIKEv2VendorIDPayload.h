//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEIKEv2VendorIDPayload_h
#define NEIKEv2VendorIDPayload_h
@import Foundation;

#include "NEIKEv2Payload.h"

@class NSData;

@interface NEIKEv2VendorIDPayload : NEIKEv2Payload {
  /* instance variables */
  NSData *_vendorData;
}

/* class methods */
+ (id)copyTypeDescription;

/* instance methods */
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)indent options:(unsigned long long)options;
- (id)description;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;
@end

#endif /* NEIKEv2VendorIDPayload_h */
