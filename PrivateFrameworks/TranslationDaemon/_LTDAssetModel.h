//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTDAssetModel_h
#define _LTDAssetModel_h
@import Foundation;

#include "_LTDAssetModelProtocol-Protocol.h"

@class NSArray, NSString;

@interface _LTDAssetModel : NSObject<_LTDAssetModelProtocol> {
  /* instance variables */
  NSArray *_localeIdentifiers;
}

@property (retain, nonatomic) NSObject<_LTDAssetModelProtocol> *provider;
@property (readonly, nonatomic) BOOL shouldPurgeWithLocale;
@property (readonly, nonatomic) BOOL isMultiLocaleAsset;
@property (readonly, nonatomic) _LTAssetProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)descriptionForAssetState:(unsigned long long)state;
+ (id)localeIdentifiersForLanguageName:(id)name;

/* instance methods */
- (id)initWithProvider:(id)provider;
- (id)identifier;
- (id)assetId;
- (id)assetLanguage;
- (id)assetName;
- (id)assetTypeName;
- (long long)assetVersion;
- (long long)contentVersion;
- (long long)downloadSize;
- (long long)formatVersion;
- (id)getLocalFileUrl;
- (BOOL)isPremiumTextLID;
- (id)managedAssetType;
- (long long)requiredCapabilityIdentifier;
- (unsigned long long)state;
- (id)supportedLanguages;
- (long long)unarchivedSize;
- (unsigned long long)assetType;
- (BOOL)isANEModel;
- (BOOL)isASRModel;
- (BOOL)isConfig;
- (BOOL)isEmpty;
- (BOOL)isMTModel;
- (BOOL)isPhrasebook;
- (BOOL)isTTSModel;
- (id)stateDescription;
- (id)status;
- (BOOL)isEqual:(id)equal;
- (BOOL)refreshState;
- (BOOL)isAvailable;
- (BOOL)isDownloading;
- (BOOL)isInstalled;
- (BOOL)canBePurged;
- (BOOL)supportsLocale:(id)locale;
- (long long)compareAssetVersionReversed:(id)reversed;
- (BOOL)isNewerVersionThan:(id)than;
- (BOOL)isNewerCompatibleVersionThan:(id)than;
- (BOOL)_isCompatibleWithThisDevice;
- (id)localeIdentifiers;
@end

#endif /* _LTDAssetModel_h */
