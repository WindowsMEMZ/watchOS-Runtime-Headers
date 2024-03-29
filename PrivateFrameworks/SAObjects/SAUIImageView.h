//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUIImageView_h
#define SAUIImageView_h
@import Foundation;

#include "SAAceView.h"
#include "SAUIImageResource.h"

@class NSArray, NSNumber, NSString;

@interface SAUIImageView : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSNumber *tintColor;

/* class methods */
+ (id)imageView;
+ (id)imageViewWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUIImageView_h */
