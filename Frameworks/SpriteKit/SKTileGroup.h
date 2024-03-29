//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKTileGroup_h
#define SKTileGroup_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SKTileSet.h"

@class NSArray, NSMutableArray, NSString;

@interface SKTileGroup : NSObject<NSCopying, NSSecureCoding>

@property (weak, nonatomic) SKTileSet *parentSet;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *name;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)tileGroupWithTileDefinition:(id)definition;
+ (id)tileGroupWithRules:(id)rules;
+ (id)emptyTileGroup;

/* instance methods */
- (void)setRuleParentPointers;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToNode:(id)node;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithTileDefinition:(id)definition;
- (id)initWithRules:(id)rules;
- (unsigned long long)findTileDefinitionIndexForAdjacencyData:(unsigned long long)data tileSetType:(unsigned long long)type;
- (id)findTileDefinitionIDsForAdjacencyData:(unsigned long long)data tileSetType:(unsigned long long)type;
@end

#endif /* SKTileGroup_h */
