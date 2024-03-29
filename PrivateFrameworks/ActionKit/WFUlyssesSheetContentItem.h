//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFUlyssesSheetContentItem_h
#define WFUlyssesSheetContentItem_h
@import Foundation;

#include "WFContentItem.h"

@interface WFUlyssesSheetContentItem : WFContentItem
/* class methods */
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)canLowercaseTypeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;

/* instance methods */
- (id)sheet;
- (id)generateObjectRepresentationForClass:(Class)class options:(id)options error:(id *)error;
@end

#endif /* WFUlyssesSheetContentItem_h */
