//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDXPCConnectorDelegate_Protocol_h
#define DEDXPCConnectorDelegate_Protocol_h
@import Foundation;

@protocol DEDXPCConnectorDelegate <NSObject>
/* instance methods */
- (void)connector:(id)connector didLooseConnectionToProcessWithPid:(int)pid;
- (id)connector:(id)connector needsXPCInboundForPid:(id)pid;
@end

#endif /* DEDXPCConnectorDelegate_Protocol_h */
