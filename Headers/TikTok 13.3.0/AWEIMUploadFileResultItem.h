//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AWEIMUploadFileResultItem : NSObject
{
    NSString *_objectID;
    NSString *_secrectKey;
    NSString *_md5;
    NSString *_tosKey;
    NSDictionary *_extra;
}

@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *tosKey; // @synthesize tosKey=_tosKey;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *secrectKey; // @synthesize secrectKey=_secrectKey;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;

@end

