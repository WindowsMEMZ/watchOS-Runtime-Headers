//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEByteParser_h
#define NEByteParser_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSData;

@interface NEByteParser : NSObject<NSCopying> {
  /* instance variables */
  unsigned long long _offset;
  NSData *_data;
  const char * _bytes;
  const char * _cursor;
}

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NEByteParser_h */
