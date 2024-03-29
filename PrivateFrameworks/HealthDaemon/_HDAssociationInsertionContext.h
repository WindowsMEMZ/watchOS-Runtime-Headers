//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDAssociationInsertionContext_h
#define _HDAssociationInsertionContext_h
@import Foundation;

#include "HDDatabaseTransaction.h"
#include "HDProfile.h"

@class NSUUID;

@interface _HDAssociationInsertionContext : NSObject {
  /* instance variables */
  BOOL _enforceSameSource;
  BOOL _permitPendingAssociations;
  NSUUID *_parentUUID;
  HDProfile *_profile;
  HDDatabaseTransaction *_transaction;
}

/* instance methods */
@end

#endif /* _HDAssociationInsertionContext_h */
