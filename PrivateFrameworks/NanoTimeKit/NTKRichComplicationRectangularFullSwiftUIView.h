//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRichComplicationRectangularFullSwiftUIView_h
#define NTKRichComplicationRectangularFullSwiftUIView_h
@import Foundation;

#include "NTKRichComplicationRectangularFullBaseView.h"

@class CDComplicationHostingView;

@interface NTKRichComplicationRectangularFullSwiftUIView : NTKRichComplicationRectangularFullBaseView {
  /* instance variables */
  CDComplicationHostingView *_swiftUIView;
}

/* class methods */
+ (BOOL)handlesComplicationTemplate:(id)template;

/* instance methods */
- (id)content;
- (void)setPaused:(BOOL)paused;
- (void)_handleTemplate:(id)template reason:(long long)reason;
- (void)_editingDidEnd;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
@end

#endif /* NTKRichComplicationRectangularFullSwiftUIView_h */
