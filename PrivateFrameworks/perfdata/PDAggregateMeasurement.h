//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 108.60.1.0.0
//
#ifndef PDAggregateMeasurement_h
#define PDAggregateMeasurement_h
@import Foundation;

#include "PDContainer.h"
#include "PDMeasurement.h"

@class NSMutableDictionary, NSString;

@interface PDAggregateMeasurement : NSObject

@property (retain, nonatomic) PDContainer *container;
@property (retain, nonatomic) NSString *metric;
@property (retain, nonatomic) NSString *unitString;
@property (retain, nonatomic) NSMutableDictionary *variables;
@property (retain, nonatomic) NSMutableDictionary *labels;
@property (nonatomic) struct running_mean { double x0; double x1; unsigned long long x2; } * values_mean;
@property (nonatomic) struct pooled_mean { struct sum { double x0; double x1; } x0; struct sum { double x0; double x1; } x1; unsigned long long x2; unsigned long long x3; } * stats_mean;
@property (nonatomic) BOOL validMin;
@property (nonatomic) double min;
@property (nonatomic) BOOL validMax;
@property (nonatomic) double max;
@property (nonatomic) unsigned long long samples;
@property (readonly, nonatomic) PDMeasurement *measurement;

/* instance methods */
- (id)initWithContainer:(id)container metric:(id)metric unitString:(id)string;
- (void)dealloc;
- (void)updateWithMeasurement:(id)measurement;
@end

#endif /* PDAggregateMeasurement_h */
