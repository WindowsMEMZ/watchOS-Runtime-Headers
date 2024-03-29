//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1270.60.4.0.0
//
#ifndef MIPlaceholderConstructor_h
#define MIPlaceholderConstructor_h
@import Foundation;

#include "MIPlaceholderConstructor.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL;
@protocol MIPlaceholderConstructorIconGenerator;

@interface MIPlaceholderConstructor : NSObject

@property (nonatomic) unsigned long long placeholderType;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSDictionary *partialInfoPlist;
@property (retain, nonatomic) NSData *installUUID;
@property (retain, nonatomic) NSData *installSessionUUID;
@property (copy, nonatomic) NSDictionary *entitlements;
@property (copy, nonatomic) NSArray *pluginPlaceholderConstructors;
@property (retain, nonatomic) NSString *iconFileName;
@property (nonatomic) BOOL preserveFullInfoPlist;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSObject<MIPlaceholderConstructorIconGenerator> *iconGenerator;
@property (copy, nonatomic) NSURL *substituteIconFileURL;
@property (nonatomic) BOOL performPlaceholderInstallActions;
@property (nonatomic) unsigned long long iconPreservationLevel;
@property (readonly, nonatomic) BOOL isLaunchProhibited;
@property (readonly, nonatomic) MIPlaceholderConstructor *firstNetworkExtension;

/* class methods */
+ (id)_iconKeys;
+ (id)_infoPlistKeysToLoad;

/* instance methods */
- (id)initWithSource:(id)source byPreservingFullInfoPlist:(BOOL)plist error:(id *)error;
- (id)_initWithSource:(id)source byPreservingFullInfoPlist:(BOOL)plist forBundleType:(unsigned long long)type error:(id *)error;
- (id)_entitlementsForPath:(id)path error:(id *)error;
- (BOOL)_loadPartialInfoPlistWithError:(id *)error;
- (BOOL)_constructPluginPlaceholdersForDirectory:(id)directory appendingToArray:(id)array bundleType:(unsigned long long)type error:(id *)error;
- (BOOL)_populatePluginPlaceholderConstructorsWithError:(id *)error;
- (BOOL)_introspectWithError:(id *)error;
- (BOOL)_writeInfoPlistToPlaceholder:(id)placeholder withError:(id *)error;
- (BOOL)_copyStringsToPlaceholder:(id)placeholder error:(id *)error;
- (BOOL)_copyInfoPlistLoctableToPlaceholder:(id)placeholder error:(id *)error;
- (BOOL)_writeIconToPlaceholder:(id)placeholder error:(id *)error;
- (BOOL)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)placeholder error:(id *)error;
- (BOOL)materializeIntoBundleDirectory:(id)directory error:(id *)error;
@end

#endif /* MIPlaceholderConstructor_h */
