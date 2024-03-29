//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryInlineImageMediaShelfView_h
#define PKDiscoveryInlineImageMediaShelfView_h
@import Foundation;

#include "PKDiscoveryInlineCaptionedMediaShelfView.h"

@interface PKDiscoveryInlineImageMediaShelfView : PKDiscoveryInlineCaptionedMediaShelfView
/* instance methods */
- (id)initWithShelf:(id)shelf;
- (void)setImage:(id)image animated:(BOOL)animated;
- (void)_loadImageFromBundle;
- (void)_loadImageFromFileURL;
- (id)imageMediaView;
@end

#endif /* PKDiscoveryInlineImageMediaShelfView_h */
