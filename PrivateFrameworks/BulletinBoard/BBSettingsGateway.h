//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBSettingsGateway_h
#define BBSettingsGateway_h
@import Foundation;

#include "BBSettingsGatewayClientInterface-Protocol.h"

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BBSettingsGateway : NSObject<BBSettingsGatewayClientInterface> {
  /* instance variables */
  NSXPCConnection *_connectionQueue_bbServerConnection;
  NSXPCConnection *_connectionQueue_unServerConnection;
  NSObject<OS_dispatch_queue> *_connectionQueue;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)clientInterface;
+ (id)serverInterface;
+ (void)initialize;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue;
- (void)dealloc;
- (void)invalidate;
- (id)_settingsConnection;
- (id)_ensureBBServerSettingsConnection;
- (id)_ensureSettingsPersistenceConnection;
- (void)_resetBBServerSettingsConnection;
- (void)_resetSettingsPersistenceConnection;
- (id)allEffectiveSectionInfo;
- (id)allSectionInfo;
- (void)getSectionInfoWithCompletion:(id /* block */)completion;
- (id)sectionInfoForSectionIDs:(id)ids;
- (void)getSectionInfoForSectionIDs:(id)ids withCompletion:(id /* block */)completion;
- (id)effectiveSectionInfoForSectionID:(id)id;
- (id)effectiveSectionInfoForSectionIDs:(id)ids;
- (void)getEffectiveSectionInfoForSectionIDs:(id)ids withCompletion:(id /* block */)completion;
- (id)sectionInfoForSectionID:(id)id;
- (void)getSectionInfoForSectionID:(id)id withCompletion:(id /* block */)completion;
- (void)getEffectiveSectionInfoForSectionID:(id)id withCompletion:(id /* block */)completion;
- (id)activeSectionInfo;
- (id)allActiveSectionIDs;
- (id)allSectionIDs;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)completion;
- (void)setSectionInfo:(id)info forSectionID:(id)id;
- (void)setSectionInfo:(id)info forSectionID:(id)id withCompletion:(id /* block */)completion;
- (void)updateSectionInfoForSectionID:(id)id withHandler:(id /* block */)handler;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)setting;
- (long long)effectiveGlobalContentPreviewsSetting;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)completion;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)setting;
- (long long)effectiveGlobalSpokenNotificationSetting;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id /* block */)completion;
- (void)setEffectiveGlobalAnnounceSetting:(long long)setting;
- (long long)effectiveGlobalAnnounceSetting;
- (void)getEffectiveGlobalAnnounceSettingWithCompletion:(id /* block */)completion;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)setting;
- (long long)effectiveGlobalAnnounceHeadphonesSetting;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithCompletion:(id /* block */)completion;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)setting;
- (long long)effectiveGlobalAnnounceCarPlaySetting;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithCompletion:(id /* block */)completion;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)setting;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (void)getEffectiveGlobalScheduledDeliverySettingWithCompletion:(id /* block */)completion;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)times;
- (id)effectiveGlobalScheduledDeliveryTimes;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithCompletion:(id /* block */)completion;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)setting;
- (long long)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithCompletion:(id /* block */)completion;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)setting;
- (long long)effectiveGlobalNotificationListDisplayStyleSetting;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithCompletion:(id /* block */)completion;
- (void)refreshAnnounceSettings;
- (void)refreshGlobalSettings;
- (void)refreshSectionInfo;
@end

#endif /* BBSettingsGateway_h */
