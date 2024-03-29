//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKAnalogUtilitarianFaceViewComplicationFactory_h
#define NTKAnalogUtilitarianFaceViewComplicationFactory_h
@import Foundation;

#include "NTKFaceViewComplicationFactory.h"
#include "NTKUtilityComplicationFactory.h"

@interface NTKAnalogUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory {
  /* instance variables */
  NTKUtilityComplicationFactory *_complicationFactory;
}

/* instance methods */
- (id)initForDevice:(id)device;
- (void)loadLayoutRulesForFaceView:(id)view;
- (id)newLegacyViewForComplication:(id)complication family:(long long)family slot:(id)slot faceView:(id)view;
- (void)configureComplicationView:(id)view forSlot:(id)slot faceView:(id)view;
- (id)_utilityComplicationSlots;
- (long long)_utilitarianUtilitySlotForSlot:(id)slot;
@end

#endif /* NTKAnalogUtilitarianFaceViewComplicationFactory_h */
