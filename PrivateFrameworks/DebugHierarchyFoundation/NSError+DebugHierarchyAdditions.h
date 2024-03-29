//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 66.0.0.0.0
//
#ifndef NSError_DebugHierarchyAdditions_h
#define NSError_DebugHierarchyAdditions_h
@import Foundation;

@interface NSError (DebugHierarchyAdditions)
/* class methods */
+ (id)debugHierarchyErrorFromException:(id)exception caughtDuringRequest:(id)request forMethodSignature:(const char *)signature;

/* instance methods */
- (id)debugHierarchyResponseDataForRequest:(id)request;
@end

#endif /* NSError_DebugHierarchyAdditions_h */
