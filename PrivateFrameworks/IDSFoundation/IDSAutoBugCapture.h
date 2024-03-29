//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSAutoBugCapture_h
#define IDSAutoBugCapture_h
@import Foundation;

@interface IDSAutoBugCapture : NSObject
/* class methods */
+ (BOOL)isSupported;
+ (void)triggerCaptureWithEvent:(long long)event destinations:(id)destinations context:(id)context completion:(id /* block */)completion;
+ (void)triggerCaptureWithEvent:(long long)event context:(id)context completion:(id /* block */)completion;
@end

#endif /* IDSAutoBugCapture_h */
