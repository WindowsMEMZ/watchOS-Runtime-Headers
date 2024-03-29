//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPRFMutableDepthAutoLaunchSettings_h
#define CSLPRFMutableDepthAutoLaunchSettings_h
@import Foundation;

#include "CSLPRFDepthAutoLaunchSettings.h"

@class NSString;

@interface CSLPRFMutableDepthAutoLaunchSettings : CSLPRFDepthAutoLaunchSettings

@property (@dynamic, nonatomic) long long autoLaunchBehavior;
@property (copy, @dynamic, nonatomic) NSString *bundleID;
@property (@dynamic, nonatomic) unsigned long long changeSource;
@property (@dynamic, nonatomic) long long threshold;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLPRFMutableDepthAutoLaunchSettings_h */
