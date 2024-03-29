//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDNearFieldInterfaceDelegate_Protocol_h
#define HDNearFieldInterfaceDelegate_Protocol_h
@import Foundation;

@protocol HDNearFieldInterfaceDelegate 
/* instance methods */
- (void)nearFieldInterfaceDidEnterField:(id)field;
- (void)nearFieldInterfaceFieldDetectionDidEndUnexpectedly:(id)unexpectedly;
- (void)nearFieldInterfaceDidReadTag:(id)tag;
- (void)nearFieldInterfaceTagSessionDidEndUnexpectedly:(id)unexpectedly;
@end

#endif /* HDNearFieldInterfaceDelegate_Protocol_h */
