//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKAServerBag_h
#define SKAServerBag_h
@import Foundation;

@interface SKAServerBag : NSObject
/* class methods */
+ (id)logger;
+ (BOOL)presenceEnabledByServer;
+ (BOOL)presenceEnabledByServerForServiceIdentifier:(id)identifier;
@end

#endif /* SKAServerBag_h */
