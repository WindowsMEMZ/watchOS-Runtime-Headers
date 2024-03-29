//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1088.10.0.0.0
//
#ifndef AVChapter_h
#define AVChapter_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString, UIImage;

@interface AVChapter : NSObject<NSCopying> {
  /* instance variables */
  id /* block */ _imageBlock;
}

@property (readonly) UIImage *image;
@property (nonatomic) struct CGImage * cgImage;
@property (readonly) double startTime;
@property (readonly) double duration;
@property (readonly) unsigned long long number;
@property (readonly, copy) NSString *title;

/* class methods */
+ (void)initialize;
+ (id)playbackChapterWithStartTime:(double)time duration:(double)duration number:(unsigned long long)number title:(id)title imageFaultBlock:(id /* block */)block;
+ (id)chapterAtTime:(double)time inChapters:(id)chapters;

/* instance methods */
- (id)initWithStartTime:(double)time duration:(double)duration number:(unsigned long long)number title:(id)title imageFaultBlock:(id /* block */)block;
- (void)dealloc;
- (void)setCGImage:(struct CGImage *)cgimage;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)setValue:(id)value forUndefinedKey:(id)key;
- (id)valueForUndefinedKey:(id)key;
@end

#endif /* AVChapter_h */
