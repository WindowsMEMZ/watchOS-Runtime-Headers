//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEIKEv2EncryptionProtocol_h
#define NEIKEv2EncryptionProtocol_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface NEIKEv2EncryptionProtocol : NSObject<NSCopying> {
  /* instance variables */
  BOOL _is256Bit;
  unsigned long long _wireType;
}

/* instance methods */
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithEncryptionType:(unsigned long long)type;
@end

#endif /* NEIKEv2EncryptionProtocol_h */
