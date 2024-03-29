//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 629.3.4.0.0
//
#ifndef AVVCContextSettings_h
#define AVVCContextSettings_h
@import Foundation;

@class NSString;

@interface AVVCContextSettings : NSObject

@property (nonatomic) long long activationMode;
@property (retain, nonatomic) NSString *activationDeviceUID;
@property (nonatomic) BOOL announceCallsEnabled;

/* instance methods */
- (id)initWithMode:(long long)mode deviceUID:(id)uid;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* AVVCContextSettings_h */
