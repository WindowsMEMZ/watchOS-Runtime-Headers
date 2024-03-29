//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSInlineData_h
#define _NSInlineData_h
@import Foundation;

#include "NSData.h"

@interface _NSInlineData : NSData {
  /* instance variables */
  unsigned short _length;
}

/* class methods */
+ (id)_allocWithExtraBytes:(unsigned long long)bytes;

/* instance methods */
- (unsigned long long)length;
- (const void *)bytes;
- (BOOL)_isCompact;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithBytes:(const void *)bytes length:(unsigned long long)length;
- (id)initWithCoder:(id)coder;
- (id)_createDispatchData;
- (BOOL)_providesConcreteBacking;
@end

#endif /* _NSInlineData_h */
