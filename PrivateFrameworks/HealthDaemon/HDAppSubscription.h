//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDAppSubscription_h
#define HDAppSubscription_h
@import Foundation;

@class HKObjectType, NSString;

@interface HDAppSubscription : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long dataCode;
@property (readonly, copy, nonatomic) HKObjectType *objectType;
@property (nonatomic) unsigned long long updateFrequency;
@property (nonatomic) unsigned long long lastAnchor;
@property (nonatomic) long long lastAckTime;
@property (nonatomic) long long launchTimeHysteresis;

/* instance methods */
- (id)init;
- (id)initWithBundleIdentifier:(id)identifier dataCode:(long long)code;
@end

#endif /* HDAppSubscription_h */
