//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12698.0.0.0.0
//
#ifndef ABFavoritesEntry_h
#define ABFavoritesEntry_h
@import Foundation;

@class NSString;

@interface ABFavoritesEntry : NSObject {
  /* instance variables */
  int _abUid;
  int _abIdentifier;
  NSString *_value;
  int _property;
  int _type;
  unsigned int x :1 _dirty;
  NSString *_label;
  NSString *_name;
  NSString *_abDatabaseUUID;
  void * _addressBook;
}

/* class methods */
+ (void)_runLookup;

/* instance methods */
- (void)_queueLookup;
- (void)_unqueueLookup;
- (void)_postEntryChanged;
- (void)_lookupNotFound;
- (void)_lookupChanged:(id)changed;
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier;
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier type:(int)type;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)initWithDictionaryRepresentation:(id)representation addressBook:(void *)book;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)dictionaryRepresentation:(id *)representation isDirty:(BOOL *)dirty;
- (id)displayName;
- (int)property;
- (id)label;
- (id)nonLocalizedLabel;
- (id)value;
- (int)identifier;
- (int)type;
- (void *)ABPerson;
- (int)_abUid;
- (BOOL)isEqual:(id)equal;
- (void)recheckAddressBook;
@end

#endif /* ABFavoritesEntry_h */
