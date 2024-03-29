//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebFixedPositionContent_h
#define WebFixedPositionContent_h
@import Foundation;

@interface WebFixedPositionContent : NSObject {
  /* instance variables */
  void * _private;
}

/* instance methods */
- (id)initWithWebView:(id)view;
- (void)dealloc;
- (void)scrollOrZoomChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })changed;
- (void)overflowScrollPositionForLayer:(id)layer changedTo:(struct CGPoint { double x0; double x1; })to;
- (void)didFinishScrollingOrZooming;
- (void)setViewportConstrainedLayers:(void *)layers stickyContainerMap:(const void *)map;
- (BOOL)hasFixedOrStickyPositionLayers;
@end

#endif /* WebFixedPositionContent_h */
