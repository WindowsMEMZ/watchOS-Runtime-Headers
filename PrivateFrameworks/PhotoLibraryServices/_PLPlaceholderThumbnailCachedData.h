//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef _PLPlaceholderThumbnailCachedData_h
#define _PLPlaceholderThumbnailCachedData_h
@import Foundation;

@class NSData;

@interface _PLPlaceholderThumbnailCachedData : NSObject {
  /* instance variables */
  NSData *_imageData;
  int _width;
  int _height;
  int _bytesPerRow;
  int _dataWidth;
  int _dataHeight;
  int _imageDataOffset;
}

/* instance methods */
- (id)initWithImageData:(id)data width:(int)width height:(int)height bytesPerRow:(int)row dataWidth:(int)width dataHeight:(int)height imageDataOffset:(int)offset;
- (id)imageDataWithWidth:(int *)width height:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width dataHeight:(int *)height imageDataOffset:(int *)offset;
@end

#endif /* _PLPlaceholderThumbnailCachedData_h */
