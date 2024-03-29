//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMBalloonPluginManagerModel_h
#define IMBalloonPluginManagerModel_h
@import Foundation;

#include "IMThreadSafeBalloonPluginMap.h"

@class NSDictionary, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface IMBalloonPluginManagerModel : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (readonly, nonatomic) IMThreadSafeBalloonPluginMap *pluginsMap;
@property (retain, nonatomic) id extensionMatchingContext;
@property (retain, nonatomic) id highMemoryExtensionMatchingContext;
@property (retain, nonatomic) NSString *pluginMetaDataFolder;
@property (retain, nonatomic) NSDictionary *pluginIDToMetadataCache;
@property (retain, nonatomic) NSSet *pluginsToRemoveAfterExtensionsUpdate;
@property (nonatomic) BOOL hasCompletedInitialization;
@property (nonatomic) BOOL hasDeferredInstalledAppsChangedNotification;
@property (retain, nonatomic) NSString *simulatedConversationID1;
@property (retain, nonatomic) NSString *simulatedConversationID2;
@property (retain, nonatomic) NSUUID *localParticipantID1;
@property (retain, nonatomic) NSUUID *localParticipantID2;

/* instance methods */
- (id)init;
@end

#endif /* IMBalloonPluginManagerModel_h */
