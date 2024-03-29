//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFMimeBody_h
#define MFMimeBody_h
@import Foundation;

#include "MFMessageBody.h"
#include "ECMimeBody-Protocol.h"
#include "MFMimePart.h"

@class BOOL *, NSArray, NSString;

@interface MFMimeBody : MFMessageBody<ECMimeBody> {
  /* instance variables */
  unsigned int x :16 _preferredAlternative;
  unsigned int x :16 _numAlternatives;
  long long _encryptedDescendantState;
}

@property (retain, nonatomic) NSArray *signers;
@property (nonatomic) BOOL isEncrypted;
@property (retain, nonatomic) MFMimePart *topLevelPart;
@property (readonly, nonatomic) BOOL hasEncryptedDescendantPart;
@property (readonly, copy, nonatomic) NSString *mimeSubtype;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) unsigned long long totalTextSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)versionString;
+ (id)copyNewMimeBoundary;

/* instance methods */
- (id)init;
- (id)partWithNumber:(id)number;
- (unsigned int)numberOfAttachmentsSigned:(BOOL *)signed encrypted:(BOOL *)encrypted;
- (id)attachments;
- (id)attachmentURLs;
- (BOOL)isHTML;
- (BOOL)isRich;
- (id)contentToOffset:(unsigned long long)offset resultOffset:(unsigned long long *)offset asHTML:(BOOL)html isComplete:(BOOL *)complete;
- (long long)numberOfAlternatives;
- (void)setPreferredAlternative:(long long)alternative;
- (long long)preferredAlternative;
- (id)preferredBodyPart;
- (id)textHtmlPart;
@end

#endif /* MFMimeBody_h */
