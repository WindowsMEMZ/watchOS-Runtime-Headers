//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSKeyValueObjectAndKeyPair_h
#define _NSKeyValueObjectAndKeyPair_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSString.h"

@interface _NSKeyValueObjectAndKeyPair : NSObject<NSCopying> {
  /* instance variables */
  id _object;
  unsigned long long _objectPointer;
  Class _objectClass;
  void * _context;
  NSString *_key;
}

/* instance methods */
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* _NSKeyValueObjectAndKeyPair_h */
