//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IESLiveRoomFilter : NSObject
{
    _Bool _isNew;
    unsigned long long _filterID;
    NSString *_name;
    NSString *_sourcePath;
    NSString *_imageName;
    NSArray *_iconDownloadURLs;
    double _maxWhiteValue;
    NSString *_tagsUpdatedTimeStamp;
}

@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) NSString *tagsUpdatedTimeStamp; // @synthesize tagsUpdatedTimeStamp=_tagsUpdatedTimeStamp;
@property(nonatomic) double maxWhiteValue; // @synthesize maxWhiteValue=_maxWhiteValue;
@property(copy, nonatomic) NSArray *iconDownloadURLs; // @synthesize iconDownloadURLs=_iconDownloadURLs;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long filterID; // @synthesize filterID=_filterID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

