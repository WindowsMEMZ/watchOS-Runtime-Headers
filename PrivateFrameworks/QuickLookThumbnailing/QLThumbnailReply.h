//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLThumbnailReply_h
#define QLThumbnailReply_h
@import Foundation;

@class NSString, NSURL;

@interface QLThumbnailReply : NSObject

@property (copy, nonatomic) id /* block */ drawingBlock;
@property (copy, nonatomic) id /* block */ drawInContextBlock;
@property (copy, nonatomic) id /* block */ ioSurfaceBlock;
@property (copy, nonatomic) id /* block */ ioSurfaceAsyncBlock;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) int iconFlavor;
@property (nonatomic) BOOL isLowQuality;
@property (nonatomic) struct CGSize { double x0; double x1; } contextSize;
@property (nonatomic) unsigned long long type;
@property (nonatomic) struct CGColorSpace * colorSpace;
@property (copy, nonatomic) NSString *extensionBadge;

/* class methods */
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })size drawingBlock:(id /* block */)block;
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })size currentContextDrawingBlock:(id /* block */)block;
+ (id)replyWithImageFileURL:(id)url;
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })size ioSurfaceBlock:(id /* block */)block;
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })size ioSurfaceAsyncBlock:(id /* block */)block;

/* instance methods */
- (id)init;
@end

#endif /* QLThumbnailReply_h */
