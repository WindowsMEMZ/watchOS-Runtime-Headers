//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef _PLThumbnailLoadingAsset_Protocol_h
#define _PLThumbnailLoadingAsset_Protocol_h
@import Foundation;

@protocol _PLThumbnailLoadingAsset <NSObject>
/* instance methods */
- (id)objectID;
- (unsigned long long)effectiveThumbnailIndex;
- (BOOL)complete;
- (long long)cloudPlaceholderKind;
- (id)pl_photoLibrary;
@optional
/* instance methods */
- (id)uuid;
- (id)thumbnailIdentifier;
- (struct CGSize { double x0; double x1; })imageSize;
- (BOOL)isTrashed;
- (BOOL)isHidden;
@end

#endif /* _PLThumbnailLoadingAsset_Protocol_h */
