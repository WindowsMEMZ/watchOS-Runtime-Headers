//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUFieldValue_h
#define VMUFieldValue_h
@import Foundation;

#include "VMUFieldInfo.h"

@interface VMUFieldValue : NSObject

@property (readonly, nonatomic) VMUFieldInfo *field;
@property (readonly, nonatomic) unsigned long long value;

/* instance methods */
- (id)initWithField:(id)field value:(unsigned long long)value;
@end

#endif /* VMUFieldValue_h */
