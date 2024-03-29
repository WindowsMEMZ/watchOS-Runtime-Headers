//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKAnalogTritiumHandStyleDescriptor_h
#define NTKAnalogTritiumHandStyleDescriptor_h
@import Foundation;

@class UIColor;

@interface NTKAnalogTritiumHandStyleDescriptor : NSObject

@property (nonatomic) double alpha;
@property (retain, nonatomic) UIColor *minuteHandDotColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } inlayInsets;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;

/* class methods */
+ (id)interpolateFrom:(id)from to:(id)to fraction:(double)fraction;
+ (id)styleDescriptorFromHandView:(id)view;
+ (id)defaultTritiumStyleDescriptorFromStyleDescriptor:(id)descriptor insetInlays:(BOOL)inlays;
+ (id)tritiumStrokeColor;

/* instance methods */
- (id)initWithFillColor:(id)color strokeColor:(id)color;
- (id)initWithFillColor:(id)color strokeColor:(id)color minuteHandDotColor:(id)color;
- (id)initWithFillColor:(id)color strokeColor:(id)color inlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets alpha:(double)alpha minuteHandDotColor:(id)color;
- (void)applyToHandView:(id)view;
- (void)setTritiumInsetsFromHandView:(id)view;
@end

#endif /* NTKAnalogTritiumHandStyleDescriptor_h */
