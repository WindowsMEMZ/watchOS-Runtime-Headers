//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef DESBundlePluginManager_h
#define DESBundlePluginManager_h
@import Foundation;

#include "DESPluginManaging-Protocol.h"
#include "DESRecipeEvaluation-Protocol.h"
#include "DESRecipeEvaluationSession.h"

@class NSString;

@interface DESBundlePluginManager : NSObject<DESPluginManaging> {
  /* instance variables */
  NSObject<DESRecipeEvaluation> *_evaluator;
  DESRecipeEvaluationSession *_recipeEvaluation;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)pluginManagerForBundleId:(id)id error:(id *)error;

/* instance methods */
- (id)initWithBundleIdentifier:(id)identifier DESRecipeEvaluationObject:(id)object;
- (id)performDodMLTask:(id)mltask outError:(id *)error;
- (id)telemetryWithRecordSet:(id)set;
- (BOOL)shouldDownloadURL:(id)url forTask:(id)task;
- (void)stopWithCompletion:(id /* block */)completion;
@end

#endif /* DESBundlePluginManager_h */
