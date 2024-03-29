//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKLegendEntry_h
#define HKLegendEntry_h
@import Foundation;

@class NSString, UIColor, UIImage;

@interface HKLegendEntry : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *dotColor;
@property (retain, nonatomic) UIColor *innerDotColor;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *iconTint;

/* class methods */
+ (id)legendEntryWithTitle:(id)title dotColor:(id)color innerDotColor:(id)color;
+ (id)legendEntryWithTitle:(id)title labelColor:(id)color;
+ (id)legendEntryWithTitle:(id)title icon:(id)icon iconTint:(id)tint;

/* instance methods */
- (id)initWithTitle:(id)title dotColor:(id)color innerDotColor:(id)color labelColor:(id)color icon:(id)icon iconTint:(id)tint;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HKLegendEntry_h */
