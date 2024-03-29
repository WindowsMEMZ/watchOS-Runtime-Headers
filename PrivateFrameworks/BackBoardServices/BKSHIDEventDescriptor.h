//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSHIDEventDescriptor_h
#define BKSHIDEventDescriptor_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "BSDescriptionStreamable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BKSHIDEventDescriptor : NSObject<BSDescriptionStreamable, NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (readonly, nonatomic) unsigned int hidEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)descriptorForHIDEvent:(struct __IOHIDEvent *)hidevent;
+ (id)descriptorWithEventType:(unsigned int)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)criteria;
- (id)init;
- (id)initWithEventType:(unsigned int)type;
- (BOOL)isEqual:(id)equal;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)appendDescriptionToFormatter:(id)formatter;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)matchesHIDEvent:(struct __IOHIDEvent *)hidevent;
- (BOOL)describes:(id)describes;
@end

#endif /* BKSHIDEventDescriptor_h */
