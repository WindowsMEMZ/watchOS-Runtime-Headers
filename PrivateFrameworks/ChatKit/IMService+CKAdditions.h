//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMService_CKAdditions_h
#define IMService_CKAdditions_h
@import Foundation;

@interface IMService (CKAdditions)
/* instance methods */
- (BOOL)__ck_isiMessage;
- (BOOL)__ck_isSMS;
- (id)__ck_displayName;
- (long long)__ck_maxRecipientCountForHandle:(id)handle simID:(id)id;
- (char)__ck_displayColor;
- (char)__ck_serviceType;
@end

#endif /* IMService_CKAdditions_h */
