//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INIntent_h
#define INIntent_h
@import Foundation;

#include "INAppIntent.h"
#include "INEnumerable-Protocol.h"
#include "INGenericIntent-Protocol.h"
#include "INImage.h"
#include "INImageProxyInjecting-Protocol.h"
#include "INIntentCodableDescription.h"
#include "INIntentDonationMetadata.h"
#include "INIntentExport-Protocol.h"
#include "INIntentKeyParameter.h"
#include "INIntentSlotComposing-Protocol.h"
#include "INKeyImageProducing-Protocol.h"
#include "INParameterContexts.h"
#include "INRuntimeObject-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSOrderedSet, NSString, NSUUID, PBCodable;

@interface INIntent : NSObject<INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INEnumerable, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding> {
  /* instance variables */
  NSMutableDictionary *_intentInstanceDescriptionMapping;
  BOOL _hasLoadedKeyParameter;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _keyParameterLock;
  BOOL _shouldForwardToAppOnSucccess;
  NSDictionary *_parameterCombinations;
  NSDictionary *_configurableParameterCombinations;
  INParameterContexts *_parameterContexts;
  long long _indexingHash;
  INIntentKeyParameter *_keyParameter;
}

@property (readonly) long long _intents_toggleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _hasTitle;
@property (readonly, copy, nonatomic) NSString *_title;
@property (readonly, copy, nonatomic) NSString *_subtitle;
@property (readonly, copy, nonatomic) NSString *_localizedVerb;
@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _intents_exemptFromMulitWindowRequirementForInAppHandling;
@property (readonly, nonatomic) BOOL _intents_hasSystemIntentHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { double x0; double x1; } _intents_preferredScaledImageSize;
@property (copy, nonatomic) PBCodable *backingStore;
@property (readonly, nonatomic) NSString *utteranceString;
@property (retain, nonatomic) NSString *launchId;
@property (retain, nonatomic) NSString *_nanoLaunchId;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *intentId;
@property (retain, nonatomic) NSString *extensionBundleId;
@property (retain, nonatomic) NSString *_uiExtensionBundleId;
@property (retain, nonatomic) NSArray *airPlayRouteIds;
@property (readonly, nonatomic) NSString *_endpointId;
@property (readonly, nonatomic) NSString *_mediaRouteId;
@property (readonly, nonatomic) NSString *_preferredAudioOutputRouteId;
@property (copy, nonatomic) NSString *recordRoute;
@property (retain, nonatomic) NSUUID *recordDeviceUID;
@property (retain, nonatomic) NSString *recordDeviceIdentifier;
@property (nonatomic) unsigned int audioSessionID;
@property (retain, nonatomic) _INPBIntentMetadata *_metadata;
@property (readonly, nonatomic) long long triggerMethod;
@property (nonatomic) long long _idiom;
@property (nonatomic) BOOL _primaryDisplayDisabled;
@property (retain, nonatomic) NSString *_originatingDeviceIDSIdentifier;
@property (retain, nonatomic) NSString *_originatingDeviceRapportEffectiveIdentifier;
@property (retain, nonatomic) NSString *_originatingDeviceRapportMediaSystemIdentifier;
@property (retain, nonatomic) NSNumber *_isOwnedByCurrentUser;
@property (retain, nonatomic) NSNumber *_msLimitReached;
@property (retain, nonatomic) NSNumber *_endpointMediaPlaybackEnabled;
@property (readonly, nonatomic) long long _intentCategory;
@property (readonly, nonatomic) NSString *_categoryVerb;
@property (nonatomic) long long _executionContext;
@property (retain, nonatomic) INImage *_defaultImage;
@property (readonly, nonatomic) INIntentKeyParameter *_keyParameter;
@property (readonly, nonatomic) NSString *typeName;
@property (retain, nonatomic) NSDictionary *_parameterCombinations;
@property (retain, nonatomic) NSDictionary *_configurableParameterCombinations;
@property (readonly, nonatomic) NSDictionary *_resolvableParameterCombinations;
@property (readonly, nonatomic) NSDictionary *_validParameterCombinations;
@property (readonly, nonatomic) BOOL _supportsBackgroundExecution;
@property (readonly, nonatomic) BOOL _configurable;
@property (readonly, nonatomic) BOOL _eligibleForSuggestions;
@property (copy, nonatomic) NSArray *parameterImages;
@property (readonly, copy, nonatomic) NSArray *sortedParameterImages;
@property (copy, nonatomic) NSArray *_parametersForcedToNeedsValue;
@property (readonly, nonatomic) long long _type;
@property (readonly, nonatomic) long long _indexingHash;
@property (nonatomic) BOOL _userConfirmationRequired;
@property (readonly, nonatomic) INIntentCodableDescription *_codableDescription;
@property (readonly, nonatomic) NSDictionary *_JSONDictionaryRepresentation;
@property (nonatomic) BOOL _shouldForwardToAppOnSucccess;
@property (retain, nonatomic) INParameterContexts *_parameterContexts;
@property (readonly, nonatomic) long long _preferredInteractionDirection;
@property (readonly, nonatomic) INAppIntent *_asMigratedAppIntent;
@property (readonly, nonatomic) NSArray *_codableAttributes;
@property (readonly, nonatomic) NSOrderedSet *_displayOrderedAttributes;
@property (readonly, copy, nonatomic) NSString *intentDescription;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase;
@property (nonatomic) unsigned long long shortcutAvailability;
@property (copy, nonatomic) INIntentDonationMetadata *donationMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *verb;
@property (copy, nonatomic) NSDictionary *parametersByName;

/* class methods */
+ (id)_sharedExtensionContextUUIDForIntentClassName:(id)name;
+ (void)_setSharedExtensionContextUUID:(id)uuid forIntentClassName:(id)name;
+ (id)_ignoredParameters;
+ (void)initialize;
+ (id)typeName;
+ (id)intentDescription;
+ (id)makeFromWidgetPlistableRepresentation:(id)representation error:(id *)error;
+ (BOOL)supportsSecureCoding;
+ (BOOL)resolveInstanceMethod:(SEL)method;
+ (BOOL)shouldSkipDefaultSchemaCheck;

/* instance methods */
- (BOOL)_intents_enumerateObjectsOfClass:(Class)class withBlock:(id /* block */)block;
- (BOOL)_enumerateWithValueProcessingBlock:(id /* block */)block;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)_keyImageWithIntentDescriptionStrategy;
- (long long)_compareSubProducerOne:(id)one subProducerTwo:(id)two;
- (id)_intents_launchIdForCurrentPlatform;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_bundleIdForLaunching;
- (id)_intents_bundleIdForDisplay;
- (id)_titleForLanguage:(id)language;
- (id)_titleWithLocalizer:(id)localizer fromBundleURL:(id)url;
- (id)_subtitleForLanguage:(id)language;
- (id)_subtitleWithLocalizer:(id)localizer fromBundleURL:(id)url;
- (id)_localizedCombinationStringForKey:(id)key value:(id)value localizationTable:(id)table bundleURL:(id)url localizer:(id)localizer;
- (id)intentSlotDescriptions;
- (id)localizeValueOfSlotDescription:(id)description withLocalizer:(id)localizer;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)identifier context:(unsigned long long)context error:(id *)error;
- (void)_intents_allowAppToInitiatePlaybackForBundleIdentifier:(id)identifier context:(unsigned long long)context error:(id *)error;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(id /* block */)strategy completion:(id /* block */)completion;
- (void)_injectProxyForDefaultImage:(id /* block */)image completion:(id /* block */)completion;
- (void)_injectProxiesForParameterImages:(id /* block */)images completion:(id /* block */)completion;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(id /* block */)strategy completion:(id /* block */)completion;
- (void)_injectProxiesForImages:(id /* block */)images completion:(id /* block */)completion;
- (id)init;
- (id)_init;
- (id)initWithIdentifier:(id)identifier backingStore:(id)store;
- (id)_initWithIdentifier:(id)identifier backingStore:(id)store schema:(id)schema error:(id *)error;
- (id)_initWithIdentifier:(id)identifier schema:(id)schema name:(id)name data:(id)data;
- (void)_setMetadata:(id)metadata;
- (id)_defaultImageName;
- (void)_setIntentCategory:(long long)category;
- (void)_setCategoryVerb:(id)verb;
- (void)_setDefaultImage:(id)image;
- (void)_setLaunchId:(id)id;
- (void)_setExtensionBundleId:(id)id;
- (void)_setUiExtensionBundleId:(id)id;
- (void)_setNanoLaunchId:(id)id;
- (void)_setExecutionContext:(long long)context;
- (void)_setIdiom:(long long)idiom;
- (BOOL)_isPrimaryDisplayDisabled;
- (void)_setPrimaryDisplayDisabled:(BOOL)disabled;
- (void)_setOriginatingDeviceIdsIdentifier:(id)identifier;
- (void)_setOriginatingDeviceRapportMediaSystemIdentifier:(id)identifier;
- (void)_setOriginatingDeviceRapportEffectiveIdentifier:(id)identifier;
- (void)_setIsOwnedByCurrentUser:(id)user;
- (void)_setMSLimitReached:(id)reached;
- (void)_setEndpointMediaPlaybackEnabled:(id)enabled;
- (void)_setAirPlayRouteIds:(id)ids;
- (void)setImage:(id)image forParameterNamed:(id)named;
- (id)imageForParameterNamed:(id)named;
- (id)keyImage;
- (id)_keyCodableAttributes;
- (void)_setImage:(id)image forParameter:(id)parameter;
- (id)_imageForParameter:(id)parameter;
- (id)_parameterImages;
- (id)_sortedParameterImages;
- (void)_setParameterImages:(id)images;
- (id)_querySchemaWithBlock:(id /* block */)block contentOptions:(unsigned long long)options;
- (id)_currentParameterCombination;
- (id)_validParameterCombinationsWithSchema:(id)schema;
- (BOOL)_supportsBackgroundExecutionWithOptions:(unsigned long long)options;
- (BOOL)_hasMatchingIntentHandlerIncludingRemoteExecution:(BOOL)execution;
- (BOOL)_isConfigurable;
- (BOOL)_isEligibleForSuggestions;
- (id)_nonNilParameters;
- (id)_displayOrderedNonNilParameters;
- (BOOL)_isUserConfirmationRequired;
- (void)_setUserConfirmationRequired:(BOOL)required;
- (void)trimDataAgainstTCCForAuditToken:(struct { unsigned int x0[8] })token bundle:(id)bundle;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)options containingAppBundleId:(id)id;
- (BOOL)isEqual:(id)equal;
- (id)_emptyCopy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_copyWithoutBackingStoreData:(id *)data;
- (id)_copyApplyingNewBackingStoreData:(id)data error:(id *)error;
- (id)_backingStoreData;
- (id)widgetPlistableRepresentation:(id *)representation;
- (id)widgetPlistableRepresentationWithParameters:(id)parameters error:(id *)error;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_redactedDictionaryRepresentation;
- (id)_dictionaryRepresentation;
- (id)_typedBackingStore;
- (id)initWithDomain:(id)domain verb:(id)verb parametersByName:(id)name;
- (void)_setParametersForcedToNeedsValue:(id)value;
- (BOOL)isGenericIntent;
- (id)_JSONDictionaryRepresentationWithConfiguration:(id)configuration;
- (void)_updateWithJSONDictionary:(id)jsondictionary;
- (id)_intentInstanceDescription;
- (id)_className;
- (BOOL)_isValidKey:(id)key;
- (BOOL)_isValueValidForKey:(id)key unsupportedReason:(id *)reason;
- (id)_inCodable;
- (id)valueForKey:(id)key;
- (id)valueForUndefinedKey:(id)key;
- (void)setValue:(id)value forUndefinedKey:(id)key;
- (id)valueForProperty:(id)property;
- (BOOL)setValue:(id)value forProperty:(id)property;
- (BOOL)configureAttributeSet:(id)set includingData:(BOOL)data;
- (id)_spotlightContentType;
- (void)_setParameterCombinations:(id)combinations;
- (void)_setConfigurableParameterCombinations:(id)combinations;
- (void)_setParameterContexts:(id)contexts;
- (void)_setShouldForwardToAppOnSuccess:(BOOL)success;
- (void)_setRecordRoute:(id)route;
- (void)_setRecordDeviceUID:(id)uid;
- (void)_setRecordDeviceIdentifier:(id)identifier;
- (void)_setAudioSessionID:(unsigned int)id;
@end

#endif /* INIntent_h */
