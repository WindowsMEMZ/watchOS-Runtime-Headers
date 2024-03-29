//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUIMenuItem_h
#define SAUIMenuItem_h
@import Foundation;

#include "SAAceView.h"

@class NSArray, NSString, NSURL;

@interface SAUIMenuItem : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSURL *icon;
@property (copy, nonatomic) NSURL *ref;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

/* class methods */
+ (id)menuItem;
+ (id)menuItemWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUIMenuItem_h */
