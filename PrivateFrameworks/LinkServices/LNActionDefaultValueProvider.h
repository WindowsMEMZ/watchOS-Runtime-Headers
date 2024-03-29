//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNActionDefaultValueProvider_h
#define LNActionDefaultValueProvider_h
@import Foundation;

@class LNActionMetadata, LNFullyQualifiedActionIdentifier;

@interface LNActionDefaultValueProvider : NSObject

@property (retain, nonatomic) LNActionMetadata *actionMetadata;
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier;

/* instance methods */
- (id)initWithActionIdentifier:(id)identifier actionMetadata:(id)metadata;
- (id)loadStaticDefaultValueForBundleIdentifier:(id)identifier error:(id *)error;
- (void)loadDefaultValuesWithCompletionHandler:(id /* block */)handler;
- (void)loadSuggestedFocusActionsWithSuggestionContext:(id)context completion:(id /* block */)completion;
- (id)loadActionMetadataWithError:(id *)error;
@end

#endif /* LNActionDefaultValueProvider_h */
