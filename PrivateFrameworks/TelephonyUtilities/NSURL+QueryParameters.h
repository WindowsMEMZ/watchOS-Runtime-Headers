//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef NSURL_QueryParameters_h
#define NSURL_QueryParameters_h
@import Foundation;

@interface NSURL (QueryParameters) <TUSanitizedCopying>
/* class methods */
+ (id)tu_defaultAllowedSchemes;
+ (id)telephonyURLWithDestinationID:(id)id;
+ (id)telephonyURLWithDestinationID:(id)id promptUser:(BOOL)user;
+ (id)telephonyURLWithDestinationID:(id)id addressBookUID:(int)uid;
+ (id)telephonyURLWithDestinationID:(id)id addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist wasAssisted:(BOOL)assisted;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)phoneAppVoicemailURLForRecordID:(unsigned long long)id;
+ (id)phoneAppVoicemailURLForMessageUUID:(id)uuid;
+ (id)faceTimeURLWithPhoneNumber:(id)number addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist wasAssisted:(BOOL)assisted;
+ (id)faceTimeURLWithPhoneNumber:(id)number addressBookUID:(int)uid audioOnly:(BOOL)only forceAssist:(BOOL)assist suppressAssist:(BOOL)assist wasAssisted:(BOOL)assisted;
+ (id)faceTimePinExchangeScheme;
+ (id)faceTimeScheme;
+ (id)faceTimeAudioScheme;
+ (id)faceTimeSystemCallControlsScheme;
+ (id)faceTimeOpenLinkScheme;
+ (id)faceTimeMultiwayScheme;
+ (id)TUDialRequestSchemeTelephony;
+ (id)TUDialRequestSchemeFaceTime;
+ (id)TUDialRequestSchemeFaceTimeAudio;
+ (id)faceTimeVideoMessageScheme;
+ (id)_faceTimeURLWithDestinationID:(id)id addressBookUID:(int)uid audioOnly:(BOOL)only;
+ (id)_faceTimeURLWithHandle:(id)handle addressBookUID:(int)uid audioOnly:(BOOL)only;
+ (id)faceTimeURLWithDestinationID:(id)id;
+ (id)faceTimeURLWithDestinationID:(id)id addressBookUID:(int)uid;
+ (id)faceTimeURLWithDestinationID:(id)id addressBookUID:(int)uid audioOnly:(BOOL)only;
+ (id)faceTimeURLWithDestinationID:(id)id addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist wasAssisted:(BOOL)assisted audioOnly:(BOOL)only;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)number;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)number showPrompt:(BOOL)prompt;
+ (id)_applyFaceTimeScheme:(id)scheme toFaceTimeURL:(id)url;
+ (id)faceTimeURLWithURL:(id)url;
+ (id)faceTimePromptURLWithURL:(id)url;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimeLaunchForOutgoingConversationURL;
+ (id)faceTimeLaunchForScreeningURL;
+ (id)faceTimeShowInCallUIURL;
+ (id)showKeypadURL;
+ (id)faceTimeShowCarPlayInCallUIURL;
+ (id)faceTimeShowSystemCallControlsURL;
+ (id)faceTimeShowHandoffEligibleNearbyURL;
+ (id)faceTimeShowIncomingTransmissionNoticeUIURL;
+ (id)faceTimeShowAccessoryButtonEventsNoticeUIURL;
+ (id)faceTimeUpdateForegroundAppURL;
+ (id)faceTimeAppViewLinkDetailsURL;
+ (id)faceTimeNeedsBackgroundLaunchURL;
+ (id)faceTimeAppJoinConversationLinkURL;
+ (id)faceTimeRefreshShareableContentURL;
+ (id)faceTimeUpdateForegroundAppURLForBundleIdentifier:(id)identifier applicationType:(long long)type;
+ (id)faceTimeAnswerURLWithSourceIdentifier:(id)identifier;
+ (id)faceTimeAppViewLinkDetailsURLForPseudonym:(id)pseudonym;
+ (id)faceTimeAppJoinConversationURLForConversationLinkURL:(id)url;
+ (id)faceTimeRefreshShareableContentURLForBundleIdentifier:(id)identifier;
+ (id)faceTimeVideoMessagePlaybackURLForUUID:(id)uuid;
+ (id)faceTimeAppVideoMessagePlaybackURLForUUID:(id)uuid;
+ (id)screenSharingAppURL;

/* instance methods */
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone *)zone;
- (id)sanitizedCopyWithZone:(struct _NSZone *)zone allowedSchemes:(id)schemes;
- (id)_destinationIDConvertingNumbersToLatin:(BOOL)latin;
- (id)phoneNumber;
- (int)addressBookUID;
- (int)callService;
- (id)originatingUIIdentifier;
- (BOOL)forceAssist;
- (BOOL)suppressAssist;
- (BOOL)wasAlreadyAssisted;
- (BOOL)_dialAssistBooleanQueryParameterValueForKey:(id)key;
- (BOOL)isTelephonyURL;
- (BOOL)isTelephonyPromptURL;
- (BOOL)hasTelephonyScheme;
- (BOOL)_hasScheme:(id)scheme;
- (id)formattedPhoneNumber;
- (BOOL)isWebSafeTelephoneURL;
- (id)webSafeTelephoneURL;
- (BOOL)isBasebandLogURL;
- (BOOL)isEmergencyURL;
- (BOOL)isEmergencyCallURL;
- (BOOL)isVoicemailURL;
- (id)telephonyParameterDictionary;
- (id)_mobilePhonePathParameters;
- (id)_mobilePhoneQueryParameters;
- (BOOL)isPhoneAppVoicemailURL;
- (long long)voicemailRecordID;
- (id)recentsUniqueID;
- (id)voicemailMessageUUID;
- (id)faceTimeDestinationAccount;
- (BOOL)_isPhoneNumberID:(id)id;
- (BOOL)isFaceTimeURL;
- (BOOL)isFaceTimePromptURL;
- (BOOL)isFaceTimeAudioURL;
- (BOOL)isFaceTimeAudioPromptURL;
- (BOOL)isFaceTimeMultiwayURL;
- (BOOL)isSystemCallControlsURL;
- (BOOL)isFaceTimeAppViewLinkDetailsURL;
- (id)pseudonymForLinkDetailsView;
- (BOOL)isFaceTimeOpenLinkURL;
- (id)conversationLinkURLForOpenLinkURL;
- (BOOL)isFaceTimeAppJoinConversationLinkURL;
- (id)conversationLinkURLForJoinConversation;
- (BOOL)hasNoPromptOption;
- (BOOL)isDialCallURL;
- (BOOL)isLaunchForIncomingCallURL;
- (BOOL)isLaunchForOutgoingConversationURL;
- (BOOL)isLaunchForScreeningURL;
- (BOOL)isShowInCallUIURL;
- (BOOL)isShowKeypadURL;
- (BOOL)isShowIncomingTransmissionNoticeURL;
- (BOOL)isShowAccessoryButtonEventsNoticeURL;
- (BOOL)isShowCarPlayInCallUIURL;
- (BOOL)isShowSystemCallControlsURL;
- (BOOL)isShowHandoffEligibleNearbyURL;
- (BOOL)isShowScreenSharingURL;
- (BOOL)isUpdateForegroundAppURL;
- (BOOL)isRefreshShareableContentURL;
- (BOOL)isVideoMessagePlaybackURL;
- (BOOL)isFaceTimeAppVideoMessagePlaybackURL;
- (id)videoMessageUUID;
- (id)foregroundAppBundleIdentifier;
- (long long)foregroundAppApplicationType;
- (BOOL)isFaceTimeNeedsBackgroundLaunchURL;
- (BOOL)isAnswerRequestURL;
- (id)answerRequestSourceIdentifier;
- (id)queryParameters;
- (id)tuQueryParameters;
- (id)URLBySettingQueryParameterValue:(id)value forKey:(id)key;
- (id)URLByDeletingQueryParameterWithKey:(id)key;
@end

#endif /* NSURL_QueryParameters_h */
