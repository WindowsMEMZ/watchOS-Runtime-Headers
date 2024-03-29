//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIIndexBarEntry_h
#define UIIndexBarEntry_h
@import Foundation;

#include "UIImage.h"

@class NSIndexPath, NSString;

@interface UIIndexBarEntry : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *effectiveShortTitle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) BOOL hasPoundTitle;
@property (copy, nonatomic) NSString *shortTitle;

/* class methods */
+ (id)entryWithType:(long long)type;
+ (id)entryWithTitle:(id)title;
+ (id)entryForNumbers;
+ (id)entryForSearch;
+ (id)entryForDotInView:(id)view;
+ (id)_dotImageInView:(id)view;
+ (id)_externalDotImageInView:(id)view;

/* instance methods */
- (id)description;
@end

#endif /* UIIndexBarEntry_h */
