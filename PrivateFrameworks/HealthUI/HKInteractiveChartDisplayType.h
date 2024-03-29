//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInteractiveChartDisplayType_h
#define HKInteractiveChartDisplayType_h
@import Foundation;

#include "HKDisplayType.h"
#include "HKDisplayType.h"
#include "HKGraphSeries.h"
#include "HKInteractiveChartDataFormatter.h"

@class NSDictionary, NSString, UIColor;

@interface HKInteractiveChartDisplayType : HKDisplayType

@property (readonly, nonatomic) HKGraphSeries *mainGraphSeries;
@property (readonly, nonatomic) NSString *specifiedDisplayName;
@property (readonly, nonatomic) NSString *specifiedUnitName;
@property (readonly, nonatomic) HKInteractiveChartDataFormatter *specifiedValueFormatter;
@property (retain, nonatomic) NSDictionary *seriesForTimeScopeMapping;
@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;

/* instance methods */
- (id)initWithGraphSeries:(id)series baseDisplayType:(id)type dataTypeCode:(long long)code;
- (id)initWithGraphSeries:(id)series baseDisplayType:(id)type valueFormatter:(id)formatter dataTypeCode:(long long)code;
- (id)initWithBaseDisplayType:(id)type valueFormatter:(id)formatter dataTypeCode:(long long)code seriesForTimeScopeMapping:(id)mapping;
- (id)initWithGraphSeries:(id)series displayName:(id)name unitName:(id)name valueFormatter:(id)formatter dataTypeCode:(long long)code;
- (id)_initWithDisplayName:(id)name unitDisplayNameOverrides:(id)overrides localizationTableOverride:(id)override chartingRules:(id)rules unitName:(id)name valueFormatter:(id)formatter dataTypeCode:(long long)code baseDisplayType:(id)type mainGraphSeries:(id)series seriesForTimeScopeMapping:(id)mapping;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)graphSeriesForTimeScope:(long long)scope;
- (id)displayName;
- (id)unitNameForValue:(id)value unitPreferenceController:(id)controller;
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)scope;
- (id)description;
- (long long)_internalDisplayTypeIdentifier;
@end

#endif /* HKInteractiveChartDisplayType_h */
