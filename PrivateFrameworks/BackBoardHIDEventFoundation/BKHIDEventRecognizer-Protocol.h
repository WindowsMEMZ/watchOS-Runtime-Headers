//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDEventRecognizer_Protocol_h
#define BKHIDEventRecognizer_Protocol_h
@import Foundation;

@protocol BKHIDEventRecognizer <NSObject>
/* instance methods */
- (long long)processEvent:(struct __IOHIDEvent *)event shouldConsume:(BOOL *)consume;
@end

#endif /* BKHIDEventRecognizer_Protocol_h */
