//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSCommonDefines_h
#define TPSCommonDefines_h
@import Foundation;

#include "TPSTipStatusController.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSCommonDefines : NSObject {
  /* instance variables */
  NSMutableArray *_cloudDevices;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap;
@property (nonatomic) int maxVersion;
@property (nonatomic) BOOL supportsUIApplication;
@property (readonly, nonatomic) BOOL tipsAccessAllowed;
@property (readonly, @dynamic, nonatomic) long long daysSinceLastMajorVersionUpdate;
@property (retain, nonatomic) NSString *majorVersion;
@property (retain, @dynamic, nonatomic) NSDate *lastMajorVersionUpdateDate;
@property (retain, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *language;
@property (copy, @dynamic, nonatomic) NSString *userLanguage;
@property (readonly, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableDictionary *appBundleIDMap;
@property (readonly, nonatomic) long long assetRatioType;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;

/* class methods */
+ (id)sharedInstance;
+ (id)tipsCoreFrameworkBundle;
+ (id)appGroupIdentifier;
+ (BOOL)isInternalDevice;
+ (BOOL)isInternalBuild;
+ (BOOL)isPhoneUI;
+ (BOOL)isPadUI;
+ (BOOL)isMacUI;
+ (BOOL)isVisionUI;
+ (BOOL)isGreenTeaDevice;
+ (id)osBuild;
+ (id)deviceFamily;
+ (id)clientBundleIdentifier;
+ (id)notificationBundleIdentifier;
+ (int)maxRequestVersion;
+ (BOOL)hardwareChanged;
+ (BOOL)callerIsTipsdWithSource:(id)source;
+ (BOOL)isSeniorUser;
+ (BOOL)supportsFaceID;
+ (int)buttonType;
+ (id)productVersion;
+ (id)deviceClass;
+ (id)deviceName;
+ (id)checklistCollectionIdentifier;
+ (id)hardwareWelcomeCollectionIdentifier;
+ (id)softwareWelcomeCollectionIdentifier;
+ (id)_tipStatusArchivalURL;
+ (id)mainBundleIdentifier;

/* instance methods */
- (id)init;
- (BOOL)hasLocaleChanged;
- (id)reloadAppGroupDefaults;
- (void)clearDataCache;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)identifiers;
- (void)notifiedCollection:(id)collection;
- (void)featuredCollection:(id)collection;
- (void)viewedCollection:(id)collection;
- (void)activatedCollection:(id)collection;
- (void)activatedCollections:(id)collections;
- (void)reloadModelInformation;
- (void)updateCollectionStatus:(unsigned long long)status collections:(id)collections;
- (void)resetCollectionStatusMap;
- (void)syncCollectionStatusMap;
- (id)collectionStatusForCollectionIdentifier:(id)identifier;
- (id)activateDateForCollectionIdentifier:(id)identifier;
- (id)dateForCollectionIdentifier:(id)identifier dateType:(unsigned long long)type;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)identifier;
- (long long)userType;
- (id)archivedTipStatuses;
- (void)deleteTipStatusArchivalDirectory;
@end

#endif /* TPSCommonDefines_h */
