//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSDataChannelsDirectConnections_h
#define IDSDataChannelsDirectConnections_h
@import Foundation;

@protocol OS_nw_connection;

@interface IDSDataChannelsDirectConnections : NSObject

@property (retain) NSObject<OS_nw_connection> *udpConnection;
@property (retain) NSObject<OS_nw_connection> *qpodConnection;

/* instance methods */
@end

#endif /* IDSDataChannelsDirectConnections_h */
