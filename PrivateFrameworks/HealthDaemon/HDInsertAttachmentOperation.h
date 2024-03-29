//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDInsertAttachmentOperation_h
#define HDInsertAttachmentOperation_h
@import Foundation;

#include "HDJournalableOperation.h"
#include "HDAttachment.h"

@class HDAssertion, NSArray;

@interface HDInsertAttachmentOperation : HDJournalableOperation {
  /* instance variables */
  HDAttachment *_attachment;
  NSArray *_attachmentReferences;
  BOOL _fileOnDisk;
  HDAssertion *_assertion;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAttachmentReferences:(id)references attachment:(id)attachment fileOnDisk:(BOOL)disk;
- (BOOL)performWithProfile:(id)profile transaction:(id)transaction error:(id *)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)transactionContext;
@end

#endif /* HDInsertAttachmentOperation_h */
