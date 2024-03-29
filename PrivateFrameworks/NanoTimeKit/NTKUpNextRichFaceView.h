//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextRichFaceView_h
#define NTKUpNextRichFaceView_h
@import Foundation;

#include "NTKUpNextFaceView.h"

@interface NTKUpNextRichFaceView : NTKUpNextFaceView
/* class methods */
+ (long long)uiSensitivity;

/* instance methods */
- (struct { long long x0; unsigned long long x1; BOOL x2; struct CGSize { double x0; double x1; } x3; })layoutConfigurationForSlot:(id)slot;
- (id)_newLegacyViewForComplication:(id)complication family:(long long)family slot:(id)slot;
- (void)_configureComplicationView:(id)view forSlot:(id)slot;
- (long long)_keylineStyleForComplicationSlot:(id)slot;
@end

#endif /* NTKUpNextRichFaceView_h */
