//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef PTSettingsKeyObserver_Protocol_h
#define PTSettingsKeyObserver_Protocol_h
@import Foundation;

@protocol PTSettingsKeyObserver <NSObject>
/* instance methods */
- (void)settings:(id)settings changedValueForKey:(id)key;
@end

#endif /* PTSettingsKeyObserver_Protocol_h */
