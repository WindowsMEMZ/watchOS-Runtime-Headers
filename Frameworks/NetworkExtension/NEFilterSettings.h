//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEFilterSettings_h
#define NEFilterSettings_h
@import Foundation;

#include "NEConfigurationValidating-Protocol.h"
#include "NEPrettyDescription-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface NEFilterSettings : NSObject<NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (readonly, copy) NSArray *rules;
@property (readonly) long long defaultAction;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRules:(id)rules defaultAction:(long long)action;
- (BOOL)checkValidityAndCollectErrors:(id)errors;
- (id)descriptionWithIndent:(int)indent options:(unsigned long long)options;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NEFilterSettings_h */
