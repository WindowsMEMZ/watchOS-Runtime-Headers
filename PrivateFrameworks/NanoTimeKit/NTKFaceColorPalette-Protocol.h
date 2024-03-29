//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceColorPalette_Protocol_h
#define NTKFaceColorPalette_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "NTKFaceColorPalette-Protocol.h"
#include "NTKFaceColorPalette.h"
#include "NTKFaceColorPaletteConfiguration.h"
#include "NTKFaceColorPaletteConfigurationDelegate-Protocol.h"
#include "NTKFaceColorPaletteKeyColors-Protocol.h"
#include "NTKInterpolatedColorPalette.h"
#include "NTKPigmentEditOption.h"

@class NSBundle, NSCache, NSMutableArray, NSString, UIColor;

@protocol NTKFaceColorPalette <NSObject>

@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly, nonatomic) UIColor *swatch;

@end

#endif /* NTKFaceColorPalette_Protocol_h */
