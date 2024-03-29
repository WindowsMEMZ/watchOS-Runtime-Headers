//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDynamicResolveParameter_h
#define WFDynamicResolveParameter_h
@import Foundation;

#include "WFParameter.h"
#include "WFCodableAttributeBackedParameter-Protocol.h"
#include "WFDynamicResolveParameterDataSource-Protocol.h"
#include "WFParameterValuePickable-Protocol.h"

@class INCodableAttribute, INStringLocalizer, NSString;
@protocol WFDynamicResolveParameterDelegate;

@interface WFDynamicResolveParameter : WFParameter<WFParameterValuePickable, WFCodableAttributeBackedParameter>

@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) INCodableAttribute *codableAttribute;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer;
@property (weak, nonatomic) NSObject<WFDynamicResolveParameterDataSource> *dataSource;
@property (weak, nonatomic) NSObject<WFDynamicResolveParameterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)wf_loadStatesWithSearchTerm:(id)term completionHandler:(id /* block */)handler;
- (id)wf_pickerLocalizedTitleForState:(id)state;
- (id)wf_pickerLocalizedSubtitleForState:(id)state;
- (id)wf_pickerLocalizedImageForState:(id)state;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)handler;
- (id)initWithDefinition:(id)definition;
- (Class)singleStateClass;
- (id)localizedLabelForState:(id)state;
- (void)resolveOptionsForUserInput:(id)input completionBlock:(id /* block */)block;
- (void)endResolutionSession;
- (void)localizedDisambiguationPromptForItems:(id)items intent:(id)intent completion:(id /* block */)completion;
@end

#endif /* WFDynamicResolveParameter_h */
