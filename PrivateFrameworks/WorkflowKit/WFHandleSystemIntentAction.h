//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFHandleSystemIntentAction_h
#define WFHandleSystemIntentAction_h
@import Foundation;

#include "WFHandleIntentAction.h"
#include "WFDynamicEnumerationDataSource-Protocol.h"

@class INIntentDescription, INIntentDescriptor, NSArray, NSSet, NSString;

@interface WFHandleSystemIntentAction : WFHandleIntentAction<WFDynamicEnumerationDataSource> {
  /* instance variables */
  INIntentDescription *_intentDescription;
  NSArray *_supportedAppIdentifiers;
}

@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) NSSet *supportedIdentifiers;
@property (readonly, nonatomic) NSSet *launchableIdentifiers;
@property (retain, nonatomic) INIntentDescriptor *intentDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedEnumerator;

/* instance methods */
- (id)initWithIdentifier:(id)identifier definition:(id)definition serializedParameters:(id)parameters stringLocalizer:(id)localizer;
- (void)dealloc;
- (void)selectedAppDidChange;
- (id)customAppNameForBundleIdentifier:(id)identifier;
- (id)customImageForBundleIdentifier:(id)identifier;
- (id)icon;
- (id)localizedAppName;
- (id)displayableAppIdentifier;
- (id)launchableAppIdentifier;
- (id)accessoryIcon;
- (long long)intentCategory;
- (id)intentClassName;
- (id)appSection;
- (id)slots;
- (void)initializeParameters;
- (id)copyWithSerializedParameters:(id)parameters;
- (id)generatedIntentWithIdentifier:(id)identifier input:(id)input processedParameters:(id)parameters error:(id *)error;
- (id)selectedAppNotSupportedError;
- (BOOL)setParameterState:(id)state forKey:(id)key;
- (id)intentDescriptorWithIntentClassName:(id)name launchableBundleId:(id)id;
- (id)intentDescriptorFromParameterState;
- (id)supportedAppIdentifiers;
- (id)launchableAppIdentifiers;
- (BOOL)shouldBeIncludedInAppsList;
- (id)actionForAppIdentifier:(id)identifier;
- (id)possibleStatesForEnumeration:(id)enumeration;
- (id)enumeration:(id)enumeration localizedLabelForPossibleState:(id)state;
- (id)enumeration:(id)enumeration accessoryImageForPossibleState:(id)state;
- (id)intentDescription;
@end

#endif /* WFHandleSystemIntentAction_h */
