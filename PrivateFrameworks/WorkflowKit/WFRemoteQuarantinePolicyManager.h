//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRemoteQuarantinePolicyManager_h
#define WFRemoteQuarantinePolicyManager_h
@import Foundation;

@class CKContainer, CKDatabase, NSBundle;

@interface WFRemoteQuarantinePolicyManager : NSObject

@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSBundle *localPolicyBundle;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (id)policyString;
- (unsigned long long)policyVersion;
- (id)localizedString:(id)string;
- (id)policyAssetBundle;
- (id)latestRemotePolicyAssetBundle;
- (id)policyStringForBundleIfValid:(id)valid;
- (void)updatePolicyWithXPCActivity:(id)xpcactivity completionHandler:(id /* block */)handler;
- (BOOL)processAsset:(id)asset error:(id *)error;
- (BOOL)persistAssetToDisk:(id)disk error:(id *)error;
- (BOOL)deleteAssetBundlesExceptAssetWithIdentifier:(id)identifier error:(id *)error;
- (id)prepareDirectoryForAssetWithIdentifier:(id)identifier error:(id *)error;
@end

#endif /* WFRemoteQuarantinePolicyManager_h */
