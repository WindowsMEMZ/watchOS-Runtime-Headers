//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITraitBasedAppearance_h
#define _UITraitBasedAppearance_h
@import Foundation;

#include "_UIAppearance.h"
#include "UITraitCollection.h"

@interface _UITraitBasedAppearance : _UIAppearance {
  /* instance variables */
  UITraitCollection *_traitCollection;
}

/* class methods */
+ (void)_setHasAnyCustomizations;
+ (BOOL)_hasAnyCustomizations;
+ (BOOL)_hasCustomizationsForTraitCollection:(id)collection class:(Class)class guideClass:(Class)class;
+ (id)_appearanceForTraitCollection:(id)collection forClass:(Class)class withContainerList:(id)list;

/* instance methods */
- (void)dealloc;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)object;
- (void)_invalidateAppearanceInWindow:(id)window;
- (id)_traitCollection;
@end

#endif /* _UITraitBasedAppearance_h */
