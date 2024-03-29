//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoBakedThumbnails_h
#define PLPhotoBakedThumbnails_h
@import Foundation;

@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject {
  /* instance variables */
  int _singleThumbnailImageLength;
  unsigned long long _count;
  BOOL _dataIsMutable;
  NSData *_thumbnailData;
  NSMutableArray *_thumbnailImages;
  BOOL _optionsAccessed;
  BOOL _missingHeader;
}

@property (readonly, nonatomic) unsigned short format;
@property (readonly, nonatomic) NSMutableDictionary *options;
@property (readonly, nonatomic) NSData *optionsData;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) int bitsPerComponent;
@property (readonly, nonatomic) int bytesPerPixel;
@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageRect;

/* class methods */
+ (id)thumbnailsWithContentsOfFile:(id)file format:(unsigned short)format;
+ (BOOL)_transformForImage:(struct CGImage *)image isCropped:(BOOL)cropped captureOrientation:(int)orientation sizeInOut:(struct CGSize { double x0; double x1; } *)out contextSizeOut:(struct CGSize { double x0; double x1; } *)out transformOut:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)out;

/* instance methods */
- (id)initWithData:(id)data format:(unsigned short)format readOnly:(BOOL)only;
- (id)initWithContentsOfFile:(id)file format:(unsigned short)format readOnly:(BOOL)only;
- (id)initWithImages:(id)images format:(unsigned short)format options:(id)options delegate:(id)delegate;
- (id)description;
- (id)serializedData;
- (BOOL)saveToFile:(id)file;
- (unsigned long long)count;
- (id)thumbnailDataAtIndex:(long long)index;
- (char *)thumbnailBytesAtIndex:(long long)index;
- (struct CGImage *)thumbnailImageAtIndex:(long long)index;
- (BOOL)writeBorderedThumbnailOfImage:(struct CGImage *)image toBuffer:(void *)buffer orientation:(int *)orientation format:(unsigned short)format formatInfo:(const struct { int x0; struct CGSize { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; unsigned int x4; int x5; int x6; double x7[4] double x8[4] unsigned int x9; } *)info delegate:(id)delegate;
- (id)_thumbnailData;
@end

#endif /* PLPhotoBakedThumbnails_h */
