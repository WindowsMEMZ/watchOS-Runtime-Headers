//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUIButton_h
#define SAUIButton_h
@import Foundation;

#include "SAAceView.h"
#include "SAUIColor.h"
#include "SAUIImageResource.h"

@class NSArray, NSString;

@interface SAUIButton : SAAceView

@property (retain, nonatomic) SAUIColor *backgroundColor;
@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) SAUIColor *textColor;

/* class methods */
+ (id)button;
+ (id)buttonWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUIButton_h */
