//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFStorageServiceAction_h
#define WFStorageServiceAction_h
@import Foundation;

#include "WFAction.h"

@interface WFStorageServiceAction : WFAction

@property (readonly, nonatomic) BOOL showsFilePicker;

/* instance methods */
- (id)prioritizedParameterKeysForRemoteExecution;
- (BOOL)requiresRemoteExecution;
- (id)storageService;
- (void)runAsynchronouslyWithInput:(id)input;
- (id)outputContentClasses;
- (id)keywords;
- (BOOL)showsSettingsWhenResourcesUnavailable;
- (void)updatePathPrefix;
- (id)filenamePlaceholderText;
- (void)initializeParameters;
- (BOOL)setParameterState:(id)state forKey:(id)key;
- (id)filePathKey;
- (id)showPickerKey;
- (void)runAsynchronouslyWithInput:(id)input storageService:(id)service;
- (void)selectedStorageServiceChanged;
- (id)contentDestinationWithError:(id *)error;
- (BOOL)skipsProcessingHiddenParameters;
@end

#endif /* WFStorageServiceAction_h */
