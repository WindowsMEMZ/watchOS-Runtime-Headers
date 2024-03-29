//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef USOSerializedGraph_h
#define USOSerializedGraph_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface USOSerializedGraph : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *printedForm;
@property (retain, nonatomic) NSArray *nodes;
@property (retain, nonatomic) NSArray *edges;
@property (retain, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) NSArray *alignments;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithNodes:(id)nodes edges:(id)edges;
- (id)initWithNodes:(id)nodes edges:(id)edges identifiers:(id)identifiers alignments:(id)alignments;
- (id)getIdentifiersIfExists:(const struct UsoGraphNode { undefined * * x0; struct UsoGraph * x1; unsigned long long x2; } *)exists nodeIndex:(unsigned long long)index;
- (id)getUtteranceAlignmentsIfExists:(const struct UsoGraphNode { undefined * * x0; struct UsoGraph * x1; unsigned long long x2; } *)exists nodeIndex:(unsigned long long)index;
- (id)createSerializedNode:(const struct UsoGraphNode { undefined * * x0; struct UsoGraph * x1; unsigned long long x2; } *)node withError:(id *)error;
- (id)initWithUsoGraph:(const void *)graph withError:(id *)error;
- (const void *)getOrCreateNodeName:(id)name withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager * x0; struct __shared_weak_count * x1; })manager withError:(id *)error;
- (const void *)getOrCreateVerbName:(id)name withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager * x0; struct __shared_weak_count * x1; })manager withError:(id *)error;
- (const void *)getOrCreateEdgeName:(id)name withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager * x0; struct __shared_weak_count * x1; })manager withError:(id *)error;
- (struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph * x0; } x0; })toCppUsoGraph:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager * x0; struct __shared_weak_count * x1; })graph withError:(id *)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* USOSerializedGraph_h */
