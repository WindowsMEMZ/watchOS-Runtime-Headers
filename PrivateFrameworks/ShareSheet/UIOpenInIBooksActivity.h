//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef UIOpenInIBooksActivity_h
#define UIOpenInIBooksActivity_h
@import Foundation;

#include "UIActivity.h"
#include "LSOpenResourceOperationDelegate-Protocol.h"
#include "UIManagedConfigurationRestrictableActivity-Protocol.h"

@class LSApplicationProxy, NSOperation, NSString, NSURL, UIPrintInteractionController;

@interface UIOpenInIBooksActivity : UIActivity<LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity>

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL shouldUnlinkFile;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) LSApplicationProxy *applicationProxy;
@property (retain, nonatomic) NSOperation *operation;
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

/* class methods */
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (id)defaultJobName;
+ (id)jobNameFormatForFile;
+ (id)bestJobNameForActivityItems:(id)items;

/* instance methods */
- (id)init;
- (long long)_defaultSortGroup;
- (id)activityType;
- (id)_bundleIdentifierForActivityImageCreation;
- (id)activityTitle;
- (BOOL)_appIsDocumentTypeOwner;
- (BOOL)canPerformWithActivityItems:(id)items;
- (id)_loadedApplicationProxy;
- (void)_openDocumentWithApplication;
- (void)openResourceOperation:(id)operation didFinishCopyingResource:(id)resource;
- (void)openResourceOperation:(id)operation didFailWithError:(id)error;
- (void)openResourceOperationDidComplete:(id)complete;
- (void)_finishedCopyingResource:(BOOL)resource;
- (void)performActivity;
- (void)_handleSaveToPDFWithCompleted:(BOOL)completed error:(id)error;
- (void)prepareWithActivityItems:(id)items;
@end

#endif /* UIOpenInIBooksActivity_h */
