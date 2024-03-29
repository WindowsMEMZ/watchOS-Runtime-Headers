//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INNote_h
#define INNote_h
@import Foundation;

#include "INCacheableContainer-Protocol.h"
#include "INImageProxyInjecting-Protocol.h"
#include "INJSONSerializable-Protocol.h"
#include "INSpeakableString.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDateComponents, NSString;

@interface INNote : NSObject<INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *contents;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) INSpeakableString *title;
@property (readonly, copy, nonatomic) INSpeakableString *groupName;
@property (readonly, copy, nonatomic) NSDateComponents *createdDateComponents;
@property (readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)jsondecoder codableDescription:(id)description from:(id)from;

/* instance methods */
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)cache;
- (void)_injectProxiesForImages:(id /* block */)images completion:(id /* block */)completion;
- (id)_intents_readableTitleWithLocalizer:(id)localizer metadata:(id)metadata;
- (id)init;
- (id)initWithTitle:(id)title contents:(id)contents groupName:(id)name createdDateComponents:(id)components modifiedDateComponents:(id)components identifier:(id)identifier;
- (id)initWithTitle:(id)title contents:(id)contents groupName:(id)name createdDateComponents:(id)components modifiedDateComponents:(id)components identifier:(id)identifier accountIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_intents_encodeWithJSONEncoder:(id)jsonencoder codableDescription:(id)description;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_dictionaryRepresentation;
- (void)_setContents:(id)contents;
@end

#endif /* INNote_h */
