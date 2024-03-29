//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSSQLKeypathTriggerAttributeExtension_h
#define NSSQLKeypathTriggerAttributeExtension_h
@import Foundation;

#include "NSSQLAttribute.h"
#include "NSSQLAttributeExtension-Protocol.h"
#include "NSSQLEntity.h"
#include "NSSQLRelationship.h"

@class NSArray, NSString;

@interface NSSQLKeypathTriggerAttributeExtension : NSObject<NSSQLAttributeExtension> {
  /* instance variables */
  id _objectFromUserInfo;
  NSString *_keypath;
  NSSQLEntity *_entity;
  NSSQLAttribute *_attribute;
  NSSQLRelationship *_countedRelationship;
}

@property (readonly, nonatomic) NSArray *insertSQLStrings;
@property (readonly, nonatomic) NSArray *dropSQLStrings;
@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithObjectFromUserInfo:(id)info onAttributeNamed:(id)named onEntity:(id)entity;
- (void)dealloc;
- (BOOL)validate:(id *)validate;
- (BOOL)isEqualToExtension:(id)extension;
@end

#endif /* NSSQLKeypathTriggerAttributeExtension_h */
