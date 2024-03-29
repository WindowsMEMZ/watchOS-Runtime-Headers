//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLPreviewExtensionRenderer_h
#define QLPreviewExtensionRenderer_h
@import Foundation;

@interface QLPreviewExtensionRenderer : NSObject

@property (retain) id preview;

/* instance methods */
- (id)initWithPreview:(id)preview;
- (void)drawInContextOfSize:(struct CGSize { double x0; double x1; })size drawingBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (void)drawInPDFContextOfSize:(struct CGSize { double x0; double x1; })size drawingBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (id)_failedToDrawError;
@end

#endif /* QLPreviewExtensionRenderer_h */
