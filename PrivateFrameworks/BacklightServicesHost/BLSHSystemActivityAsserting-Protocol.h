//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHSystemActivityAsserting_Protocol_h
#define BLSHSystemActivityAsserting_Protocol_h
@import Foundation;

@protocol BLSHSystemActivityAsserting <BSInvalidatable>

@property (readonly, nonatomic) BOOL active;

/* instance methods */
- (void)acquireWithTimeout:(double)timeout handler:(id /* block */)handler;
- (BOOL)isActive;
@end

#endif /* BLSHSystemActivityAsserting_Protocol_h */
