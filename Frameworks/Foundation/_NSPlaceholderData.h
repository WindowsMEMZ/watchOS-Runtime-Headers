//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSPlaceholderData_h
#define _NSPlaceholderData_h
@import Foundation;

#include "NSData.h"

@interface _NSPlaceholderData : NSData
/* instance methods */
- (id)init;
- (id)initWithBytes:(void *)bytes length:(unsigned long long)length copy:(BOOL)copy deallocator:(id /* block */)deallocator;
- (id)initWithData:(id)data;
- (void)release;
- (id)retain;
- (unsigned long long)retainCount;
@end

#endif /* _NSPlaceholderData_h */
