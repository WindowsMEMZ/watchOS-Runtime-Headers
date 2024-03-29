//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPBaseTracker_Protocol_h
#define VCPBaseTracker_Protocol_h
@import Foundation;

@protocol VCPBaseTracker 

@property struct CGPoint { double x0; double x1; } * box;
@property BOOL stableInd;
@property BOOL lostTrackInd;

/* instance methods */
- (id)init;
- (void)setupTrackerWithReferenceFrame:(struct __CVBuffer *)frame withROI:(struct CGPoint { double x0; double x1; } *)roi;
- (void)trackInFrame:(struct __CVBuffer *)frame;
@end

#endif /* VCPBaseTracker_Protocol_h */
