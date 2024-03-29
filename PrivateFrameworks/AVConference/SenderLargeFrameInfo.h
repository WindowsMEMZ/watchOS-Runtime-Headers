//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef SenderLargeFrameInfo_h
#define SenderLargeFrameInfo_h
@import Foundation;

@interface SenderLargeFrameInfo : NSObject {
  /* instance variables */
  double probingInterval;
}

@property (nonatomic) double startTime;
@property (nonatomic) double lastProbingSequenceTimeExpect;
@property (nonatomic) double lastProbingSequenceTimeActual;
@property (nonatomic) unsigned int largeFrameSizeRequested;
@property (nonatomic) unsigned int largeFrameSizeAtCurrentBandwidth;
@property (nonatomic) unsigned int probingSequencePacketSize;
@property (nonatomic) unsigned int probingSequencePacketCount;
@property (nonatomic) int probingSequenceCount;
@property (nonatomic) int totalLargeFrameWaste;
@property (nonatomic) BOOL isLastFrameProbingSequence;
@property (nonatomic) BOOL isLargeFrameRequestDisabled;

@end

#endif /* SenderLargeFrameInfo_h */
