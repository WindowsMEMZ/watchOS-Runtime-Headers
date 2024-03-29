//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBlackcombColorPalette_h
#define NTKBlackcombColorPalette_h
@import Foundation;

#include "NTKFaceColorPalette.h"
#include "NTKBlackcombColorPalette-Protocol.h"
#include "NTKInterpolatedColorPalette.h"

@class NSString, UIColor;

@interface NTKBlackcombColorPalette : NTKFaceColorPalette<NTKBlackcombColorPalette>

@property (readonly, @dynamic, nonatomic) UIColor *lightBackground;
@property (readonly, @dynamic, nonatomic) UIColor *lightHourMarker;
@property (readonly, @dynamic, nonatomic) UIColor *lightSmallTick;
@property (readonly, @dynamic, nonatomic) UIColor *lightLargeTick;
@property (readonly, @dynamic, nonatomic) UIColor *lightPlatterText;
@property (readonly, @dynamic, nonatomic) UIColor *darkBackground;
@property (readonly, @dynamic, nonatomic) UIColor *darkHourMarker;
@property (readonly, @dynamic, nonatomic) UIColor *darkSmallTick;
@property (readonly, @dynamic, nonatomic) UIColor *darkLargeTick;
@property (readonly, @dynamic, nonatomic) UIColor *darkPlatterText;
@property (retain, nonatomic) NTKInterpolatedColorPalette *dialColorTransitionalPalette;
@property (nonatomic) unsigned long long dialColorStyle;
@property (readonly, nonatomic) long long richComplicationViewTheme;
@property (readonly, @dynamic, nonatomic) UIColor *background;
@property (readonly, @dynamic, nonatomic) UIColor *hourMarker;
@property (readonly, @dynamic, nonatomic) UIColor *smallTick;
@property (readonly, @dynamic, nonatomic) UIColor *largeTick;
@property (readonly, @dynamic, nonatomic) UIColor *platterText;
@property (readonly, @dynamic, nonatomic) UIColor *secondHand;
@property (readonly, @dynamic, nonatomic) UIColor *complication;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly, nonatomic) UIColor *swatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)transitionalPaletteFromDialColor:(unsigned long long)color toDialColor:(unsigned long long)color;
- (id)_background;
- (id)_hourMarker;
- (id)_smallTick;
- (id)_largeTick;
- (id)_platterText;
- (id)_secondHand;
- (id)_complication;
- (id)tritiumPalette;
@end

#endif /* NTKBlackcombColorPalette_h */
