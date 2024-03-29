//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBPLEvent_h
#define RBPLEvent_h
@import Foundation;

@class RBSProcessIdentity;

@interface RBPLEvent : NSObject

@property (readonly, nonatomic) unsigned long long event;
@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) int assertionCount;
@property (readonly, nonatomic) int pid;

/* instance methods */
- (id)initWithevent:(unsigned long long)withevent identity:(id)identity assertionCount:(int)count pid:(int)pid;
@end

#endif /* RBPLEvent_h */
