//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef CRCoderArchiver_h
#define CRCoderArchiver_h
@import Foundation;

#include "CRCoder.h"

@class NSMutableOrderedSet;
@protocol {vector<CRDT::Document_DocObject *, std::allocator<CRDT::Document_DocObject *>>="__begin_"^^{Document_DocObject}"__end_"^^{Document_DocObject}"__end_cap_"{__compressed_pair<CRDT::Document_DocObject **, std::allocator<CRDT::Document_DocObject *>>="__value_"^^{Document_DocObject}}};

@interface CRCoderArchiver : CRCoder {
  /* instance variables */
  struct vector<CRDT::Document_DocObject *, std::allocator<CRDT::Document_DocObject *>> { struct Document_DocObject * *__begin_; struct Document_DocObject * *__end_; struct __compressed_pair<CRDT::Document_DocObject **, std::allocator<CRDT::Document_DocObject *>> { struct Document_DocObject * *__value_; } __end_cap_; } currentDocObjectEncodingStack;
}

@property (retain, nonatomic) NSMutableOrderedSet *uuidSet;
@property (retain, nonatomic) NSMutableOrderedSet *keySet;
@property (retain, nonatomic) NSMutableOrderedSet *encodedObjects;
@property (nonatomic) void * currentDocument;

/* class methods */
+ (void)initialize;
+ (id)encodedDataWithDocument:(id)document;

/* instance methods */
- (id)encodeDocument:(id)document;
- (void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)necessary;
- (void)encodeObject:(id)object forKey:(id)key;
- (void)encodeObject:(id)object forObjectID:(void *)id;
- (void)encodeString:(id)string forKey:(id)key;
- (void)encodeUUID:(id)uuid forKey:(id)key;
- (void)encodeDouble:(double)double forKey:(id)key;
- (void)encodeInt32:(int)int32 forKey:(id)key;
- (void)encodeInt64:(long long)int64 forKey:(id)key;
- (void)encodeUInt32:(unsigned int)uint32 forKey:(id)key;
- (void)encodeUInt64:(unsigned long long)uint64 forKey:(id)key;
- (unsigned long long)encodeUUIDIndexFromUUID:(id)uuid;
- (void *)mutableObjectIDForKey:(id)key;
- (void *)currentCustomObjectForEncoding;
- (void *)currentDocumentObjectForEncoding;
- (int)indexForKey:(id)key;
@end

#endif /* CRCoderArchiver_h */
