//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDictionaryParameter_h
#define WFDictionaryParameter_h
@import Foundation;

#include "WFParameter.h"

@class NSSet, NSString;

@interface WFDictionaryParameter : WFParameter

@property (readonly, nonatomic) NSString *localizedItemTypeName;
@property (readonly, nonatomic) NSString *localizedNewItemTypeName;
@property (readonly, nonatomic) NSSet *allowedValueTypes;

/* instance methods */
- (Class)singleStateClass;
- (id)initWithDefinition:(id)definition;
- (id)defaultSupportedVariableTypes;
- (BOOL)allowsMultipleValues;
@end

#endif /* WFDictionaryParameter_h */
