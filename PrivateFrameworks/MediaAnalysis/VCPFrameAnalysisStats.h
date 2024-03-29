//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPFrameAnalysisStats_h
#define VCPFrameAnalysisStats_h
@import Foundation;

#include "VCPVideoActivityDescriptor.h"

@class NSMutableArray;
@protocol struct array<float, 6UL> { float x0[6] }, {array<float, 6UL>="__elems_"[6f]};

@interface VCPFrameAnalysisStats : NSObject

@property (nonatomic) BOOL frameProcessedByVideoAnalyzer;
@property (nonatomic) float cameraMotionScore;
@property (nonatomic) float subjectActionScore;
@property (nonatomic) float subtleMotionScore;
@property (nonatomic) float interestingnessScore;
@property (nonatomic) float obstructionScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float colorfulnessScore;
@property (nonatomic) BOOL subMbMotionAvailable;
@property (nonatomic) float frameExpressionScore;
@property (nonatomic) float faceArea;
@property (nonatomic) struct array<float, 6UL> { float x0[6] } motionParam;
@property (nonatomic) struct array<float, 6UL> { float x0[6] } motionParamDiff;
@property (nonatomic) BOOL frameProcessedByHumanAnalyzer;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) float humanActionScore;
@property (nonatomic) BOOL frameProcessedByFaceDetector;
@property (retain, nonatomic) NSMutableArray *detectedFaces;
@property (retain, nonatomic) NSMutableArray *petsDetections;
@property (nonatomic) BOOL frameProcessedByPetsActionAnalyzer;
@property (nonatomic) float petsActionScore;
@property (retain, nonatomic) VCPVideoActivityDescriptor *videoActivityDescriptor;

/* instance methods */
- (id)init;
- (void)reset;
@end

#endif /* VCPFrameAnalysisStats_h */
