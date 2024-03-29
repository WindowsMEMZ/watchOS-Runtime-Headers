//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEIKEv2IdentifierPayload_h
#define NEIKEv2IdentifierPayload_h
@import Foundation;

#include "NEIKEv2Payload.h"
#include "NEIKEv2IKESA.h"
#include "NEIKEv2Identifier.h"

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload {
  /* instance variables */
  NEIKEv2Identifier *_identifier;
  NEIKEv2IKESA *_ikeSA;
}

/* class methods */
+ (id)copyTypeDescription;

/* instance methods */
- (id)descriptionWithIndent:(int)indent options:(unsigned long long)options;
- (id)description;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;
@end

#endif /* NEIKEv2IdentifierPayload_h */
