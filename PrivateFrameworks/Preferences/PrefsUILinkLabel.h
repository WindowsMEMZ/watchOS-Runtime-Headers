//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PrefsUILinkLabel_h
#define PrefsUILinkLabel_h
@import Foundation;

#include "UILabel.h"

@class NSURL;

@interface PrefsUILinkLabel : UILabel {
  /* instance variables */
  NSURL *_url;
  BOOL _touchingURL;
}

@property (retain, nonatomic) NSURL *URL;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)openURL:(id)url;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)tappedLink:(id)link;
- (id)color:(id)color byMultiplyingSubComponentsBy:(float)by;
@end

#endif /* PrefsUILinkLabel_h */
