//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WKVideoFileUploadItem_h
#define _WKVideoFileUploadItem_h
@import Foundation;

#include "_WKFileUploadItem.h"

@interface _WKVideoFileUploadItem : _WKFileUploadItem
/* instance methods */
- (BOOL)isVideo;
- (struct RetainPtr<UIImage> { void * x0; })displayImage;
@end

#endif /* _WKVideoFileUploadItem_h */
