//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.6.0.0.0
//
#ifndef RCPChildEventStream_Protocol_h
#define RCPChildEventStream_Protocol_h
@import Foundation;

@protocol RCPChildEventStream <RCPBaseEventStreamComposer>

@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (nonatomic) double currentTimeOffset;

/* instance methods */
- (id)finalizeEventStream;
@end

#endif /* RCPChildEventStream_Protocol_h */
