//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, GTLRStorage_Object_CustomerEncryption, GTLRStorage_Object_Metadata, GTLRStorage_Object_Owner, NSArray, NSNumber, NSString;

@interface GTLRStorage_Object : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *ETag; // @dynamic ETag;
@property(retain, nonatomic) NSArray *acl; // @dynamic acl;
@property(copy, nonatomic) NSString *bucket; // @dynamic bucket;
@property(copy, nonatomic) NSString *cacheControl; // @dynamic cacheControl;
@property(retain, nonatomic) NSNumber *componentCount; // @dynamic componentCount;
@property(copy, nonatomic) NSString *contentDisposition; // @dynamic contentDisposition;
@property(copy, nonatomic) NSString *contentEncoding; // @dynamic contentEncoding;
@property(copy, nonatomic) NSString *contentLanguage; // @dynamic contentLanguage;
@property(copy, nonatomic) NSString *contentType; // @dynamic contentType;
@property(copy, nonatomic) NSString *crc32c; // @dynamic crc32c;
@property(retain, nonatomic) GTLRStorage_Object_CustomerEncryption *customerEncryption; // @dynamic customerEncryption;
@property(retain, nonatomic) NSNumber *generation; // @dynamic generation;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *md5Hash; // @dynamic md5Hash;
@property(copy, nonatomic) NSString *mediaLink; // @dynamic mediaLink;
@property(retain, nonatomic) GTLRStorage_Object_Metadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) NSNumber *metageneration; // @dynamic metageneration;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GTLRStorage_Object_Owner *owner; // @dynamic owner;
@property(copy, nonatomic) NSString *selfLink; // @dynamic selfLink;
@property(retain, nonatomic) NSNumber *size; // @dynamic size;
@property(copy, nonatomic) NSString *storageClass; // @dynamic storageClass;
@property(retain, nonatomic) GTLRDateTime *timeCreated; // @dynamic timeCreated;
@property(retain, nonatomic) GTLRDateTime *timeDeleted; // @dynamic timeDeleted;
@property(retain, nonatomic) GTLRDateTime *timeStorageClassUpdated; // @dynamic timeStorageClassUpdated;
@property(retain, nonatomic) GTLRDateTime *updated; // @dynamic updated;

@end

