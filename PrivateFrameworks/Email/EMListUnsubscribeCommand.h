//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMListUnsubscribeCommand_h
#define EMListUnsubscribeCommand_h
@import Foundation;

#include "EFPubliclyDescribable-Protocol.h"
#include "EMListUnsubscribeMailtoValues.h"
#include "EMListUnsubscribePostValues.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface EMListUnsubscribeCommand : NSObject<NSSecureCoding, EFPubliclyDescribable>

@property (readonly, nonatomic) NSString *listID;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) BOOL isMailtoOperation;
@property (readonly, nonatomic) long long headerUnsubscribeTypes;
@property (readonly, nonatomic) EMListUnsubscribeMailtoValues *mailtoValues;
@property (readonly, nonatomic) EMListUnsubscribePostValues *postValues;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)mailtoUnsubscribeCommandWithListID:(id)id address:(id)address sender:(id)sender subject:(id)subject body:(id)body account:(id)account headerUnsubscribeTypes:(long long)types;
+ (id)oneClickUnsubscribeCommandWithListID:(id)id sender:(id)sender URL:(id)url postContent:(id)content headerUnsubscribeTypes:(long long)types;
+ (id /* block */)accountFinderBlock;
+ (void)setAccountFinderBlock:(id /* block */)block;
+ (id)_accountWithIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithListID:(id)id sender:(id)sender mailtoValues:(id)values postValues:(id)values headerUnsubscribeTypes:(long long)types;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* EMListUnsubscribeCommand_h */
