//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPrimaryResidentElectionAddOn_Protocol_h
#define HMDPrimaryResidentElectionAddOn_Protocol_h
@import Foundation;

@protocol HMDPrimaryResidentElectionAddOn <NSObject>

@property (weak) NSObject<HMDPrimaryResidentElectionAddOnDelegate> *delegate;

/* instance methods */
- (void)start;
- (void)stop;
- (void)performElection;
- (void)performElectionWithReason:(unsigned long long)reason;
- (void)registerForMessages;
- (BOOL)residentIsPartOfTheCurrentMesh:(id)mesh;
- (void)primaryResidentChanged:(id)changed previousResidentDevice:(id)device;
- (id)residentsInMesh;
@end

#endif /* HMDPrimaryResidentElectionAddOn_Protocol_h */
