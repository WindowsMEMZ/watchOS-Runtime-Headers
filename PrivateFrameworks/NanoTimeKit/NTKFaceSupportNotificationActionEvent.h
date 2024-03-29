//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceSupportNotificationActionEvent_h
#define NTKFaceSupportNotificationActionEvent_h
@import Foundation;

#include "NTKFaceSupportAnalyticsRepresentable-Protocol.h"

@class NSDictionary, NSString;

@interface NTKFaceSupportNotificationActionEvent : NSObject<NTKFaceSupportAnalyticsRepresentable>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) double delayFromPresentation;
@property (readonly, nonatomic) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (readonly, nonatomic) NSString *ntkfs_analyticsEventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBundleIdentifier:(id)identifier action:(long long)action delayFromPresentation:(double)presentation;
@end

#endif /* NTKFaceSupportNotificationActionEvent_h */
