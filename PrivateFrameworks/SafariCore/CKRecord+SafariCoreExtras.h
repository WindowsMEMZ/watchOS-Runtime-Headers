//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef CKRecord_SafariCoreExtras_h
#define CKRecord_SafariCoreExtras_h
@import Foundation;

@interface CKRecord (SafariCoreExtras)
/* instance methods */
- (id)safari_systemFieldsEncoder;
- (id)safari_initWithEncodedRecordData:(id)data;
- (id)safari_encodedSystemFieldsData;
- (BOOL)safari_hasAtLeastOneChangedField;
- (id)safari_encryptedValues;
- (BOOL)safari_boolForKey:(id)key;
- (id)safari_stringForKey:(id)key;
- (id)safari_numberForKey:(id)key;
- (id)safari_dataForKey:(id)key;
- (id)safari_dateForKey:(id)key;
- (id)safari_arrayForKey:(id)key;
- (id)safari_encryptedDataForKey:(id)key;
- (id)safari_referenceForKey:(id)key;
@end

#endif /* CKRecord_SafariCoreExtras_h */
