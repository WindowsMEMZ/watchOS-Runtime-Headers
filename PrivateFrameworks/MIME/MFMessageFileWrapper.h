//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFMessageFileWrapper_h
#define MFMessageFileWrapper_h
@import Foundation;

@class BOOL *, NSData, NSMutableDictionary, NSString;

@interface MFMessageFileWrapper : NSObject {
  /* instance variables */
  NSString *_filename;
  NSString *_preferredFilename;
  NSData *_data;
  NSMutableDictionary *_attributes;
  NSString *_linkDestination;
  NSString *_url;
  int _type;
}

@property (copy, nonatomic) NSString *path;

/* instance methods */
- (void)setType:(unsigned int)type;
- (unsigned int)type;
- (void)setCreator:(unsigned int)creator;
- (unsigned int)creator;
- (void)setFinderFlags:(unsigned short)flags;
- (unsigned short)finderFlags;
- (void)setMimeType:(id)type;
- (id)mimeType;
- (id)inferredMimeType;
- (void)setContentID:(id)id;
- (id)contentID;
- (void)setMessageID:(id)id;
- (id)messageID;
- (void)setEventUniqueID:(id)id;
- (id)eventUniqueID;
- (void)setMeetingStorePersistentID:(id)id;
- (id)meetingStorePersistentID;
- (void)setICSRepresentation:(id)icsrepresentation;
- (id)icsRepresentation;
- (void)setFileProtection:(id)protection;
- (id)fileProtection;
- (unsigned long long)fileSize;
- (void)_isImage:(BOOL *)image orPDFFile:(BOOL *)pdffile;
- (BOOL)isImageFile;
- (BOOL)isPDFFile;
- (BOOL)isUnzippableFile;
- (id)initWithPath:(id)path;
- (BOOL)isPlaceholder;
- (id)URL;
- (void)setURL:(id)url;
- (id)initRegularFileWithContents:(id)contents;
- (id)initSymbolicLinkWithDestination:(id)destination;
- (void)setPreferredFilename:(id)filename;
- (id)preferredFilename;
- (void)setFilename:(id)filename;
- (id)filename;
- (BOOL)isSymbolicLink;
- (BOOL)isRegularFile;
- (BOOL)isDirectory;
- (id)fileWrappers;
- (id)symbolicLinkDestination;
- (id)regularFileContents;
- (void)setFileAttributes:(id)attributes;
- (id)fileAttributes;
- (void)dealloc;
- (id)description;
@end

#endif /* MFMessageFileWrapper_h */
