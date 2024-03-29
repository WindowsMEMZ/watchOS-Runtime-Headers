//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 6.2.9.0.0
//
#ifndef ASCOverlaySettings_h
#define ASCOverlaySettings_h
@import Foundation;

@class NSNumber;

@interface ASCOverlaySettings : NSObject

@property (copy, nonatomic) NSNumber *rateLimitRequestsPerSecond;
@property (copy, nonatomic) NSNumber *rateLimitTimeWindow;
@property (copy, nonatomic) NSNumber *overlaysLoadTimeout;

/* class methods */
+ (id)sharedSettings;

/* instance methods */
- (id)_init;
@end

#endif /* ASCOverlaySettings_h */
