//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INImageLoading_Protocol_h
#define INImageLoading_Protocol_h
@import Foundation;

@protocol INImageLoading <INImageServing>
/* instance methods */
- (BOOL)canLoadImageDataForImage:(id)image;
- (void)loadDataImageFromImage:(id)image usingPortableImageLoader:(id)loader scaledSize:(struct { double x0; double x1; })size completion:(id /* block */)completion;
- (void)filePathForImage:(id)image usingPortableImageLoader:(id)loader completion:(id /* block */)completion;
@end

#endif /* INImageLoading_Protocol_h */
