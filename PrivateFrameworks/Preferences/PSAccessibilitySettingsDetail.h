//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSAccessibilitySettingsDetail_h
#define PSAccessibilitySettingsDetail_h
@import Foundation;

#include "PSSettingsDetail-Protocol.h"

@class NSString;

@interface PSAccessibilitySettingsDetail : NSObject<PSSettingsDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)preferencesURL;
+ (id)iconImage;
@end

#endif /* PSAccessibilitySettingsDetail_h */
