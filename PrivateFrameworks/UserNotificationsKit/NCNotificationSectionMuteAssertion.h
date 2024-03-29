//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 827.9.0.0.0
//
#ifndef NCNotificationSectionMuteAssertion_h
#define NCNotificationSectionMuteAssertion_h
@import Foundation;

#include "NCNotificationMuteAssertion-Protocol.h"

@class NSString;

@interface NCNotificationSectionMuteAssertion : NSObject<NCNotificationMuteAssertion>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sectionMuteAssertion;

/* instance methods */
- (id)_init;
- (unsigned long long)activeMuteAssertionLevelForThreadIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NCNotificationSectionMuteAssertion_h */
