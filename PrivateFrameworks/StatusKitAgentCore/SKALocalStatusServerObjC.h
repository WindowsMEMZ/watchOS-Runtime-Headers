//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKALocalStatusServerObjC_h
#define SKALocalStatusServerObjC_h
@import Foundation;

@class SKALocalStatusServer;

@interface SKALocalStatusServerObjC : NSObject

@property (retain, nonatomic) SKALocalStatusServer *server;

/* instance methods */
- (id)initWithIDSDeviceProvider:(id)provider;
- (void)shutdown;
@end

#endif /* SKALocalStatusServerObjC_h */
