//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTObjectAllocServiceAuthorizedAPI_Protocol_h
#define DTObjectAllocServiceAuthorizedAPI_Protocol_h
@import Foundation;

@protocol DTObjectAllocServiceAuthorizedAPI <DTXAllowedRPC>
/* instance methods */
- (id)preparedEnvironmentForLaunch:(id)launch eventsMask:(id)mask;
- (id)attachToPid:(id)pid eventsMask:(id)mask;
- (void)stopCollection;
@end

#endif /* DTObjectAllocServiceAuthorizedAPI_Protocol_h */
