//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFullscreenSubdialComplicationFactory_h
#define NTKFullscreenSubdialComplicationFactory_h
@import Foundation;

#include "NTKFaceViewComplicationFactory.h"
#include "NTKFaceView.h"
#include "NTKFaceViewComplicationFactory-Protocol.h"

@class NSString;

@interface NTKFullscreenSubdialComplicationFactory : NTKFaceViewComplicationFactory<NTKFaceViewComplicationFactory>

@property (nonatomic) struct CGPoint { double x0; double x1; } circularComplicationDistanceFromCenter;
@property (weak, nonatomic) NTKFaceView *faceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initForDevice:(id)device;
- (id)keylineViewForComplicationSlot:(id)slot;
- (void)loadLayoutRulesForFaceView:(id)view;
- (id)newLegacyViewForComplication:(id)complication family:(long long)family slot:(id)slot faceView:(id)view;
- (void)configureComplicationView:(id)view forSlot:(id)slot faceView:(id)view;
- (void)setAlpha:(double)alpha faceView:(id)view;
- (long long)complicationPickerStyleForSlot:(id)slot;
- (void)configureComplicationView:(id)view forSlot:(id)slot;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)type slot:(id)slot;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)complication family:(long long)family slot:(id)slot;
- (struct { long long x0; unsigned long long x1; BOOL x2; struct CGSize { double x0; double x1; } x3; })layoutConfigurationForSlot:(id)slot;
- (struct CGPoint { double x0; double x1; })_circularComplicationCenterForSlot:(id)slot inFaceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)_convertCircularSlot:(id)slot toPosition:(long long *)position;
@end

#endif /* NTKFullscreenSubdialComplicationFactory_h */
