//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIInputContextHistory_h
#define TIInputContextHistory_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString;
@protocol {set<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>>="__tree_"{__tree<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<NSHolder<_TIInputContextEntry>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::less<NSHolder<_TIInputContextEntry>>>="__value_"Q}}};

@interface TIInputContextHistory : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  struct set<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { struct __tree<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<NSHolder<_TIInputContextEntry>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<NSHolder<_TIInputContextEntry>>> { unsigned long long __value_; } __pair3_; } __tree_; } _entries;
  struct set<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { struct __tree<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<NSHolder<_TIInputContextEntry>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<NSHolder<_TIInputContextEntry>>> { unsigned long long __value_; } __pair3_; } __tree_; } _pendingEntries;
}

@property (readonly, nonatomic) NSSet *senderIdentifiers;
@property (readonly, nonatomic) NSSet *recipientIdentifiers;
@property (readonly, nonatomic) NSSet *recipientNames;
@property (readonly, nonatomic) NSString *aggregateText;
@property (readonly, nonatomic) NSString *mostRecentNonSenderTextEntry;
@property (readonly, nonatomic) BOOL mostRecentTextEntryIsByMe;
@property (readonly, nonatomic) NSString *mostRecentTextEntryLogString;
@property (readonly, @dynamic, nonatomic) NSString *senderIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRecipientIdentifiers:(id)identifiers senderIdentifiers:(id)identifiers;
- (id)initWithRecipientIdentifiers:(id)identifiers senderIdentifier:(id)identifier;
- (id)initWithRecipientIdentifiers:(id)identifiers;
- (void)assertCheckpointForCoding;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)addTextEntry:(id)entry timestamp:(id)timestamp;
- (void)updateRecipientNames:(id)names;
- (void)addTextEntry:(id)entry timestamp:(id)timestamp senderIdentifier:(id)identifier;
- (void)_enumerateAllEntriesAsInputContextEntries:(id /* block */)entries;
- (void)enumerateAllEntries:(id /* block */)entries;
- (void)enumeratePendingEntries:(id /* block */)entries;
- (void)appendPendingEntriesFromInputContextHistory:(id)history;
- (BOOL)hasPendingEntries;
- (id)mostRecentTextEntry;
- (id)mostRecentTextEntries:(unsigned long long)entries;
@end

#endif /* TIInputContextHistory_h */
