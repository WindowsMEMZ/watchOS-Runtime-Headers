//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHVideoResult_h
#define PHVideoResult_h
@import Foundation;

#include "PHCompositeMediaResult.h"

@class NSData, NSString, NSURL, PFSlowMotionTimeRangeMapper;

@interface PHVideoResult : PHCompositeMediaResult

@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSData *videoMediaItemMakerData;
@property (retain, nonatomic) NSString *fingerPrint;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (retain, nonatomic) PFSlowMotionTimeRangeMapper *timeRangeMapper;

/* instance methods */
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (void)setVideoAdjustmentData:(id)data;
- (id)videoAdjustmentData;
@end

#endif /* PHVideoResult_h */
