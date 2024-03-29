//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDConceptIndexEntry_h
#define HDConceptIndexEntry_h
@import Foundation;

@class HKOntologyVersion, NSString, NSUUID;

@interface HDConceptIndexEntry : NSObject

@property (readonly, copy, nonatomic) NSUUID *sampleUUID;
@property (readonly, nonatomic) long long conceptIdentifier;
@property (readonly, nonatomic) long long conceptVersion;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) unsigned long long compoundIndex;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) HKOntologyVersion *ontologyVersion;

/* instance methods */
- (id)init;
- (id)initWithSampleUUID:(id)uuid conceptIdentifier:(long long)identifier conceptVersion:(long long)version keyPath:(id)path compoundIndex:(unsigned long long)index type:(unsigned long long)type ontologyVersion:(id)version;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HDConceptIndexEntry_h */
