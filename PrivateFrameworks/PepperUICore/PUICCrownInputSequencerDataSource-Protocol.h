//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICCrownInputSequencerDataSource_Protocol_h
#define PUICCrownInputSequencerDataSource_Protocol_h
@import Foundation;

@protocol PUICCrownInputSequencerDataSource <NSObject>
@optional
/* instance methods */
- (void)crownInputSequencer:(id)sequencer previousDetent:(id *)detent nextDetent:(id *)detent forOffset:(double)offset;
@end

#endif /* PUICCrownInputSequencerDataSource_Protocol_h */
