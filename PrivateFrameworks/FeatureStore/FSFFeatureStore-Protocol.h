//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef FSFFeatureStore_Protocol_h
#define FSFFeatureStore_Protocol_h
@import Foundation;

@protocol FSFFeatureStore 
/* instance methods */
- (id)getStream:(id)stream;
- (BOOL)deleteStream:(id)stream;
- (BOOL)deleteAllStreams;
@end

#endif /* FSFFeatureStore_Protocol_h */
