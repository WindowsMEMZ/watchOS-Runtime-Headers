//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPEnvironmentAware_Protocol_h
#define HDSPEnvironmentAware_Protocol_h
@import Foundation;

@protocol HDSPEnvironmentAware <NSObject>

@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

/* class methods */
+ (id)new;
/* instance methods */
- (id)init;
- (id)initWithEnvironment:(id)environment;
@optional
/* instance methods */
- (void)environmentWillBecomeReady:(id)ready;
- (void)environmentDidBecomeReady:(id)ready;
- (void)environmentWillInvalidate:(id)invalidate;
@end

#endif /* HDSPEnvironmentAware_Protocol_h */
