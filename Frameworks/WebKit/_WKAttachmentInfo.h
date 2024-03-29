//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WKAttachmentInfo_h
#define _WKAttachmentInfo_h
@import Foundation;

@class NSData, NSFileWrapper, NSString;
@protocol {RefPtr<const API::Attachment, WTF::RawPtrTraits<const API::Attachment>, WTF::DefaultRefDerefTraits<const API::Attachment>>="m_ptr"^{Attachment}}, {RetainPtr<NSString>="m_ptr"^v};

@interface _WKAttachmentInfo : NSObject {
  /* instance variables */
  struct RefPtr<const API::Attachment, WTF::RawPtrTraits<const API::Attachment>, WTF::DefaultRefDerefTraits<const API::Attachment>> { struct Attachment *m_ptr; } _attachment;
  struct RetainPtr<NSString> { void *m_ptr; } _mimeType;
  struct RetainPtr<NSString> { void *m_ptr; } _utiType;
}

@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSFileWrapper *fileWrapper;

/* instance methods */
- (id)initWithAttachment:(const void *)attachment;
@end

#endif /* _WKAttachmentInfo_h */
