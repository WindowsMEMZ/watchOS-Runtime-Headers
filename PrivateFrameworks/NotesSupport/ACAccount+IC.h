//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ACAccount_IC_h
#define ACAccount_IC_h
@import Foundation;

@interface ACAccount (IC)
/* instance methods */
- (BOOL)ic_hasICloudEmailAddress;
- (BOOL)ic_hasPersonaIdentifier;
- (BOOL)ic_isManagedAppleID;
- (BOOL)ic_supportsModernNotes;
- (BOOL)ic_supportsHTMLNotes;
- (BOOL)ic_isNotesMigrated;
- (BOOL)ic_isPrimaryAppleAccount;
- (BOOL)ic_isNotesEnabled;
- (BOOL)ic_isICloudNotesAccount;
- (BOOL)ic_shouldCreateSeparatePersistentStore;
- (BOOL)ic_isFullAccountClass;
- (BOOL)ic_isBasicAccountClass;
@end

#endif /* ACAccount_IC_h */
