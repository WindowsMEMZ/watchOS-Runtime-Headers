//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFApplicationContextProvider_Protocol_h
#define WFApplicationContextProvider_Protocol_h
@import Foundation;

@protocol WFApplicationContextProvider <NSObject>

@property (nonatomic) BOOL wfIdleTimerDisabled;
@property (readonly, nonatomic) long long userInterfaceStyle;

/* instance methods */
- (id)bundleForWFApplicationContext:(id)context;
- (id)currentUserInterfaceTypeForWFApplicationContext:(id)context;
- (id)notificationNameForApplicationStateEvent:(long long)event applicationContext:(id)context;
- (id)keyWindowForWFApplicationContext:(id)context;
- (id)applicationForWFApplicationContext:(id)context;
@optional
/* instance methods */
- (BOOL)shouldReverseLayoutDirection;
- (long long)currentApplicationStateForWFApplicationContext:(id)context;
@end

#endif /* WFApplicationContextProvider_Protocol_h */
