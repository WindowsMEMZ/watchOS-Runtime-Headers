//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTTapServiceDelegate_Protocol_h
#define DTTapServiceDelegate_Protocol_h
@import Foundation;

@protocol DTTapServiceDelegate 
/* class methods */
+ (void)registerCapabilities:(id)capabilities;
/* instance methods */
- (id)initWithMessageSender:(id)sender;
- (id)createConfigWithPlist:(id)plist;
- (BOOL)requiresExpiredPIDCacheForConfig:(id)config;
- (id)willStartWithConfig:(id)config;
- (void)didStop;
@end

#endif /* DTTapServiceDelegate_Protocol_h */
