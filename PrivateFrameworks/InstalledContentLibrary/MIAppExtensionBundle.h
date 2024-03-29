//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1270.60.4.0.0
//
#ifndef MIAppExtensionBundle_h
#define MIAppExtensionBundle_h
@import Foundation;

#include "MIExecutableBundle.h"

@class BOOL *, NSDictionary, NSString;

@interface MIAppExtensionBundle : MIExecutableBundle

@property (copy, nonatomic) NSDictionary *extensionCacheEntry;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) BOOL targetsAppleExtensionPoint;
@property (copy, nonatomic) NSString *validationOverrideParentBundleID;

/* instance methods */
- (id)initForTesting;
- (id)minimumOSVersion;
- (Class)dataContainerClass;
- (void)setBundleParentDirectoryURL:(id)url;
- (id)dataContainerForPersona:(id)persona error:(id *)error;
- (id)dataContainerCreatingIfNeeded:(BOOL)needed forPersona:(id)persona makeLive:(BOOL)live created:(BOOL *)created error:(id *)error;
- (BOOL)validateHasNoDotInBundleIDSuffix:(id *)idsuffix;
- (BOOL)validateBundleMetadataWithError:(id *)error;
- (id)extensionCacheEntryWithError:(id *)error;
@end

#endif /* MIAppExtensionBundle_h */
