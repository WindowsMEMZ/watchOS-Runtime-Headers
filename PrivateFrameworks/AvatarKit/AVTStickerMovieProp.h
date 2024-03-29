//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTStickerMovieProp_h
#define AVTStickerMovieProp_h
@import Foundation;

#include "AVTStickerProp.h"

@class AVPlayerItem, NSMutableArray, NSURL;

@interface AVTStickerMovieProp : AVTStickerProp

@property (retain, nonatomic) AVPlayerItem *moviePlayerItem;
@property (retain, nonatomic) NSMutableArray *loadingNodes;
@property (readonly, nonatomic) NSURL *movieURL;

/* instance methods */
- (id)initWithMovieURL:(id)url size:(struct CGSize { double x0; double x1; })size scale:(BOOL)scale position:(BOOL)position renderLast:(id)last orientToCamera:(id)camera rotation:(id)rotation;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)buildNodeForAvatar:(id)avatar withCamera:(id)camera options:(id)options completionHandler:(id /* block */)handler;
- (void)stickerGenerationWillBegin;
- (BOOL)wantsTimedUpdates;
- (void)updateNode:(id)node withContentAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)stickerGenerationDidEnd;
- (id)dictionaryWithTargetPath:(id)path;
@end

#endif /* AVTStickerMovieProp_h */
