//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 920.3.0.0.0
//
#ifndef NRNSXPCListenerProtocol_Protocol_h
#define NRNSXPCListenerProtocol_Protocol_h
@import Foundation;

@protocol NRNSXPCListenerProtocol <NSObject>

@property (retain, nonatomic) NSObject<NRNSXPCListenerDelegate> *delegate;

/* instance methods */
- (id)initWithMachServiceName:(id)name;
- (void)resume;
- (void)suspend;
- (void)invalidate;
@end

#endif /* NRNSXPCListenerProtocol_Protocol_h */
