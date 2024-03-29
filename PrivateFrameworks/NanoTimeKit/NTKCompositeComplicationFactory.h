//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKCompositeComplicationFactory_h
#define NTKCompositeComplicationFactory_h
@import Foundation;

#include "NTKFaceViewComplicationFactory-Protocol.h"

@class BOOL *, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NTKCompositeComplicationFactory : NSObject<NTKFaceViewComplicationFactory>

@property (retain, nonatomic) NSMutableDictionary *factoriesBySlot;
@property (retain, nonatomic) NSMutableOrderedSet *factories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)registerFactory:(id)factory forSlot:(id)slot;
- (void)registerFactory:(id)factory forSlots:(id)slots;
- (void)deregisterFactoryAtSlot:(id)slot;
- (void)deregisterFactoryAtSlots:(id)slots;
- (id)factoryAtSlot:(id)slot;
- (long long)complicationPickerStyleForSlot:(id)slot;
- (void)configureComplicationView:(id)view forSlot:(id)slot;
- (void)curvedComplicationCircleRadius:(double *)radius centerAngle:(double *)angle maxAngularWidth:(double *)width circleCenter:(struct CGPoint { double x0; double x1; } *)center interior:(BOOL *)interior forSlot:(id)slot;
- (id)keylineViewForComplicationSlot:(id)slot;
- (struct { long long x0; unsigned long long x1; BOOL x2; struct CGSize { double x0; double x1; } x3; })layoutConfigurationForSlot:(id)slot;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)type slot:(id)slot;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)complication family:(long long)family slot:(id)slot;
- (BOOL)slotSupportsCurvedText:(id)text;
@end

#endif /* NTKCompositeComplicationFactory_h */
