//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKExecutableQuery_Protocol_h
#define _DKExecutableQuery_Protocol_h
@import Foundation;

@protocol _DKExecutableQuery 
/* instance methods */
- (id)executeUsingCoreDataStorage:(id)storage error:(id *)error;
- (id)handleResults:(id)results error:(id)error;
@end

#endif /* _DKExecutableQuery_Protocol_h */
