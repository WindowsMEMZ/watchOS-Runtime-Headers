//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSSQLLocationAttributeRTreeExtension_h
#define NSSQLLocationAttributeRTreeExtension_h
@import Foundation;

#include "NSAttributeDescription.h"
#include "NSSQLAttributeExtension-Protocol.h"
#include "NSSQLEntity.h"

@class NSArray, NSObject, NSString;

@interface NSSQLLocationAttributeRTreeExtension : NSObject<NSSQLAttributeExtension> {
  /* instance variables */
  NSObject *_userInfoObject;
  NSArray *_components;
  NSSQLEntity *_sqlEntity;
  NSString *_attributeName;
  NSString *_rtreeTableName;
  NSAttributeDescription *_attributeDescription;
  NSAttributeDescription *_latProp;
  NSAttributeDescription *_longProp;
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
- (BOOL)isEqualToExtension:(id)extension;
- (BOOL)validate:(id *)validate;
@end

#endif /* NSSQLLocationAttributeRTreeExtension_h */
