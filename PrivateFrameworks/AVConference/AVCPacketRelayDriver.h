//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCPacketRelayDriver_h
#define AVCPacketRelayDriver_h
@import Foundation;

@interface AVCPacketRelayDriver : NSObject
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)startMonitoringFileDescriptor:(int)descriptor forConnection:(id)connection;
- (void)stopMonitoringFileDescriptor:(int)descriptor;
- (id)init;
- (void)dealloc;
@end

#endif /* AVCPacketRelayDriver_h */
