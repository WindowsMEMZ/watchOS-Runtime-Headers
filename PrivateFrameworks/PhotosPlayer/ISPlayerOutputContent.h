//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISPlayerOutputContent_h
#define ISPlayerOutputContent_h
@import Foundation;

#include "ISWrappedAVPlayer.h"

@class NSNumber;

@interface ISPlayerOutputContent : NSObject

@property (readonly, nonatomic) struct CGImage * photo;
@property (readonly, nonatomic) BOOL photoIsOriginal;
@property (readonly, nonatomic) int photoEXIFOrientation;
@property (readonly, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoSize;
@property (readonly, nonatomic) NSNumber *aspectRatio;

/* instance methods */
- (id)initWithPhoto:(struct CGImage *)photo photoIsOriginal:(BOOL)original photoEXIFOrientation:(int)exiforientation videoPlayer:(id)player aspectRatio:(id)ratio;
- (id)description;
- (void)dealloc;
@end

#endif /* ISPlayerOutputContent_h */
