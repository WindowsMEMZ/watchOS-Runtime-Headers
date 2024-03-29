//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMSiriAnnotatedEntity_h
#define BMSiriAnnotatedEntity_h
@import Foundation;

#include "BMEventBase.h"
#include "BMSiriAnnotatedEntityGroupIdentifier.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSData, NSString;

@interface BMSiriAnnotatedEntity : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSData *usoEntity;
@property (readonly, nonatomic) NSString *dataType;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BMSiriAnnotatedEntityGroupIdentifier *group;
@property (readonly, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) double saliencyScore;
@property (nonatomic) BOOL hasSaliencyScore;
@property (readonly, nonatomic) unsigned long long saliencyComputedAt;
@property (nonatomic) BOOL hasSaliencyComputedAt;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithID:(id)id appBundleID:(id)id usoEntity:(id)entity dataType:(id)type data:(id)data group:(id)group annotations:(id)annotations saliencyScore:(id)score saliencyComputedAt:(id)at;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)_annotationsJSONArray;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSiriAnnotatedEntity_h */
