//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIChartAxisLabel_h
#define FIUIChartAxisLabel_h
@import Foundation;

@class NSString, UIColor;

@interface FIUIChartAxisLabel : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) id location;
@property (nonatomic) BOOL useReversePlacement;
@property (retain, nonatomic) UIColor *labelColor;
@property (nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowBlur;

/* instance methods */
- (id)description;
@end

#endif /* FIUIChartAxisLabel_h */
