//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLSuppressSchoolModeAssertionXPCServer_Protocol_h
#define SCLSuppressSchoolModeAssertionXPCServer_Protocol_h
@import Foundation;

@protocol SCLSuppressSchoolModeAssertionXPCServer <NSObject>
/* instance methods */
- (void)acquireWithExplanation:(id)explanation UUID:(id)uuid completion:(id /* block */)completion;
@end

#endif /* SCLSuppressSchoolModeAssertionXPCServer_Protocol_h */
