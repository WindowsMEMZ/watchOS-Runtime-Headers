//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNValueType_h
#define LNValueType_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface LNValueType : NSObject<NSSecureCoding, NSCopying>
/* class methods */
+ (id)objectClassesForCoding;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_init;
- (BOOL)objectIsMemberOfType:(id)type;
- (Class)objectClass;
- (void)enumerateValuesOfValueType:(id)type value:(id)value block:(id /* block */)block;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* LNValueType_h */
