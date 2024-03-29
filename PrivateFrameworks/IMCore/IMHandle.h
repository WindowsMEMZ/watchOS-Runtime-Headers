//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMHandle_h
#define IMHandle_h
@import Foundation;

#include "IMAccount.h"
#include "IMServiceImpl.h"
#include "NSSecureCoding-Protocol.h"

@class BOOL *, CNContact, DNDContactHandle, IMBrand, IMBrandManager, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSSet, NSString;

@interface IMHandle : NSObject<NSSecureCoding> {
  /* instance variables */
  NSString *_id;
  NSString *_uncanonicalID;
  NSDate *_idleSince;
  NSDictionary *_extraProps;
  NSString *_cnFirstName;
  NSString *_cnLastName;
  NSString *_cnFullName;
  NSString *_cnNickname;
  NSString *_normalizedFormOfID;
  NSString *_IDWithTrimmedServer;
  NSString *_statusMsg;
  NSString *_processedStatusMsg;
  NSAttributedString *_richStatusMsg;
  NSDate *_whenWentOffline;
  NSDate *_whenStatusChanged;
  NSString *_prevStatusMsg;
  NSMutableArray *_notificationNameQueue;
  NSMutableArray *_notificationQueue;
  struct __CFPhoneNumber * _phoneNumberRef;
  NSString *_formattedNumber;
  unsigned long long _prevStatus;
  unsigned long long _resourceIndex;
  BOOL _blockNotifications;
  BOOL _hasTemporaryWatch;
  BOOL _beingTornDown;
  BOOL _hasCheckedPhoneNumber;
  int _addressBookIdentifier;
  int _notificationQueueCount;
  NSNumber *_isBusiness;
  NSNumber *_isMako;
  NSNumber *_isApple;
  NSString *_brandURI;
}

@property (retain, nonatomic) CNContact *cnContact;
@property (retain, nonatomic) NSDictionary *otherServiceIDs;
@property (nonatomic) long long priority;
@property (nonatomic) long long IDStatus;
@property (retain, nonatomic) DNDContactHandle *dndContactHandle;
@property (retain, nonatomic) IMBrandManager *brandManager;
@property (retain, nonatomic) IMBrand *brand;
@property (retain, nonatomic) NSData *brandSquareLogoImageData;
@property (retain, nonatomic) NSData *brandWideLogoImageData;
@property (copy, nonatomic) NSString *suggestedName;
@property (nonatomic) BOOL hasCheckedForSuggestions;
@property (nonatomic) BOOL hasSuggestedName;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) NSString *_displayNameWithAbbreviation;
@property (retain, nonatomic) NSString *cachedDisplayNameWithAbbreviation;
@property (retain, nonatomic) NSString *cachedName;
@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *originalID;
@property (readonly, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *personCentricID;
@property (readonly, nonatomic) NSString *displayID;
@property (readonly, nonatomic) NSString *normalizedID;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, nonatomic) NSString *nameAndID;
@property (readonly, nonatomic) NSString *nameAndEmail;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSString *phoneticFirstName;
@property (readonly, nonatomic) NSString *phoneticLastName;
@property (readonly, nonatomic) NSString *phoneticFullName;
@property (readonly, nonatomic) IMAccount *account;
@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSString *statusMessage;
@property (readonly, nonatomic) NSString *nameOfStatus;
@property (readonly, nonatomic) NSAttributedString *richStatusMessage;
@property (readonly, nonatomic) NSString *offlineString;
@property (readonly, nonatomic) unsigned long long previousStatus;
@property (readonly, nonatomic) NSString *previousStatusMessage;
@property (readonly, nonatomic) double timeSinceWentOffline;
@property (readonly, nonatomic) double timeSinceStatusChanged;
@property (readonly, nonatomic) long long availability;
@property (readonly, nonatomic) NSDate *availabilityStatusPublishedDate;
@property (readonly, nonatomic) unsigned int authRequestStatus;
@property (readonly, nonatomic) double idleTime;
@property (readonly, nonatomic) NSString *idleString;
@property (readonly, nonatomic) NSDate *feedUpdatedDate;
@property (readonly, nonatomic) BOOL canBeAdded;
@property (readonly, nonatomic) BOOL canBeDeleted;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) BOOL isBot;
@property (readonly, nonatomic) BOOL isBuddy;
@property (readonly, nonatomic) BOOL isLoginIMHandle;
@property (readonly, nonatomic) BOOL matchesLoginHandleForAnyAccount;
@property (readonly, nonatomic) BOOL isVisiblyBlocked;
@property (nonatomic) BOOL isBlocked;
@property (readonly, nonatomic) BOOL isAnonymous;
@property (readonly, nonatomic) BOOL isSystemUser;
@property (readonly, nonatomic) BOOL isMobile;
@property (readonly, nonatomic) BOOL isLoginIMHandleForAnyAccount;
@property (readonly, nonatomic) BOOL isKTVerified;
@property (readonly, nonatomic) NSString *mobileDeviceName;
@property (readonly, nonatomic) BOOL watchingIMHandle;
@property (readonly, nonatomic) NSData *pictureData;
@property (readonly, nonatomic) NSDictionary *extraProperties;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSArray *groupsArray;
@property (readonly, nonatomic) NSSet *groups;
@property (readonly, nonatomic) BOOL hasOtherSiblings;
@property (readonly, nonatomic) NSSet *siblings;
@property (readonly, nonatomic) NSArray *siblingsArray;
@property (readonly, nonatomic) NSArray *accountSiblingsArray;
@property (readonly, nonatomic) NSArray *existingAccountSiblingsArray;
@property (readonly, nonatomic) id bestAccountSibling;
@property (readonly, nonatomic) BOOL isConferenceAvailable;
@property (readonly, nonatomic) BOOL hasConferencing;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, nonatomic) BOOL hasMultiwayVideo;
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) BOOL hasMultiwayAudio;
@property (readonly, nonatomic) NSString *resource;
@property (readonly, nonatomic) NSString *IDWithoutResource;
@property (readonly, nonatomic) NSString *server;
@property (readonly, nonatomic) NSString *accountTypeName;
@property (readonly, nonatomic) NSString *guid;

/* class methods */
+ (void)bestHandlesForContacts:(id)contacts completion:(id /* block */)completion;
+ (void)bestHandlesForContacts:(id)contacts useExtendedAsyncLookup:(BOOL)lookup completion:(id /* block */)completion;
+ (void)validHandlesForContacts:(id)contacts completion:(id /* block */)completion;
+ (void)validHandlesForContacts:(id)contacts useExtendedAsyncLookup:(BOOL)lookup completion:(id /* block */)completion;
+ (void)handlesForContacts:(id)contacts useBestHandle:(BOOL)handle useExtendedAsyncLookup:(BOOL)lookup completion:(id /* block */)completion;
+ (void)setNotificationsEnabled:(BOOL)enabled;
+ (BOOL)notificationsEnabled;
+ (id)cnPhoneticKeys;
+ (void)_loadStatusNames;
+ (id)nameOfStatus:(unsigned long long)status;
+ (BOOL)supportsSecureCoding;
+ (id)handlesForCNContact:(id)cncontact;
+ (id)bestIMHandleInArray:(id)array;
+ (id)filterIMHandlesForAccountSiblings:(id)siblings onAccount:(id)account;
+ (id)filterIMHandlesForBestAccountSiblings:(id)siblings;

/* instance methods */
- (id)publicAPIPropertiesDictionary;
- (BOOL)shouldQueueNotifications;
- (void)beginNotificationQueue;
- (void)releaseNotificationQueue;
- (id)init;
- (id)initWithAccount:(id)account ID:(id)id alreadyCanonical:(BOOL)canonical;
- (void)dealloc;
- (id)_handleInfo;
- (void)_setOriginalID:(id)id countryCode:(id)code updateSiblings:(BOOL)siblings;
- (void)_setOriginalID:(id)id updateSiblings:(BOOL)siblings;
- (void)_setCountryCode:(id)code updateSiblings:(BOOL)siblings;
- (void)_setOriginalID:(id)id;
- (BOOL)isBusiness;
- (BOOL)isMako;
- (BOOL)isApple;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)imHandleForOtherAccount:(id)account;
- (void)setAnonymous:(BOOL)anonymous;
- (void)_registerForNotifications;
- (void)_postNotification:(id)notification;
- (void)_postNotificationName:(id)name userInfo:(id)info;
- (void)postNotificationName:(id)name;
- (unsigned long long)hash;
- (BOOL)isContact;
- (BOOL)resetCNContact;
- (BOOL)areCNContactPropertiesRecent;
- (void)_clearCNContactProperties;
- (void)resetCNContactProperties;
- (id)_IDWithTrimmedServer;
- (BOOL)_hasServiceNameProperties;
- (BOOL)_hasABName;
- (void)scheduleSuggestedNameFetchIfNecessary;
- (id)immediateNameWithNeedsSuggestedNameFetch:(BOOL *)fetch useSuggestedName:(BOOL)name;
- (id)_displayNameWithContact:(id)contact;
- (BOOL)_allowedByScreenTime;
- (id)_displayNameWithNicknameIfAvailable;
- (id)displayNameForChat:(id)chat;
- (void)resetUniqueName;
- (void)_setBaseFirstName:(id)name lastName:(id)name fullName:(id)name;
- (void)setImageData:(id)data;
- (void)setLocalNickname:(id)nickname;
- (void)setFirstName:(id)name lastName:(id)name fullName:(id)name andUpdateABPerson:(BOOL)abperson;
- (void)setEmail:(id)email andUpdateABPerson:(BOOL)abperson;
- (void)setFirstName:(id)name lastName:(id)name;
- (id)cnContactWithKeys:(id)keys;
- (void)updateCNContact:(id)cncontact;
- (BOOL)hasServer;
- (BOOL)hasResource;
- (void)_createPhoneNumberRefIfNeeded;
- (struct __CFPhoneNumber *)phoneNumberRef;
- (void)_updateOriginalID:(id)id;
- (id)_unformattedPhoneNumber;
- (id)_formattedPhoneNumber;
- (void)requestValueOfProperty:(id)property;
- (void)setValue:(id)value ofExtraProperty:(id)property;
- (void)setHasTemporaryWatch:(BOOL)watch;
- (BOOL)isBetterThanIMHandle:(id)imhandle;
- (BOOL)isBetterThanIMHandle:(id)imhandle nonPhoneNumbersPreferred:(BOOL)preferred;
- (id)bestIMHandleForService:(id)service;
- (id)bestIMHandleForAccount:(id)account;
- (id)bestIMHandleForAccount:(id)account onService:(id)service inGroup:(id)group otherThan:(id)than;
- (id)bestSibling;
- (void)_setExtraProperties:(id)properties;
- (void)propertiesChanged:(id)changed;
- (BOOL)_isMyIDInList:(id)list;
- (void)setBlocked:(BOOL)blocked;
- (unsigned int)sortOrderInGroup:(id)group;
- (id)imHandleWithoutResource;
- (id)existingIMHandleWithoutResource;
- (id)dependentIMHandles;
- (void)_stopRetainingAccount:(id)account;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (void)setPersonStatus:(unsigned long long)status;
- (void)statusChanged:(unsigned long long)changed message:(id)message;
- (void)statusMessageChanged:(id)changed;
- (void)statusChanged:(unsigned long long)changed;
- (void)_setIDStatus:(long long)idstatus;
- (void)setIdleSince:(id)since;
- (void)_filterStatusMessage;
- (void)_clearStatusMessageURLCache;
- (void)setStatus:(unsigned long long)status message:(id)message richMessage:(id)message;
- (void)beginObservingAvailability;
- (void)endObservingAvailability;
- (void)isInvitedToViewMyFocusStatusFromHandleID:(id)id completion:(id /* block */)completion;
- (void)autoInviteToViewAvailabilityIfNeededFromHandleID:(id)id;
- (id)_nameForComparisonPreferFirst:(BOOL)first;
- (long long)compareFirstNames:(id)names;
- (long long)compareLastNames:(id)names;
- (long long)compareStatus:(id)status;
- (long long)compareIDs:(id)ids;
- (long long)compareNormalizedIDs:(id)ids;
- (long long)compareAccountNames:(id)names;
- (BOOL)matchesIMHandle:(id)imhandle;
- (id)existingChatSiblingsArray;
- (id)chatSiblingsArray;
- (BOOL)isAccountSiblingOf:(id)of;
- (BOOL)isSiblingOf:(id)of;
- (BOOL)_isChatSiblingOf:(id)of;
- (id)_contactID;
- (id)_chatSiblings;
- (id)_chatSiblingsArray;
- (id)_bestChatSibling;
- (BOOL)_setCapabilities:(unsigned long long)capabilities;
- (BOOL)hasCapability:(unsigned long long)capability;
- (void)_imPersonPictureChanged:(id)changed;
- (void)customPictureDataChanged:(id)changed key:(id)key;
- (id)customPictureData;
- (void)setCustomPictureData:(id)data;
- (void)setCustomPictureData:(id)data key:(id)key;
- (id)description;
- (void)sendNotificationABPersonChanged;
- (void)_fetchBrandInfoForBrandWithURI:(id)uri;
- (void)_fetchBrandInfoForBusiness;
- (void)associatedBusinessIDChanged;
- (void)_fetchedBrand:(id)brand withBrandURI:(id)uri;
- (void)_postOnScreenChangedNotificationForBrandProperty:(id)property;
@end

#endif /* IMHandle_h */
