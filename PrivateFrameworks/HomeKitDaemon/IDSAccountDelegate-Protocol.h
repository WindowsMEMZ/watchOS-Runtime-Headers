//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef IDSAccountDelegate_Protocol_h
#define IDSAccountDelegate_Protocol_h
@import Foundation;

@protocol IDSAccountDelegate <NSObject>
@optional
/* instance methods */
- (void)account:(id)account isActiveChanged:(BOOL)changed;
- (void)account:(id)account devicesChanged:(id)changed;
- (void)account:(id)account nearbyDevicesChanged:(id)changed;
- (void)account:(id)account connectedDevicesChanged:(id)changed;
@end

#endif /* IDSAccountDelegate_Protocol_h */
