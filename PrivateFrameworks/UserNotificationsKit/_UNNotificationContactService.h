//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 827.9.0.0.0
//
#ifndef _UNNotificationContactService_h
#define _UNNotificationContactService_h
@import Foundation;

#include "_UNCNContactResolver.h"

@class CNContactStore, NSCache;

@interface _UNNotificationContactService : NSObject {
  /* instance variables */
  NSCache *_resultsByServiceRecord;
  _UNCNContactResolver *_resolver;
  CNContactStore *_curatedContactStore;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithResolver:(id)resolver;
- (id)updateServiceWithContact:(id)contact bundleIdentifier:(id)identifier;
- (id)curatedContactMatchDetailsForContact:(id)contact bundleIdentifier:(id)identifier;
- (id)curatedContactForContact:(id)contact bundleIdentifier:(id)identifier keysToFetch:(id)fetch;
- (void)confirmCuratedContactSuggestion:(BOOL)suggestion forContact:(id)contact bundleIdentifier:(id)identifier;
- (BOOL)canAddToCuratedContacts:(id)contacts bundleIdentifier:(id)identifier;
- (id)newCuratedContactForContact:(id)contact imageData:(id)data bundleIdentifier:(id)identifier;
- (void)didAddToCuratedContactsForContact:(id)contact bundleIdentifier:(id)identifier cnContactIdentifier:(id)identifier;
- (id)_matchForContact:(id)contact bundleIdentifier:(id)identifier;
- (void)_setResult:(id)result forContact:(id)contact bundleIdentifier:(id)identifier;
@end

#endif /* _UNNotificationContactService_h */
