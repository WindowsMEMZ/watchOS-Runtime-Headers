//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMFeatureFlags_h
#define IMFeatureFlags_h
@import Foundation;

@interface IMFeatureFlags : NSObject

@property (readonly, nonatomic) BOOL conversationPinningMultiDragEnabled;
@property (readonly, nonatomic) BOOL conversationPinningTouchdownDimEnabled;
@property (readonly, nonatomic) BOOL conversationPinningUsesLastNameForDuplicatesEnabled;
@property (readonly, nonatomic) BOOL avatarViewAllowsStaleRendering;
@property (readonly, nonatomic) BOOL showAllInstalledMessageApps;
@property (readonly, nonatomic) BOOL showTapToRadarMessagesApp;
@property (readonly, nonatomic) BOOL macToolbarEnabled;
@property (readonly, nonatomic) BOOL macApplicationMetricsGatheringEnabled;
@property (readonly, nonatomic) BOOL messageSyncP2Enabled;
@property (readonly, nonatomic) BOOL fullTranscriptLoggingEnabled;
@property (readonly, nonatomic) BOOL micGroupPhotoEnabled;
@property (readonly, nonatomic) BOOL threeAttachmentStackEnabled;
@property (readonly, nonatomic) BOOL unitTestableFeatureEnabled;
@property (readonly, nonatomic) BOOL unitTestableFeatureForNewPlatformEnabled;
@property (readonly, nonatomic) BOOL focusFilteringInConversationListEnabled;
@property (readonly, nonatomic) BOOL keyTransparencyEnabled;
@property (readonly, nonatomic) BOOL keyTransparencyReportToAppleEnabled;
@property (readonly, nonatomic) BOOL backgroundAudioEnabled;
@property (readonly, nonatomic) BOOL diffableTranscriptDataSourceEnabled;
@property (readonly, nonatomic) BOOL transcriptSharingEnabled;
@property (readonly, nonatomic) BOOL imageQualityEstimatorEnabled;
@property (readonly, nonatomic) BOOL isDynamicLQMDisabledByWRM;
@property (readonly, nonatomic) BOOL smsFilterForUS;
@property (readonly, nonatomic) BOOL smsFilterForUK;
@property (readonly, nonatomic) BOOL smsFilterSync;
@property (readonly, nonatomic) BOOL watchNamePhotoEnabled;
@property (readonly, nonatomic) BOOL allowU18SnapWatchAssets;
@property (readonly, nonatomic) BOOL allowU18SnapAssets;
@property (readonly, nonatomic) BOOL messagesIniCloudVersion2;
@property (readonly, nonatomic) BOOL messagesInICloudNewUIEnabled;
@property (readonly, nonatomic) BOOL messagesIniCloudOnboardingUIEnabled;
@property (readonly, nonatomic) BOOL smsForwardingEnabled;
@property (readonly, nonatomic) BOOL AVLessSharePlayEnabled;
@property (readonly, nonatomic) BOOL tapbackInferenceEnabled;
@property (readonly, nonatomic) BOOL entryViewInTranscriptEnabled;
@property (readonly, nonatomic) BOOL entryViewUsesKeyboardLayoutGuideEnabled;
@property (readonly, nonatomic) BOOL sendMenuEnabled;
@property (readonly, nonatomic) BOOL SWYAttachmentsEnabled;
@property (readonly, nonatomic) BOOL arePreResolvedSiriMatchesEnabled;
@property (readonly, nonatomic) BOOL croppingAvoidanceEnabled;
@property (readonly, nonatomic) BOOL searchImprovementsEnabled;
@property (readonly, nonatomic) BOOL searchTokensEnabled;
@property (readonly, nonatomic) BOOL searchTokensForDatesEnabled;
@property (readonly, nonatomic) BOOL richAudioMessagesEnabled;
@property (readonly, nonatomic) BOOL audioMessagesEntryViewRecordingEnabled;
@property (readonly, nonatomic) BOOL textKit2Enabled;
@property (readonly, nonatomic) BOOL appCardsEnabled;
@property (readonly, nonatomic) BOOL sosAlertingEnabled;
@property (readonly, nonatomic) BOOL nameAndPhotoC3Enabled;
@property (readonly, nonatomic) BOOL replicationEnabled;
@property (readonly, nonatomic) BOOL priusEnabled;
@property (readonly, nonatomic) BOOL priusCompatibilityEnabled;
@property (readonly, nonatomic) BOOL corvetteEnabled;
@property (readonly, nonatomic) BOOL swipeToReplyEnabled;
@property (readonly, nonatomic) BOOL catchUpEnabled;
@property (readonly, nonatomic) BOOL GFTOnWatchEnabled;
@property (readonly, nonatomic) BOOL OTPCleanUpEnabled;
@property (readonly, nonatomic) BOOL readMMSDefaultFromCBEnabled;
@property (readonly, nonatomic) BOOL waldoEnabled;
@property (readonly, nonatomic) BOOL findMyLocateSessionEnabled;
@property (readonly, nonatomic) BOOL findMyNavBar;
@property (readonly, nonatomic) BOOL BIAEnabled;
@property (readonly, nonatomic) BOOL clingEnabled;
@property (readonly, nonatomic) BOOL clingBackwardsCompatibilityEnabled;
@property (readonly, nonatomic) BOOL stickersApp;
@property (readonly, nonatomic) BOOL stickerRepositioningEnabled;
@property (readonly, nonatomic) BOOL stickerRepositioningEnabled_macOS;
@property (readonly, nonatomic) BOOL stickerRepositioningEnabled_iOS;
@property (readonly, nonatomic) BOOL alwaysShowStickerDropUIEnabled;
@property (readonly, nonatomic) BOOL zelkovaEnabled;
@property (readonly, nonatomic) BOOL criticalAlertingEnabled;
@property (readonly, nonatomic) BOOL pinnedConversationOnWatchEnabled;
@property (readonly, nonatomic) BOOL userSafetyFrameworkEnabled;
@property (readonly, nonatomic) BOOL conversationSIMLabelEnabled;
@property (readonly, nonatomic) BOOL syncedSettingsEnabled;
@property (readonly, nonatomic) BOOL pinActionEnabled;
@property (readonly, nonatomic) BOOL reportJunkTextToAppleServerEnabled;
@property (readonly, nonatomic) BOOL unknownSenderBlastDoorEnabled;
@property (readonly, nonatomic) BOOL modernPersistenceXPCEnabled;
@property (readonly, nonatomic) BOOL widgetKitComplicationsEnabled;
@property (readonly, nonatomic) BOOL newAttributionViewEnabled;
@property (readonly, nonatomic) BOOL audioTranscriptionEnabled;
@property (readonly, nonatomic) BOOL showServiceEncryptionIcon;
@property (readonly, nonatomic) BOOL proofreadingEnabled;
@property (readonly, nonatomic) BOOL cachesDirectoryInDataVaultEnabled;
@property (readonly, nonatomic) BOOL temporaryDirectoryInDataVaultEnabled;
@property (readonly, nonatomic) BOOL inlineTapbackMenuEnabled;
@property (readonly, nonatomic) BOOL oopKeyboardEnabled;
@property (readonly, nonatomic) BOOL isAttachmentsPurgeabilityMonitoringEnabled;
@property (readonly, nonatomic) BOOL reactWithAStickerEnabled;
@property (readonly, nonatomic) BOOL saveToStickersEnabled;
@property (readonly, nonatomic) BOOL allowMultiplePhoneNumbersSNaPEnabled;
@property (readonly, nonatomic) BOOL waldoCPolish;

/* class methods */
+ (void)testWithFeature:(SEL)feature block:(id /* block */)block;
+ (void)testWithFeature:(SEL)feature enabled:(BOOL)enabled block:(id /* block */)block;
+ (id)sharedInstance;
+ (id)sharedFeatureFlags;

/* instance methods */
- (BOOL)certifiedDeliveryEnabled;
- (BOOL)manuallyAckMessagesEnabled;
- (BOOL)allCallOptionsInNavBarButtonEnabled;
- (BOOL)messagesSettingsEnabled;
- (BOOL)groupComposeEnabled;
- (BOOL)groupComposeSectionHeadersEnabled;
- (BOOL)memojiPickerEnabled;
- (BOOL)modernTextInputEnabled;
- (BOOL)modernContactsPickerForConversationDetailsEnabled;
- (BOOL)isHashtagImagesEnabled;
- (BOOL)photoAnalysisInSpotlightEnabled;
- (BOOL)CKScreenshotTestFeatureFlagValue;
- (id)CKScreenshotTestFeatureFlagMembers;
- (BOOL)isCKScreenshotTestFeatureFlagMember:(id)member withDomain:(id)domain;
- (BOOL)_isEntryViewInTranscriptEnabled;
- (BOOL)_isEntryViewInTranscriptEnabledForiPad;
- (BOOL)isEntryViewInTranscriptEnabled;
- (BOOL)isEntryViewUsesKeyboardLayoutGuideEnabled;
- (BOOL)_isSendMenuEnabled;
- (BOOL)_isSendMenuEnabledForiPad;
- (BOOL)isSendMenuEnabled;
- (BOOL)isUnitTestableFeatureEnabled;
- (BOOL)isUnitTestableFeatureForNewPlatformEnabled;
- (BOOL)isFocusFilteringInConversationListEnabledForMessages;
- (BOOL)isFocusFilteringInConversationListEnabled;
- (BOOL)isKeyTransparencyEnabled;
- (BOOL)isKeyTransparencyReportToAppleEnabled;
- (BOOL)isMessagesIniCloudVersion2;
- (BOOL)isMessagesInICloudNewUIEnabled_iOS;
- (BOOL)isMessagesInICloudNewUIEnabled_mac;
- (BOOL)isMessagesInICloudNewUIEnabled;
- (BOOL)isMessagesIniCloudOnboardingUIEnabled;
- (BOOL)isSMSForwardingEnabled;
- (BOOL)isBackgroundAudioEnabled;
- (BOOL)isSMSFilterEnabledForUS;
- (BOOL)isSMSFilterEnabledForUK;
- (BOOL)isSMSFilterSyncEnabled;
- (BOOL)isLQMImageQualityEstimatorEnabled;
- (BOOL)isTranscriptSharingEnabled;
- (BOOL)isAVLessSharePlayEnabled;
- (BOOL)isSWYAttachmentsEnabled;
- (BOOL)isNameAndPhotoC3Enabled;
- (BOOL)isWatchNamePhotoEnabled;
- (BOOL)isAllowU18SnapAssetsEnabled;
- (BOOL)isAllowU18SnapWatchAssetsEnabled;
- (BOOL)isCroppingAvoidanceEnabled;
- (BOOL)isSearchImprovementsEnabled;
- (BOOL)isSearchTokensEnabled_iOS;
- (BOOL)isSearchTokensEnabled_mac;
- (BOOL)isSearchTokensEnabled;
- (BOOL)isSearchTokensForDatesEnabled;
- (BOOL)isRichAudioMessagesEnabled;
- (BOOL)_isAudioMessagesEntryViewRecordingEnabled;
- (BOOL)isAudioMessagesEntryViewRecordingEnabled;
- (BOOL)isTextKit2Enabled;
- (BOOL)isAppCardsEnabled;
- (BOOL)isSOSAlertingEnabled;
- (BOOL)isCriticalAlertingEnabled;
- (BOOL)isReplicationEnabled;
- (BOOL)isPriusEnabled;
- (BOOL)isPriusCompatibilityEnabled;
- (BOOL)isCorvetteEnabled;
- (BOOL)isSwipeToReplyEnabled;
- (BOOL)isCatchUpEnabled;
- (BOOL)isGFTOnWatchEnabled;
- (BOOL)isDiffableTranscriptDataSourceEnabled;
- (BOOL)isOTPCleanUpEnabled;
- (BOOL)isReadMMSDefaultFromCBEnabled;
- (BOOL)isWaldoEnabled;
- (BOOL)isFindMyLocateSessionEnabled;
- (BOOL)isFindMyNavBarEnabled;
- (BOOL)isBIAEnabled;
- (BOOL)isClingEnabled;
- (BOOL)isClingBackwardsCompatibilityEnabled;
- (BOOL)isStickersAppEnabled_iOS;
- (BOOL)isStickersAppEnabled_mac;
- (BOOL)isStickersAppEnabled;
- (BOOL)isStickerRepositioningEnabled_iOS;
- (BOOL)isStickerRepositioningEnabled_macOS;
- (BOOL)isStickerRepositioningEnabled;
- (BOOL)isAlwaysShowStickerDropUIEnabled;
- (BOOL)isZelkovaEnabled;
- (BOOL)isPinnedConversationOnWatchEnabled;
- (BOOL)isUserSafetyFrameworkEnabled;
- (BOOL)isConversationSIMLabelEnabled;
- (BOOL)isSyncedSettingsEnabled;
- (BOOL)isPinActionEnabled;
- (BOOL)isReportJunkTextToAppleServerEnabled;
- (BOOL)isUnknownSenderBlastDoorEnabled;
- (BOOL)isModernPersistenceXPCEnabled;
- (BOOL)isWidgetKitComplicationsEnabled;
- (BOOL)isNewAttributionViewEnabled;
- (BOOL)isAudioTranscriptionEnabled;
- (BOOL)shouldShowServiceEncryptionIcon;
- (BOOL)isProofreadingEnabled;
- (BOOL)isCachesDirectoryInDataVaultEnabled;
- (BOOL)isTemporaryDirectoryInDataVaultEnabled;
- (BOOL)isInlineTapbackMenuEnabled;
- (BOOL)isReactWithAStickerEnabled;
- (BOOL)isAllowMultiplePhoneNumbersSNaPEnabled;
- (BOOL)isSaveToStickersEnabled;
- (BOOL)isWaldoCPolishEnabled;
- (BOOL)isOOPKeyboardEnabled;
- (BOOL)isTapbackInferenceEnabled;
@end

#endif /* IMFeatureFlags_h */
