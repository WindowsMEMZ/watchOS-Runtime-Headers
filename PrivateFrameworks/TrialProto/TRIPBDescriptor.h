//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBDescriptor_h
#define TRIPBDescriptor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TRIPBDescriptor.h"
#include "TRIPBFileDescriptor.h"

@class NSArray, NSString;

@interface TRIPBDescriptor : NSObject<NSCopying> {
  /* instance variables */
  NSArray *fields_;
  NSArray *oneofs_;
  unsigned int storageSize_;
  Class messageClass_;
  TRIPBFileDescriptor *file_;
  BOOL wireFormat_;
  unsigned int extensionRangesCount_;
  const struct TRIPBExtensionRange { unsigned int x0; unsigned int x1; } * extensionRanges_;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *fields;
@property (readonly, nonatomic) NSArray *oneofs;
@property (readonly, nonatomic) const struct TRIPBExtensionRange { unsigned int x0; unsigned int x1; } * extensionRanges;
@property (readonly, nonatomic) unsigned int extensionRangesCount;
@property (readonly, nonatomic) TRIPBFileDescriptor *file;
@property (readonly, nonatomic) BOOL wireFormat;
@property (readonly, nonatomic) Class messageClass;
@property (readonly) TRIPBDescriptor *containingType;
@property (readonly) NSString *fullName;

/* class methods */
+ (id)allocDescriptorForClass:(Class)class rootClass:(Class)class file:(id)file fields:(void *)fields fieldCount:(unsigned int)count storageSize:(unsigned int)size flags:(unsigned int)flags;

/* instance methods */
- (id)initWithClass:(Class)class file:(id)file fields:(id)fields storageSize:(unsigned int)size wireFormat:(BOOL)format;
- (void)dealloc;
- (void)setupOneofs:(const char * *)oneofs count:(unsigned int)count firstHasIndex:(int)index;
- (void)setupExtraTextInfo:(const char *)info;
- (void)setupExtensionRanges:(const struct TRIPBExtensionRange { unsigned int x0; unsigned int x1; } *)ranges count:(int)count;
- (void)setupContainingMessageClassName:(const char *)name;
- (void)setupMessageClassNameSuffix:(id)suffix;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)fieldWithNumber:(unsigned int)number;
- (id)fieldWithName:(id)name;
- (id)oneofWithName:(id)name;
- (BOOL)isWireFormat;
@end

#endif /* TRIPBDescriptor_h */
