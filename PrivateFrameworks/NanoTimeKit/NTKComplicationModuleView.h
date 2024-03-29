//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationModuleView_h
#define NTKComplicationModuleView_h
@import Foundation;

#include "NTKModuleView.h"
#include "CDComplicationDisplay-Protocol.h"
#include "CDComplicationDisplayObserver-Protocol.h"

@class NSString;

@interface NTKComplicationModuleView : NTKModuleView<CDComplicationDisplay>

@property (nonatomic) BOOL isXL;
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)layoutOverride;
+ (id)smallModuleViewForComplicationType:(unsigned long long)type;
+ (id)largeModuleViewForComplicationType:(unsigned long long)type;
+ (id)_imageProviderForImageSymbolName:(id)name imageAssetNamePrefix:(id)prefix;
+ (id)_modularSmallAlarmImageProvider;
+ (id)_extraLargeAlarmImageProvider;
+ (id)_modularSmallStopwatchImageProviderForDevice:(id)device;
+ (id)_extraLargeStopwatchImageProviderForDevice:(id)device;

/* instance methods */
- (id)_newLabelSubview;
- (id)_newLabelSubviewWithFont:(id)font;
- (id)_newImageViewSubview;
- (id)_attributeEnDashesWithinString:(id)string typographicTracking:(double)tracking baseFont:(id)font;
- (id)_attributedStringWithText:(id)text typographicTracking:(double)tracking baseFont:(id)font;
- (void)_setTypographicTracking:(double)tracking andFont:(id)font onAttributedString:(id *)string inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)tritium_transitionToTritiumOnWithProgress:(float)progress;
- (void)tritium_transitionToTritiumOffWithProgress:(float)progress;
@end

#endif /* NTKComplicationModuleView_h */
