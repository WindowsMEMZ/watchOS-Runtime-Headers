//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICursorAccessory_h
#define _UICursorAccessory_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface _UICursorAccessory : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (nonatomic) double preferredWidth;
@property (nonatomic) BOOL interactive;
@property (nonatomic) BOOL large;
@property (nonatomic) unsigned long long style;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (id)descriptionBuilder;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)_inputModeCursorAccessory;
- (id)_dictationCursorAccessory;
- (id)_modifierKeyCursorAccessory;
- (id)_deleteCursorAccessory;
- (BOOL)isInteractive;
- (BOOL)isLarge;
@end

#endif /* _UICursorAccessory_h */
