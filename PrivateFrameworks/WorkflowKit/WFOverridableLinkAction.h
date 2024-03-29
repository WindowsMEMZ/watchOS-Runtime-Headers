//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOverridableLinkAction_h
#define WFOverridableLinkAction_h
@import Foundation;

#include "WFLinkAction.h"
#include "WFActionParameterSummary.h"

@class NSDictionary, NSString;

@interface WFOverridableLinkAction : WFLinkAction

@property (readonly, nonatomic) BOOL shouldOverrideName;
@property (readonly, nonatomic) BOOL shouldOverrideDescription;
@property (readonly, nonatomic) BOOL shouldOverrideParameterSummary;
@property (readonly, nonatomic) BOOL shouldOverrideParameterLabels;
@property (readonly, nonatomic) BOOL shouldOverrideSubcategory;
@property (readonly, nonatomic) NSString *overrideName;
@property (readonly, nonatomic) NSString *overrideDescriptionSummary;
@property (readonly, nonatomic) WFActionParameterSummary *overrideParameterSummary;
@property (readonly, nonatomic) NSDictionary *overrideLabelsByParameter;
@property (readonly, nonatomic) NSDictionary *overrideDefaultValuesByParameter;
@property (readonly, nonatomic) NSDictionary *serializationKeysByParameter;
@property (readonly, nonatomic) NSDictionary *parameterOverrides;
@property (readonly, nonatomic) NSString *appName;

/* class methods */
+ (id)overrideInputParameterName;
+ (id)overrideInputParameterNames;
+ (id)inputParameterMetadataWithActionMetadata:(id)metadata;

/* instance methods */
- (BOOL)shouldLocalizeValueForSelector:(SEL)selector;
- (id)name;
- (id)descriptionSummary;
- (id)parameterSummary;
- (id)parameterDefinitions;
- (BOOL)isPlatformProvidedUnderstandingAction;
@end

#endif /* WFOverridableLinkAction_h */
