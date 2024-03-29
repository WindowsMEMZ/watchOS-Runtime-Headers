//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSHIDEventDeferringResolution_h
#define BKSHIDEventDeferringResolution_h
@import Foundation;

#include "BKSHIDEventBaseAttributeSubsetProviding-Protocol.h"
#include "BKSHIDEventDeferringEnvironment.h"
#include "BKSHIDEventDeferringToken.h"
#include "BKSHIDEventDispatchingTarget.h"
#include "BKSHIDEventDisplay.h"
#include "BSDescriptionStreamable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BKSHIDEventDeferringResolution : NSObject<BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding, BKSHIDEventBaseAttributeSubsetProviding>

@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (readonly, nonatomic) BOOL isBuffer;
@property (readonly, nonatomic) BKSHIDEventDispatchingTarget *dispatchingTarget;
@property (readonly, copy, nonatomic) NSString *processDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)build:(id /* block */)build;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)modifiedResolution:(id /* block */)resolution;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (void)appendDescriptionToFormatter:(id)formatter;
@end

#endif /* BKSHIDEventDeferringResolution_h */
