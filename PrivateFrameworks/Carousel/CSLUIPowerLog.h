//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIPowerLog_h
#define CSLUIPowerLog_h
@import Foundation;

@class NSNumber;

@interface CSLUIPowerLog : NSObject

@property (retain) NSNumber *mode;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)powerLogSettingChanged:(id)changed;
@end

#endif /* CSLUIPowerLog_h */
