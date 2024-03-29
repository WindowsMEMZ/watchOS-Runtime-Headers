//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStingActionContext_h
#define CSLStingActionContext_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface CSLStingActionContext : NSObject<NSCopying>

@property (retain, nonatomic) NSString *bundleIdentifier;

/* class methods */
+ (id)applicationContextWithBundleIdentifier:(id)identifier;

/* instance methods */
- (BOOL)isActivelySharing;
- (BOOL)hasFinishedSetup;
- (BOOL)isInCall;
- (BOOL)isModalAppActive;
- (BOOL)isDevicePasscodeLocked;
- (BOOL)isInIgnoringStingSystemState;
- (BOOL)replaceAlternateWithNext;
- (BOOL)isInDepthSession;
- (BOOL)isActionNone;
- (BOOL)isAvailableWhileLocked;
- (id)init;
- (id)initWithBundleIdentifier:(id)identifier;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLStingActionContext_h */
