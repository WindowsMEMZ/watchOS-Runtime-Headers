//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebHighlightLayer_h
#define WebHighlightLayer_h
@import Foundation;

#include "CALayer.h"
#include "WebNodeHighlightView.h"
#include "WebView.h"

@interface WebHighlightLayer : CALayer {
  /* instance variables */
  WebNodeHighlightView *_view;
  WebView *_webView;
}

/* instance methods */
- (id)initWithHighlightView:(id)view webView:(id)view;
- (void)layoutSublayers;
- (id)actionForKey:(id)key;
@end

#endif /* WebHighlightLayer_h */
