//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDPBMessageHeaders_h
#define EDPBMessageHeaders_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class BOOL *;

@interface EDPBMessageHeaders : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 dateReceived; unsigned int x :1 listId; unsigned int x :1 sender; unsigned int x :1 senderContactId; unsigned int x :1 senderDomain; unsigned int x :1 messageIsForwarded; unsigned int x :1 messageIsReply; unsigned int x :1 senderIsVip; unsigned int x :1 userIsBcc; unsigned int x :1 userIsCc; unsigned int x :1 userIsSender; unsigned int x :1 userIsTo; } _has;
}

@property (nonatomic) BOOL hasSender;
@property (nonatomic) long long sender;
@property (nonatomic) BOOL hasSenderDomain;
@property (nonatomic) long long senderDomain;
@property (nonatomic) BOOL hasSenderIsVip;
@property (nonatomic) BOOL senderIsVip;
@property (nonatomic) BOOL hasSenderContactId;
@property (nonatomic) long long senderContactId;
@property (nonatomic) BOOL hasUserIsSender;
@property (nonatomic) BOOL userIsSender;
@property (readonly, nonatomic) unsigned long long subjectWordsCount;
@property (readonly, nonatomic) long long * subjectWords;
@property (nonatomic) BOOL hasMessageIsReply;
@property (nonatomic) BOOL messageIsReply;
@property (nonatomic) BOOL hasMessageIsForwarded;
@property (nonatomic) BOOL messageIsForwarded;
@property (nonatomic) BOOL hasUserIsTo;
@property (nonatomic) BOOL userIsTo;
@property (nonatomic) BOOL hasUserIsCc;
@property (nonatomic) BOOL userIsCc;
@property (nonatomic) BOOL hasUserIsBcc;
@property (nonatomic) BOOL userIsBcc;
@property (nonatomic) BOOL hasDateReceived;
@property (nonatomic) unsigned long long dateReceived;
@property (nonatomic) BOOL hasListId;
@property (nonatomic) long long listId;
@property (readonly, nonatomic) unsigned long long referencesCount;
@property (readonly, nonatomic) long long * references;
@property (readonly, nonatomic) unsigned long long toAddressCount;
@property (readonly, nonatomic) long long * toAddress;
@property (readonly, nonatomic) unsigned long long toDomainsCount;
@property (readonly, nonatomic) long long * toDomains;
@property (readonly, nonatomic) unsigned long long toIsVipsCount;
@property (readonly, nonatomic) BOOL * toIsVips;
@property (readonly, nonatomic) unsigned long long toContactIdsCount;
@property (readonly, nonatomic) long long * toContactIds;
@property (readonly, nonatomic) unsigned long long ccAddressCount;
@property (readonly, nonatomic) long long * ccAddress;
@property (readonly, nonatomic) unsigned long long ccDomainsCount;
@property (readonly, nonatomic) long long * ccDomains;
@property (readonly, nonatomic) unsigned long long ccIsVipsCount;
@property (readonly, nonatomic) BOOL * ccIsVips;
@property (readonly, nonatomic) unsigned long long ccContactIdsCount;
@property (readonly, nonatomic) long long * ccContactIds;
@property (readonly, nonatomic) unsigned long long bccAddressCount;
@property (readonly, nonatomic) long long * bccAddress;
@property (readonly, nonatomic) unsigned long long bccDomainsCount;
@property (readonly, nonatomic) long long * bccDomains;
@property (readonly, nonatomic) unsigned long long bccIsVipsCount;
@property (readonly, nonatomic) BOOL * bccIsVips;
@property (readonly, nonatomic) unsigned long long bccContactIdsCount;
@property (readonly, nonatomic) long long * bccContactIds;

/* instance methods */
- (void)dealloc;
- (void)clearSubjectWords;
- (void)addSubjectWords:(long long)words;
- (long long)subjectWordsAtIndex:(unsigned long long)index;
- (void)setSubjectWords:(long long *)words count:(unsigned long long)count;
- (void)clearReferences;
- (void)addReferences:(long long)references;
- (long long)referencesAtIndex:(unsigned long long)index;
- (void)setReferences:(long long *)references count:(unsigned long long)count;
- (void)clearToAddress;
- (void)addToAddress:(long long)address;
- (long long)toAddressAtIndex:(unsigned long long)index;
- (void)setToAddress:(long long *)address count:(unsigned long long)count;
- (void)clearToDomains;
- (void)addToDomain:(long long)domain;
- (long long)toDomainAtIndex:(unsigned long long)index;
- (void)setToDomains:(long long *)domains count:(unsigned long long)count;
- (void)clearToIsVips;
- (void)addToIsVip:(BOOL)vip;
- (BOOL)toIsVipAtIndex:(unsigned long long)index;
- (void)setToIsVips:(BOOL *)vips count:(unsigned long long)count;
- (void)clearToContactIds;
- (void)addToContactId:(long long)id;
- (long long)toContactIdAtIndex:(unsigned long long)index;
- (void)setToContactIds:(long long *)ids count:(unsigned long long)count;
- (void)clearCcAddress;
- (void)addCcAddress:(long long)address;
- (long long)ccAddressAtIndex:(unsigned long long)index;
- (void)setCcAddress:(long long *)address count:(unsigned long long)count;
- (void)clearCcDomains;
- (void)addCcDomain:(long long)domain;
- (long long)ccDomainAtIndex:(unsigned long long)index;
- (void)setCcDomains:(long long *)domains count:(unsigned long long)count;
- (void)clearCcIsVips;
- (void)addCcIsVip:(BOOL)vip;
- (BOOL)ccIsVipAtIndex:(unsigned long long)index;
- (void)setCcIsVips:(BOOL *)vips count:(unsigned long long)count;
- (void)clearCcContactIds;
- (void)addCcContactId:(long long)id;
- (long long)ccContactIdAtIndex:(unsigned long long)index;
- (void)setCcContactIds:(long long *)ids count:(unsigned long long)count;
- (void)clearBccAddress;
- (void)addBccAddress:(long long)address;
- (long long)bccAddressAtIndex:(unsigned long long)index;
- (void)setBccAddress:(long long *)address count:(unsigned long long)count;
- (void)clearBccDomains;
- (void)addBccDomain:(long long)domain;
- (long long)bccDomainAtIndex:(unsigned long long)index;
- (void)setBccDomains:(long long *)domains count:(unsigned long long)count;
- (void)clearBccIsVips;
- (void)addBccIsVip:(BOOL)vip;
- (BOOL)bccIsVipAtIndex:(unsigned long long)index;
- (void)setBccIsVips:(BOOL *)vips count:(unsigned long long)count;
- (void)clearBccContactIds;
- (void)addBccContactId:(long long)id;
- (long long)bccContactIdAtIndex:(unsigned long long)index;
- (void)setBccContactIds:(long long *)ids count:(unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* EDPBMessageHeaders_h */
