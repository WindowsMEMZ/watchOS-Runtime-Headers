//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIClientBundleManagerBundleInfo_h
#define WNUIClientBundleManagerBundleInfo_h
@import Foundation;

@class NSBundle, NSNumber, NSString;

@interface WNUIClientBundleManagerBundleInfo : NSObject

@property (retain, nonatomic) Class vcClass;
@property (retain, nonatomic) NSBundle *bundle;
@property (copy, nonatomic) NSString *appBundleIdentifierOverride;
@property (retain, nonatomic) NSNumber *singleNotificationPerAlert;
@property (retain, nonatomic) NSNumber *userInteractionEnabled;
@property (retain, nonatomic) NSNumber *supportsThreadedLongLook;

/* instance methods */
@end

#endif /* WNUIClientBundleManagerBundleInfo_h */
